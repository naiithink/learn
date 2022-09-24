package generic.blabla;

public class Main {

    public static void main(String[] args) {
        Pair<Integer, String> p1 = new Pair<>(0, "hello");
        Pair<Integer, String> p2 = new Pair<>(1, "world");
        Pair<Integer, String> p3 = new Pair<>(0, "hello");

        // Type inference; compiler will infer the type that is needed
        // boolean same = Util.<Integer, String>compare(p1, p2);
        boolean same = Util.compare(p1, p2);

        System.out.println();
        System.out.println(Util.compare(p1, p3));
    }
}
