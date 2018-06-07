#! /bin/sh

find $(pwd)  \( -type f -o -type d \) -name ".*" -prune -o -print |wc -l
#| wc -l 
