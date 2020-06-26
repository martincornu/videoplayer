Automatic display of a video on the HDMI output of a raspberry pi 3 depending on the status of an input.

Two services are launched when raspberry starts up:
- videoplayer.service: launches a python script that turns off the HDMI output, reads the GPIO 23 state in loop and launches a video when GPIO 23 goes high. Then the script turns off the HDMI output. 
- desktopScreen.service: Launches a python script that reads the state of the GPIO 26 in a loop and displays the desktop on HDMI when GPIO 26 goes high.
