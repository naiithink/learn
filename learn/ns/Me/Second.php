<?php
namespace Me\Second;

class Person {
    public function __construct($name) {
        $this->name = $name;
    }

    public function getName() {
        echo "Second\n";
        return $this->name;
    }

    public function setName($name) {
        $this->name = $name;
    }

    private $name;
}
