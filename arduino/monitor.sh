#!/bin/sh
arduino-cli monitor -p /dev/ttyACM0 -b arduino:avr:mega:cpu=atmega2560 
#--config 9600 --describe