#!/usr/bin/bash

DIR="/home/OBud/hexagone/Linux_B1/exemples/logs"
LOGFILE="$DIR/time_logs.txt"

if [ ! -d "$DIR" ]; then
	mkdir -p "$DIR"
	logger -s "$DIR created"
fi

if [ ! -f "$LOGFILE" ]; then
	touch "$LOGFILE"
	logger -s "$LOGFILE created"
fi

while true; do
	echo "$(date) : $USER : new log" >> $LOGFILE
	sleep 15
done
