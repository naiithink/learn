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

class Creature {

    public static void main(String[] args) {
        CreatureA<Sphinx> creature1 = new CreatureA<>();

        System.out.println("Canon: " + creature1.getClass().getCanonicalName());
        System.out.println("Name: " + creature1.getClass().getCanonicalName());

        // CreatureB<Animal> creature2 = new CreatureB<>();
        // System.out.println("Canon: " + creature2.getClass().getCanonicalName());
        // System.out.println("Name: " + creature2.getClass().getCanonicalName());
        
        CreatureC<Sphinx> creature3 = new CreatureC<>();
        System.out.println("Canon: " + creature3.getClass().getCanonicalName());
        System.out.println("Name: " + creature3.getClass().getCanonicalName());
    }
}
