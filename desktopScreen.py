import RPi.GPIO as GPIO 
from time import sleep 
from subprocess import call
GPIO.setwarnings(False) 
GPIO.setmode(GPIO.BCM) 
GPIO.setup(26, GPIO.IN) 

pinActive = 0

while pinActive != 1:
	pinActive = GPIO.input(26)
	sleep(1)
	
if pinActive == 1:
	rc = call("./desktopScreen.sh")
	while pinActive != 0:
		pinActive = GPIO.input(26)
		sleep(1)
