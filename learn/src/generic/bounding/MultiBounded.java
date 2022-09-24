package generic.bounding;

class A implements B, C {

    private int n;

    A(int n) {
        this.n = n;
    }

    public int getN() {
        return n;
    }

    public void setN(int n) {
        this.n = n;
    }

    @Override
    public String toString() {
        return "A{" +
                "n=" + n +
                '}';
    }
}

interface B {}

interface C {}

class D implements B, C {}

/**
 * A type variable with multiple bounds is a subtype of all the types listed in the bound.
 * If one of the bounds is a class, it must be specified first.
 *
 * For example:
 *      public class MultiBounded<T extends B & A & C> {}
 *
 * If bound A is not specified first, you get a compile-time error.
 */
class MultiBounded<T extends A & B & C> {

    private T t;

    public MultiBounded(T t) {
        this.t = t;
    }

    @Override
    public String toString() {
        return "MultiBounded{" +
                "t=" + t +
                '}';
    }

    public static void main(String[] args) {
        A a = new A(10);
        MultiBounded<A> obj = new MultiBounded<>(a);

        System.out.println(obj.toString());
    }
}
