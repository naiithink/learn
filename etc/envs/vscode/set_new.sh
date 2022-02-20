#!/bin/bash

if [ $1 ]
then
    new_tmpl=$1
else
    echo "Could not find the template file."
fi

if [ !($cfile) ]
then
    cfile=0
fi

alias new='cp /mnt/c/Users/naiithink/volumes/mountable/Git/private/learn/at-u/KU/Y1-02/01418113-LAB/LAB03/init.c ${cfile}.c && export cfile=$(( $cfile + 1 )) && code "$(( $cfile - 1 )).c"'