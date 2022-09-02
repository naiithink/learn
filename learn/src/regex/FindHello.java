package regex;

import java.util.regex.Pattern;

public class FindHello {

    private static final String REGEX;

    private static final Pattern PATTERN;

    static {
        REGEX = ".*[Hh]ello(\\n|\\r\\n)?$";
        PATTERN = Pattern.compile(REGEX);
    }

    public static boolean endsWithHello(String string) {
        return PATTERN.matcher(string).matches();
    }

    public static void main(String[] args) {
        System.out.println("eiei\t" + FindHello.endsWithHello("eiei"));
        System.out.println("hello.\t" + FindHello.endsWithHello("hello."));
        System.out.println("Hello\t" + FindHello.endsWithHello("Hello"));
        System.out.println("hello\t" + FindHello.endsWithHello("hello"));
    }
}
