public abstract class Variables {
    /**
     * the main method
     * @param args command line argument list.
     */
    public static void main(String[] args) {
        int ตัวเลข = 10;
        int[] na = {10}, ma = {20};

        System.out.println(ตัวเลข);
        System.out.println(na[0]);
        System.out.println(na.getClass().getSimpleName());
        System.out.println(ma.getClass().getSimpleName());
    }
}
