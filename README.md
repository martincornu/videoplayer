Automatic display of a video on the HDMI output of a raspberry pi 4 depending on the status of an input.

1 service is launched when raspberry starts up: videoplayer.service.

The main script is btn_event.py (videoplayer.py is deprecated).

It launches a python script that display a black image and wait for falling ITs on GPIO 6.

External pull ups of 2k on rpi 3V3 are used for GPIO 6, GPIO 5 and GPIO 26 (LED).

So to launch the video you need to set LOW the output on the other puzzle (here an arduino).

You can also use GPIO 5 the same way (here a button).

A LED on GPIO 26 is set to HIGH while video is playing.
