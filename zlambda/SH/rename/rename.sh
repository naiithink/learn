#!/usr/bin/env bash

a="hello.txt"
b="eiei.txt"
c="sfjkl.jpg"

n=0
for i in $a $b $c;
do
    # echo $i
    # echo ${i%.*}
    echo ${i#*.}
done
