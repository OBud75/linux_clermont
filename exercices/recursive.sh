#!/usr/bin/bash

print_stars() {
    local width=$1
    if [ $width -gt 0 ]; then
        echo -n "*"
        print_stars $((width-1))
    fi
}

draw() {
    local width=$1
    local height=$2
    if [ $width -le $height ]; then
        print_stars $width
        echo " "
        draw $((width+1)) $height
    fi
}

if [ $# -eq 1 ]; then
    draw 1 $1
else
    echo "Usage: $0 <number>"
fi
