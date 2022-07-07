<?php
$s1 = 'hello\nworld';
$s2 = "hello\nworld";

echo $s1 . "\n" . $s2 . "\n";

$s3 = <<<EIEI
            a
        b
    c
EIEI;

$s4 = <<<EIEI
            a
        b
    c
    EIEI;

echo $s3 . "\n";
echo $s4 . "\n";
