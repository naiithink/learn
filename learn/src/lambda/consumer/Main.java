package lambda.consumer;

public class Main {

    public static void main(String[] args) {
        Consumer<String> print = s -> System.out.println(s);
        print.accept("hello, world");
    }
}
