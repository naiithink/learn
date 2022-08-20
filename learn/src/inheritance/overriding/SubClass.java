package inheritance.overriding;

public class SubClass extends SuperClass {

    public void instanceSayHello() {
        System.out.println("Child, Instance: hello, world");
    }

    public static void staticSayHello() {
        System.out.println("Child, Static: hello, world");
    }
}
