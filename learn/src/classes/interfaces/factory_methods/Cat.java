package classes.interfaces.factory_methods;

public class Cat implements Animal {

    private String name;

    public Cat(String name) {
        this.name = name;
    }

    public String getName() {
        return name;
    }
}
