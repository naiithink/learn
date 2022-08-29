package classes.finalClasses;

public class Main {

    public static void main(String[] args) {
        FinalClass instance = new FinalClass(10);

        System.out.println(instance.toString());

        System.out.println(System.getProperty("java.home"));

        System.out.println(System.getProperty("user.dir"));

        System.out.println(Main.class.getClass().getResource("."));
    }
}
