package classes.abstraction;

public abstract class Number {

    private static int number;

    public static int getNumber() {
        return number;
    }

    public static void setNumber(int n) {
        number = n;
    }
}
