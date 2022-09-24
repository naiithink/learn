package lambda.predicate;

public class Main {

    public static void main(String[] args) {
        Predicate<String> pred = s -> s.equals("hello, world");
        System.out.println(pred.test("hello, world"));
        System.out.println(pred.test("hello"));
    }
}
