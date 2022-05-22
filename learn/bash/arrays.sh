#!usr/bin/env bash

# declare -a hello

hello=("foo" "bar" "baz")

echo "loop A: \$*"
for i in ${hello[*]}
do
    echo $i
done

echo "loop B: \$@"
for i in ${hello[@]}
do
    echo $i
done