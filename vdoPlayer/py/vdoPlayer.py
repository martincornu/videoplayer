#!/usr/bin/python3
# -*- coding: utf-8 -*-

# -----------------------------------------------------------------------------
#                                                                       Imports
from os import path
from configparser import ConfigParser
from multiprocessing import Process, Queue
from queue import Empty
from time import sleep
from defVLCplayer import VLC_player
import RPi.GPIO as GPIO
from control import feedback
GPIO.setwarnings(False) 
GPIO.setmode(GPIO.BCM) 
#                                                                       Imports
# -----------------------------------------------------------------------------

# =============================================================================
# CLASS / FUNCTIONS
# -----------------------------------------------------------------------------

# -----------------------------------------------------------------------------
#                                                             IOsManagement
class IOsManagement:
    """ Management of inputs & outputs
    """
    def __init__(self, inputs, outputs, sequence, feedback):
        """ init class
            inputs is a dict of {name: pin_number}
                example: {'but1': 14, 'but2', 27}
            outputs is a dict of {name: pin_number}
                example: {'red_led': 26, 'green_led', 23}
            sequence is a list of the sequence (of names in inputs) to follow
                example ['but1', 'but1', 'but2', 'but1']
            feedback is the queue to give feedback
        """
        self.inputs = inputs
        self.pin2name = {i:n for n, i in inputs.items()}   # {pin:name}
        self.pushed = {i:True for i in inputs.values()}
        self.outputs = outputs
        self.sequence = sequence
        self.len_seq = len(sequence)
        self.cur_seq = []
        # ----- declare IOs with GPIO
        for pin in inputs.values():
            GPIO.setup(pin, GPIO.IN)
            GPIO.add_event_detect(pin, GPIO.BOTH, callback=self.button_action)
        for pin in outputs.values():
            GPIO.setup(pin, GPIO.OUT)

    def _which(self, name):
        """ look for a subname in the list of names of outputs dict
            (cf. set_LED)
        """
        name = name.lower()
        for n, i in self.outputs.items():
            if name in n.lower(): break
        else: i =-1
        return i            

    def set_LED(self, which_one, value):
        """ set a LED which_one to value
            which_one is a subname of a name given in the .ini file
            example :
                in inifile: output2 = red_led, 14
            =>  obj.set_LED('Red', 1)
            which_one is unsensitive to case
               (ie. could be 'RED', 'red', 'Red' in the example)
        """
        if (pin := self._which(which_one)) > 0 : GPIO.output(pin, value)

    def button_action(self, pin):
        """ button on pin was pushed or released
        """
        if GPIO.input(pin):
            # --------------------- released
            if self.pushed[pin]:             # ----- verify if pushed before
                print("pushed ", pin)
                self.cur_seq.append(self.pin2name[pin]) # ----- add to sequence
                # ----- remove 1 if current sequence too long (left shift)
                if len(self.cur_seq) > self.len_seq: self.cur_seq.pop(0)
                if len(self.cur_seq) == self.len_seq and \
                       self.cur_seq == self.sequence:
                    # ----- if same length and both sequences equal -> Ok
                    putdata('launchVDO=1')
                    self.cur_seq = []        # ----- reset for future sequence
            self.pushed[pin] = False
        else:
            # --------------------- pushed and wait to be released
            self.pushed[pin] = True          
#                                                             IOsManagement
# -----------------------------------------------------------------------------

# -----------------------------------------------------------------------------
# CLASS / FUNCTIONS
# =============================================================================

# =============================================================================
#                                MAIN
# -----------------------------------------------------------------------------
if __name__ == "__main__":
    
    progName = 'vdoPlayer'
    
    # ------------------------------- open queue to communicate between process
    qIn = Queue()
    getdata = qIn.get
    putdata = qIn.put
    
    # ------------------------------------------------------------- read config
    config = ConfigParser()
    config.read(path.join('..', progName + '.ini'), encoding='utf-8')

    movie = path.join('..', 'vdo', config['MOVIE']['name'])
    black = path.join('..', 'img', config['BACKGROUND']['name'])

    # ------------------------------------------------------------- GPIO config
    IOcfg = config['GPIO']

    ios = IOsManagement(\
          {n.strip():int(i) for n, i in [IOcfg[f'input{n+1}'].split(',')    \
                                for n in range(int(IOcfg['nb_inputs']))]},  \
          {n.strip():int(i) for n,i in [IOcfg[f'output{n+1}'].split(',')    \
                              for n in range(int(IOcfg['nb_outputs']))]}, \
          [n.strip()            for n in IOcfg['sequence'].split(',')],     \
          putdata)                             # Management of buttons and LED

    # -------------------------------------------------------- Launch VLCPlayer
    qVLC = Queue()
    pVLC = Process(target=VLC_player, args=(qVLC, putdata))
    pVLC.start()
    send_VLC = qVLC.put

    sleep(int(config['PARAMS']['boot_sleep']))
    
    # ----- initialize with black screen & green led on, red led off
    send_VLC('File>' + black)
    sleep(1)   # let time for vlc launch
    send_VLC('Pause')
    ios.set_LED('Green', 0)
    ios.set_LED('Red', 1)
    vdo_on = False

    MainOn = True
    wait4data = True
    
    while MainOn:

        try:
            ret = getdata(wait4data)
        except Empty:
            ret = []
        except KeyboardInterrupt:
            ret = 'exit=1'

        if ret:
            cmd, val = ret.split('=')

            if 'exit' in cmd:
                MainOn = False
                send_VLC('VLCExit')
                wait4data = False

            elif 'launchVDO' in cmd:
                send_VLC('File>' + movie)
                vdo_on = True
                ios.set_LED('Green', 1)
                ios.set_LED('Red', 0)

            elif 'endPlay' in cmd:
                send_VLC('File>' + black)
                sleep(1)   # let time for vlc launch
                send_VLC('Pause')
                if vdo_on:
                    ios.set_LED('Green', 0)
                    ios.set_LED('Red', 1)
                vdo_on = False

    qIn.cancel_join_thread()
    # ------------------------------------------------ wait sub processes ended
    pVLC.join()
    GPIO.cleanup()
#
# =============================================================================

