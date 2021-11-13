#!/usr/bin/env python3

import signal
import sys
import RPi.GPIO as GPIO
from time import *
import time as t
from subprocess import call

LED_GPIO = 26
#BUTTON_GPIO = 5
ARDUINO_GPIO = 5

VIDEO_DURATION_S = 45   # duration of the video to play in seconds
BOOT_SLEEP = 3          # duration of sleep at boot in seconds

def signal_handler(sig, frame):
    GPIO.cleanup() 
    sys.exit(0)

def input_rising_callback(channel):
    print("Input rised!")
    time_now = t.time()
    
    # clear playing flag to relaunch video if its duration is reached
    if (input_rising_callback.video_is_playing == 1) and (time_now > (input_rising_callback.time_start + VIDEO_DURATION_S)) :
        input_rising_callback.video_is_playing = 0
        print("clear flag!")
    
    if input_rising_callback.video_is_playing == 0 :
        input_rising_callback.video_is_playing = 1
        input_rising_callback.time_start = time_now
        
        input_rising_callback.led_state = not input_rising_callback.led_state
        GPIO.output(LED_GPIO, input_rising_callback.led_state)

        print("Launch video")
        rc = call("./videoplayer.sh")
        rc = call("./offScreen.sh")
        
        input_rising_callback.led_state = not input_rising_callback.led_state
        GPIO.output(LED_GPIO, input_rising_callback.led_state)
        

# member variables of input_rising_callback() fun
input_rising_callback.video_is_playing = 0
input_rising_callback.time_start = 0
input_rising_callback.led_state = False

if __name__ == '__main__':
    GPIO.setmode(GPIO.BCM)
    #GPIO.setup(BUTTON_GPIO, GPIO.IN)    #external pullup 2k
    GPIO.setup(ARDUINO_GPIO, GPIO.IN)   #external pullup 2k
    GPIO.setup(LED_GPIO, GPIO.OUT)  
    GPIO.output(LED_GPIO, input_rising_callback.led_state)
    
    sleep(BOOT_SLEEP)
    rc = call("./offScreen.sh")

    #GPIO.add_event_detect(BUTTON_GPIO, GPIO.FALLING, 
     #       callback=input_rising_callback, bouncetime=100)
    
    GPIO.add_event_detect(ARDUINO_GPIO, GPIO.RISING, callback=input_rising_callback) # anti-boucing hardware
    
    signal.signal(signal.SIGINT, signal_handler)
    signal.pause()
