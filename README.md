Automatic display of a video on the HDMI output of a raspberry pi 3 depending on the status of an input.

1 service is launched when raspberry starts up: videoplayer.service.
It launches a python script that display a black image and wait for rising or falling ITs on GPIO 23.
An external pull up of 2k is used for GPIO 23.

So to launch the video you need to set LOW the output on the other puzzle.

