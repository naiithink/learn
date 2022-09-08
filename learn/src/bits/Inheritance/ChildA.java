package bits.Inheritance;

public interface ChildA
        extends Root {

    int A_OPT_1 = 0x0010;

    static void option(int opt) {
        if ((opt & RESET) > 0) {
            System.out.println("RESET");
        }

        if ((opt & A_OPT_1) > 0) {
            System.out.println("A_OPT_1");
        }
    }
}
