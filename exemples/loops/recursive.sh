#!/usr/bin/bash

print_stars() {
    local n=$1
    if [ $n -gt 0 ]; then
        echo -n "*"
        print_stars $((n-1))
    fi
}

draw() {
    local y=$1
    local limit=$2
    if [ $y -le $limit ]; then
        print_stars $y
        echo " "
        draw $((y+1)) $limit
    fi
}

if [ $# -eq 1 ]; then
    draw 1 $1
else
    echo "Usage: $0 <number>"
fi

