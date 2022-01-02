# -*- coding: utf-8 -*-

""" VLC Player
    ==========
"""

from vlc import MediaPlayer, EventType #, Instance
from os import listdir

# ----------------------------------------------------------------------------
# VLC Player
# ----------------------------------------------------------------------------
def VLC_player(qVLC, feedback, verbose=False):
    """
    How to use the module: 
    
    qIn = Queue()               # declare a queue to communicate
    getdata = qIn.get           # declare the get function
    putdata = qIn.put           # declare the put function for feedback
    
    qVLC = Queue()              # declare a queue dedicated to VLC
    # ----- launch the VLC process
    pVLC = Process(target=VLC_player, args=(qVLC, putdata))
    pVLC.start()
    send_VLC = qVLC.put         # simplify the notation to communicate with VLC

    # ----- manage the options
    send_VLC('Opt>fullscreen=1')      # or fullscreen=0, to set or not fullscreen
    send_VLC('Opt>aspect-ratio=16x9') # aspect-ratio of the screen
    send_VLC('Opt>loop=1')
         # if reading a directory : loop (or not) the content of it
         # if reading a file : loop the file
    # ----- Reading a directory
    send_VLC('Dir>dir_name')      # read the files in the directory 'dir_name'
    # ----- Reading a file (or an image*)
    send_VLC('File>dir_name')     # read the file
                                  #* an image will stay 5 seconds

    # ----- feedback: possible feedbacks
    endPlay=1                     # when a file ends
    the windows Id after sending qVLC.put('getHWND')
    """

    if verbose: print('>> VLC player: On')
    # vlc_instance = Instance(["--no-xlib"])
    # vlcp = MediaPlayer(vlc_instance)
    vlcp = MediaPlayer()
    vlcp.set_fullscreen(True)

    def fnext(event, put): put('next')
    
    evmngr = vlcp.event_manager()
    evmngr.event_attach(EventType.MediaPlayerEndReached, fnext, qVLC.put)
    VLCOn = True
    lst = []
    ilst = -1
    mtype = ''
    loop = False

    while VLCOn:

        cmd = qVLC.get()

        if '>' in cmd:
            mtype, name = cmd.split('>')
            if mtype == 'File':
                lst = [name]
            elif mtype == 'Dir':
                lst = ['{}\\{}'.format(name,fn) for fn in listdir(name)]
            elif mtype == 'Opt':
                # fullscreen, loop
                cmd, val = name.split('=')
                if cmd == 'fullscreen': 
                    vlcp.set_fullscreen(bool(int(val)))
                elif cmd == 'aspect-ratio':
                    vlcp.video_set_aspect_ratio(val)
                elif cmd == 'loop':
                    loop = bool(int(val))
            ilst = 0
            qVLC.put('play')

        elif cmd == 'play':
            vlcp.stop()
            vlcp.set_mrl(lst[ilst])
            vlcp.play()

        elif cmd == 'next':
            if mtype =='File':
                if loop:
                    qVLC.put('play')
                else:
                    feedback('endPlay=1')
                    vlcp.stop()
            else:
                ilst += 1
                if ilst >= len(lst): ilst = 0
                if loop:
                    qVLC.put('play')
                else:
                    feedback('endPlay=1')
                    vlcp.stop()
            
        elif cmd == 'Pause':
            vlcp.pause()
            
        elif cmd == 'Stop':
            if verbose: print('\tVLCPlayer: ready...')
            vlcp.stop()

        elif cmd == 'getHWND':
            feedback(vlcp.get_hwnd())
                
        elif cmd == 'VLCExit':
            if verbose: print('\tVLCPlayer: exiting...')
            vlcp.release()
                
            VLCOn = False
            
    qVLC.cancel_join_thread()
    if verbose: print('<< VLC player: Out')
        

    
