package inheritance.offsprings;

public class Main {

    public static void main(String[] args) {
        SecondSub off = new SecondSub();

        System.out.println(off.getClass().getName());
        off.sayHello();
    }
}
