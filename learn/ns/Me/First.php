<?php
namespace Me\First;

class Person {
    public function __construct($name) {
        $this->name = $name;
    }

    public function getName() {
        echo "First\n";
        return $this->name;
    }

    public function setName($name) {
        $this->name = $name;
    }

    private $name;
}
