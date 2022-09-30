package optional;

import java.util.Optional;
import java.util.function.Consumer;

final class PrintTen {

    public static void print(Integer e) {
        Optional<Integer> i = Optional.ofNullable(e);
        Consumer<Integer> print = d -> System.out.println(d);

        i.ifPresent(print);
    }

    public static void main(String[] args) {
        PrintTen.print(10);
        PrintTen.print(null);
    }
}
