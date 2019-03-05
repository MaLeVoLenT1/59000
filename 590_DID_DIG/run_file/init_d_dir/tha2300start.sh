#!/bin/bash

PROG_DIR=/usr/bin/tha2300
PROG=tha2300
ARGS="-qws -display transformed:rot180"


QWS_MOUSE_PROTO="tslib:/dev/input/touchscreen0"
QWS_SIZE="$(fbset | awk '/geometry/ { printf "%sx%s",$2,$3 }')"
TSLIB_TSDEVICE=/dev/input/touchscreen0

export QWS_MOUSE_PROTO
export QWS_SIZE
export TSLIB_TSDEVICE


#RS485 Mode , 485 Auto Toggle  and USB power on

echo 4 > /sys/class/gpio/rs232_4xx/data
echo 2 > /sys/class/gpio/rtsctl/data
echo 1 > /sys/class/gpio/otgpwren/data

case "$1" in
start)


echo -n "Starting tha2300"
nohup nice -20 $PROG_DIR/./$PROG $ARGS 2>/dev/null 1>/dev/null &

echo " ..done!"
    ;;

stop)
    echo -n "Stopping tha2300"
    killall -9 $PROG
    echo " ..done!"
    ;;
  *)
    echo "Usage: /etc/init.d/tha2300 {start|stop}"
   esac
exit
