public class Main {
    public static void main(String[] args) {
        Singleton single = Singleton.getInstance(10);

        System.out.println(single);
        System.out.println(System.identityHashCode(single));
        single.getInstance(20);
        System.out.println(single);
        System.out.println(System.identityHashCode(single));
    }
}
