<?php
namespace Me;

require 'First.php';
require 'Second.php';

$foo = new First\Person("test");
echo $foo->getName1() . "\n";
