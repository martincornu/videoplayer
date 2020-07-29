import RPi.GPIO as GPIO
from time import sleep 
from subprocess import call
GPIO.setwarnings(False) 
GPIO.setmode(GPIO.BCM) 
GPIO.setup(23, GPIO.IN) #external pull up 2k
sleep(10)
rc = call("./offScreen.sh")

while 1:
	GPIO.wait_for_edge(23, GPIO.FALLING)
	rc = call("./videoplayer.sh")
	rc = call("./offScreen.sh")
	GPIO.wait_for_edge(23, GPIO.RISING)

GPIO.cleanup()
