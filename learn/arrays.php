<?php
$values = [<<<EIEI
a
    b
        c
EIEI, 'd e f'];

var_dump($values);

$some_keys = array(
    "a",
    "b",
    "c",
    1 => "d",
    "e",
);

var_dump($some_keys);

echo $some_keys[0] . "\n";
echo $some_keys[1] . "\n";
echo $some_keys['1'] . "\n";

$arr = [
    "a",
    "b",
    "c",
    "d",
];

$arr[] = "x";
$arr[] = "y";
$arr['true'] = "z";

var_dump($arr);
echo $arr[true] . "\n";
echo $arr['true'] . "\n";
