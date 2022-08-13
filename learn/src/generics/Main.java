package generics;

public class Main {

    public static void main(String[] args) {
        Integer n = 10;
        Integer n1;
        String s = "hello, world";

        System.out.println(n);

        Box a = new Box();
        a.set(s);
        System.out.println(a.get());

        a.set(s);
        // n1 = a.get();
        System.out.println(a.get());

        // Box b = new Box(s);
        // System.out.println(b);
    }
}
