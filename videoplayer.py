import RPi.GPIO as GPIO 
from time import sleep 
from subprocess import call

GPIO.setwarnings(False) 
GPIO.setmode(GPIO.BCM) 
GPIO.setup(23, GPIO.IN) 

pinActive = 0

rc = call("./offScreen.sh")

while pinActive != 1:
	pinActive = GPIO.input(23)
	sleep(1)
	
if pinActive == 1:
	rc = call("./videoplayer.sh")
	while pinActive != 0:
		pinActive = GPIO.input(23)
		sleep(1)
