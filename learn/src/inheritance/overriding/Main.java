package inheritance.overriding;

public class Main {

    public static void main(String[] args) {
        SubClass c = new SubClass();
        SuperClass s = c;

        SuperClass.staticSayHello();
        s.instanceSayHello();

        System.out.println("--");

        SubClass.staticSayHello();
        c.instanceSayHello();
    }
}
