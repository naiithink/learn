package bits.Inheritance;

public interface ChildB
        extends Root {

    int B_OPT_1 = 0x0100;

    static void option(int opt) {
        if ((opt & RESET) > 0) {
            System.out.println("RESET");
        }

        if ((opt & B_OPT_1) > 0) {
            System.out.println("B_OPT_1");
        }
    }
}
