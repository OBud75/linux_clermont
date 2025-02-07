#!/usr/bin/bash

DIR="/home/OBud/hexagone/Linux_B1/exemples/logs"
LOGFILE="$DIR/time_logs.txt"

if [ ! -d "$DIR" ]; then
	mkdir -p "$DIR"
fi

if [ ! -f "$LOGFILE" ]; then
	touch "$LOGFILE"
fi

while true; do
	echo "$(date) : $USER : new log" >> $LOGFILE
	sleep 15
done
