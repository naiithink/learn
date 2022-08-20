package inheritance.methodHiding;

public class ChildField extends SuperField {

    public int n = 15;

    public int getN() {
        return n;
    }

    public int getSuperN() {
        return super.n;
    }

    public static void sayHello() {
        System.out.println("Child: hello, world");
    }
}
