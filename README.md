## Ember 3D Printer Firmware


###Repository Overview
Folder  | Contents
------------- | -------------
/docs  | Doumentation of the firmware architecture and the APIs it exposes to web and local network clients. 
/C++ | The component (smith), that drives the printing process and responds to user input.
/ruby | The components (smith-server and smith-client) that communicate with web and local network applications.
/AVR/MotorController | AVR firmware for controlling the motors that move the build head and resin tray, basd on commands from smith.
/AVR/FrontPanel | AVR firmware for controlling the OLED display and LED ring in the front panel.
/AVR/twiboot | The bootloader that loads the AVR firmware via I2C.
/Utilities | Utility for sending commands to motor controller and for controlling AVR bootloader.
/deploy | Scripts for packaging and deploying the firmware and building development systems.
/infrastructure | Components to assist with automated builds.

###Development System Image
An image of the SD card we use for development can be downloaded from [here](http://printer-firmware.s3-website-us-east-1.amazonaws.com/development_image).  To use it, burn it to an 8GB or greater SD card, then ssh in to it and run:

```
resize-rootfs
reboot
```
