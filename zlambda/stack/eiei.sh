#! /bin/bash

BUFFER=1

make 01 02 03

eval "ls -a"
eval "./01 \| $BUFFER"
eval "./02 $BUFFER \| $BUFFER"
eval "./03 $BUFFER \| $BUFFER"