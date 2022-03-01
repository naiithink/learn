#!/bin/sh

THIS_FILE=$( basename "$0" )

if [ $1 ]; then
  echo "$THIS_FILE takes no arguments."
  exit 1
fi

echo "$THIS_FILE: Running config..."

TASK=0

TASK=$(( $TASK + 1))
TASK_NAME="GET SHELL ENV"
if [ ${shell} == ${CONFIG_SHELL} ]; then
  SHELL=${shell}
  echo "1 task ${TASK}: $TASK_NAME" 
else
  echo "0 task ${TASK}: $TASK_NAME"
  echo "Conflicted \$SHELL envs, skipped."
fi

TASK=$(( $TASK + 1 ))
TASK_NAME="SET CC CFLAGS"
EXIT_STATUS=export CC="clang" CFLAGS="-g -Werror -lm"
if [ EXIT_STATUS ]; then
  echo "1 task $TASK: $TASK_NAME"
else
  echo "0 task $TASK: $TASK_NAME"
fi

TASK=$(( $TASK + 1 ))
TASK_NAME="SET CXX CXXFLAGS"
EXIT_STATUS=export CXX="clang++" CXXFLAGS="-g -Werror"
if [ EXIT_STATUS ]; then
  echo "1 task $TASK: $TASK_NAME"
else
  echo "0 task $TASK: $TASK_NAME"
fi

echo "${THIS_FILE}: Done."