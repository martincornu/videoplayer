#!/bin/bash
echo "Launch omx player"
sudo /opt/vc/bin/tvservice -p
omxplayer omber-n17.mp4
sudo /opt/vc/bin/tvservice -o
