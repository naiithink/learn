package generic.bounding.animals;

class Animal {}

interface Animalia {}

interface Feline {}

interface Purrable {}

class Cat extends Animal {}

class Sphinx extends Cat implements Feline, Purrable {}

class CreatureA<T extends Animal> {}

class CreatureB<T extends Cat> {}

class CreatureC<T extends Cat & Feline & Purrable> {}

class CreatureList {



}
