package bits;

public final class BitFields {
    private BitFields() {}

    public static final int OPT_A = 0x01;
    public static final int OPT_B = 0x02;
    public static final int OPT_C = 0x04;

    public static void optionsFrom(int opt) {
        if ((opt & OPT_A) > 0) {
            System.out.println("OPT_A");
        }

        if ((opt & OPT_B) > 0) {
            System.out.println("OPT_B");
        }

        if ((opt & OPT_C) > 0) {
            System.out.println("OPT_C");
        }
    }

    public static void main(String[] args) {
        BitFields.optionsFrom(OPT_B | OPT_C);
    }
}
