#!/bin/bash

true=1
false=0
UNAME=$(uname)
declare -a PKGMGR

if [ $1 = "install" ]
then
    case $UNAME | tr "[:lower:]" in
    linux)
        PKGMGR[0]="dpkg"
        PKGMGR[1]="apt-get"
        PKGMGR[2]="apt"
        ;;
    darwin)
        PKGMGR[0]="brew"
        ;;

    for mgr in ${PKGMGR[@]}
    do
fi
  
if [  ]

case [ -d "vim" ] in
  if 

if [ UNAME = "linux" ]
then



if [ -d "vim" ] && [ ls -a "vim" ]
then
elif [ ! -d "vim" ]
then
  eval "$mkdir vim"
elif [ -d "vim" ] && [ ls -a "vim" ]
then
  
fi