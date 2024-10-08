#!/bin/sh
arduino-cli core install arduino:avr
arduino-cli lib install Servo
arduino-cli sketch new RacingCar
sudo chmod a+rw /dev/ttyACM0     