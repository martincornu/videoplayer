#!/usr/bin/env python3

import signal
import sys
import RPi.GPIO as GPIO
from time import sleep
from subprocess import call

BUTTON_GPIO = 5
ARDUINO_GPIO = 6

def signal_handler(sig, frame):
    GPIO.cleanup() 
    sys.exit(0)

def input_falling_callback(channel):
    print("Button pressed!")
    if input_falling_callback.video_is_playing == 0 :
        input_falling_callback.video_is_playing = 1
        rc = call("./videoplayer.sh")
        rc = call("./offScreen.sh")

input_falling_callback.video_is_playing = 0

if __name__ == '__main__':
    GPIO.setmode(GPIO.BCM)
    GPIO.setup(BUTTON_GPIO, GPIO.IN, pull_up_down=GPIO.PUD_UP)
    GPIO.setup(ARDUINO_GPIO, GPIO.IN, pull_up_down=GPIO.PUD_UP)
    
    sleep(10)
    rc = call("./offScreen.sh")

    GPIO.add_event_detect(BUTTON_GPIO, GPIO.FALLING, 
            callback=input_falling_callback, bouncetime=100)
    
    GPIO.add_event_detect(ARDUINO_GPIO, GPIO.FALLING, 
            callback=input_falling_callback, bouncetime=100)
    
    signal.signal(signal.SIGINT, signal_handler)
    signal.pause()
