<?php
namespace Me\First;

class Person {
    public function __construct($name) {
        $this->name = $name;
    }

    public function getName1() {
        return $this->name;
    }

    public function setName1($name) {
        $this->name = $name;
    }

    private $name;
}
