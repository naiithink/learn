<?php
// namespace Me;
use Me\First as First, TheFirst;

require 'First.php';
require 'Second.php';

$foo = new Me\First\Person("foo");
echo $foo->getName() . "\n";

$bar = new Me\Second\Person("bar");
echo $bar->getName() . "\n";
