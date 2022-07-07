<?php
$some_var = 10;

echo gettype($some_var) . "\n";

settype($some_var, "float");

echo gettype($some_var) . "\n";

$some_var = (float) $some_var;

echo gettype($some_var) . "\n";
