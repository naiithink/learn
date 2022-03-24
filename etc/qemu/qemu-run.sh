#!/bin/sh

#                     1      2        3                                              4          5                          6          7            8         9
RUN_FORMAT="qemu-run <arch> <n_cpus> <accel: default|kvm|xen|hax|hvf|nvmm|whpx|tcg> <megs_ram> <input_device: default|..> <img_path> <drive_path> <gui|cli> <name: default|[vm_name[,<process=>process_name]]>"

# IS THE USER ASKING FOR HELP?
if [ $1 == "help" ]; then
  echo $RUN_FORMAT 1>&2
  exit 1
fi

PLATFORM=$(uname -s)

# NAME
if [[ $9 != "default" ]]; then
  NAME=$9
else
  NAME="myQEMU,process=myQEMU";
fi

# INSTANCE INFO
IMG=$6
DRIVE="file=$7"

# MACHINE
if [ $1 == "arm64" ]; then
  ARCH="aarch64"
else
  ARCH=$1;
fi

MACHINE="type=virt"
CPU="host"

if [ $3 == "default" ]; then
  if [ $PLATFORM == "Darwin" ]; then
    ACCEL="hvf"
  else
    ACCEL="tcg";
  fi
else
  ACCEL=$3;
fi

SMP=$2
MEM=$4

# IO
VGA="virtio"
DISPLAY="cocoa,show-cursor=on"

if [ $5 == "default" ]; then
  STDIN="usb-tablet"
else
  STDIN=$5;
fi

if [ $8 == "cli" ]; then
  MONITOR="stdio"
elif [ $8 == "gui" ]; then
  echo "Please specify output device" 1>&2
  read MONITOR
  if [[ -z $MONITOR ]]; then
    MONITOR="vc"
  fi
else
  echo "Error: No interface provided." 1>&2;
  exit 1
fi

SOUND="intel-hda"

# FORMUP THE COMMAND
TORUN="qemu-system-$ARCH \
 -machine $MACHINE \
 -cpu $CPU \
 -accel $ACCEL \
 -smp $SMP \
 -m $MEM \
 -device $STDIN \
 -device $SOUND \
 -name $NAME \
 -cdrom $IMG \
 -drive $DRIVE \
 -usb \
 -display $DISPLAY \
 -vga $VGA \
 -monitor $MONITOR"

# LET USER CHECK THE COMMAND ABOUT TO RUN
echo 
echo $TORUN
echo
echo "Is that correct? [y/N]" 1>&2
read CMD_CORRECT

# PERFORM OR NOT
if [[ $CMD_CORRECT == "y" || $CMD_CORRECT == "Y" ]]; then
  eval $TORUN
else
  echo "Stopped." 1>&2;
fi

exit 0
