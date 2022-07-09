<?php
namespace Me\Second;

class Person {
    public function __construct($name) {
        $this->name = $name;
    }

    public function getName2() {
        return $this->name;
    }

    public function setNam2($name) {
        $this->name = $name;
    }

    private $name;
}
