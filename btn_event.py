#!/usr/bin/env python3

import signal
import sys
import RPi.GPIO as GPIO
from time import *
import time as t
from subprocess import call

LED_GPIO = 26
BUTTON_GPIO = 5
ARDUINO_GPIO = 6

VIDEO_DURATION_S = 55   # duration of the video to play in seconds

def signal_handler(sig, frame):
    GPIO.cleanup() 
    sys.exit(0)

def input_falling_callback(channel):
    print("Button pressed!")
    time_now = t.time()
    
    # clear playing flag to relaunch video if its duration is reached
    if (input_falling_callback.video_is_playing == 1) and (time_now > (input_falling_callback.time_start + VIDEO_DURATION_S)) :
        input_falling_callback.video_is_playing = 0
    
    if input_falling_callback.video_is_playing == 0 :
        input_falling_callback.video_is_playing = 1
        input_falling_callback.time_start = time_now
        
        input_falling_callback.led_state = not input_falling_callback.led_state
        GPIO.output(LED_GPIO, input_falling_callback.led_state)

        rc = call("./videoplayer.sh")
        rc = call("./offScreen.sh")
        
        input_falling_callback.led_state = not input_falling_callback.led_state
        GPIO.output(LED_GPIO, input_falling_callback.led_state)
        

# member variables of input_falling_callback() fun
input_falling_callback.video_is_playing = 0
input_falling_callback.time_start = 0
input_falling_callback.led_state = False

if __name__ == '__main__':
    GPIO.setmode(GPIO.BCM)
    GPIO.setup(BUTTON_GPIO, GPIO.IN)    #external pullup 2k
    GPIO.setup(ARDUINO_GPIO, GPIO.IN)   #external pullup 2k
    GPIO.setup(LED_GPIO, GPIO.OUT)  
    GPIO.output(LED_GPIO, input_falling_callback.led_state)
    
    sleep(10)
    rc = call("./offScreen.sh")

    GPIO.add_event_detect(BUTTON_GPIO, GPIO.FALLING, 
            callback=input_falling_callback, bouncetime=100)
    
    GPIO.add_event_detect(ARDUINO_GPIO, GPIO.FALLING, 
            callback=input_falling_callback, bouncetime=100)
    
    signal.signal(signal.SIGINT, signal_handler)
    signal.pause()
