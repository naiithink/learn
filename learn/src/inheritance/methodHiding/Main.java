package inheritance.methodHiding;

public class Main {

    public static void main(String[] args) {
        ChildField f = new ChildField();

        System.out.println("Child: " + f.getN());
        System.out.println("Super: " + f.getSuperN());

        f.sayHello();
    }
}
