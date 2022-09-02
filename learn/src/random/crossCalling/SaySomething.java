package random.crossCalling;

public class SaySomething {

    private int n;

    public SaySomething(int n) {
        this.n = n;
    }
    public int getN() {
        return n;
    }

    public void setN(int n) {
        this.n = n;
    }

    public void sayHello() {
        System.out.println("hello, world");
    }

    public void sayHi() {
        System.out.println("hi, world");
    }


    @Override
    public String toString() {
        return "SaySomething [n=" + n + "]";
    }
}
