# Videoplayer

The aim of the project is to launch a video on a video projector when the player makes the right combination by pressing 4 buttons.

## How it works

The main script is `vdoPlayer.py` which uses the module `defVLCplayer.py`.

The script consists of two processes: one to detect the pressing of buttons and another to drive the videos.

At start-up, a black image is displayed. When the player makes the right combination of buttons then a video starts, then the black image is displayed. And so on.

The combination to be achieved by pressing the buttons is currently btn1, btn2, btn3, btn4, btn3, btn4.

## Configuration

- Raspberry pi OS bullseye installed on [16GB usb key 3.1](https://www.amazon.fr/gp/product/B077Y149DL/ref=ppx_yo_dt_b_asin_title_o04_s00?ie=UTF8&psc=1).
- Enable the service `vdoplayer.service` to launch the script at Rpi boot.

- Remove the Rpi screen saver:
  - `sudo apt-get install xscreensaver`
  - Once installed, go to Rpi desktop "Menu" (left top corner)
  - Go to `preference --> screensaver`.
  - You will see a screen saver main menu. In the mode drop-down menu, select "disable screensaver" then close the window.
  - Reboot the Raspberry PI.

## Hardware

The system consists of a raspberry pi 4, a bounce filter and 4 buttons:

![sch-system.png](/img/sch-system.png)

The bounce filter consists of two [MAX6817EUTs](https://fr.rs-online.com/web/p/suppresseurs-de-rebonds/1897453) to filter 4 inputs.

Buttons 1, 2, 3 and 4 are respectively connected to GPIOs 4, 17, 27 and 22 of the raspberry.

## Illustrations

Here is the system in its box:

<img src="/img/system-box.jpg" alt="system-box.jpg" style="zoom:50%;" />

A shielded Ethernet cable was used to connect the 4 buttons to the box:

<img src="/img/box-closed.jpg" alt="box-closed.jpg" style="zoom:50%;" />

## Credits

Special thanks to [dhal](https://community.element14.com/login?ReturnUrl=%2Fmembers%2Fdhal) for his help with this project. His advice and his [farming simulator article](https://community.element14.com/members-area/personalblogs/b/blog/posts/tractor-simulator-cabin-tractor-interface-with-farming-simulator-17-part-2---the-hardware) were very helpful.
