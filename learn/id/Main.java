public class Main {
    public static void main(String[] args) {
        Foo foo = new Foo(10);


        try {
            Integer fooId = foo.hashCode();
            // Integer fooIdDec = Integer.parseInt(fooIdHex.toString(), 10);

            System.out.println(foo.hashCode());
            System.out.println(Integer.toString(fooId, 16));
            System.out.println(foo);
        }
        //  catch (NumberFormatException e) {
        //     System.err.println(e.getMessage());
        // }
        finally {

        }
    }
}
