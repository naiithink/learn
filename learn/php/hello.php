<?php
echo "hello, world\n";
$name = "naiithink";

if ($name === "naiithink")
    echo "yes $name\n";
else
    echo "no.\n";

$sys = posix_uname();

print_r($sys);
// var_dump($sys);
?>
