package exceptions;

public class TryIt {

    public void sayHello() throws TryItException {
        try {
            System.out.println("hello, world");
            if (1 == 1)
                throw new TryItException();
        } finally {
            System.out.println("finally");
        }
    }

    public static void aheadOfMain(String[] args) {
        TryIt trial = new TryIt();

        try {
            trial.sayHello();
        } catch (TryItException e) {
            // throw e.getCause();
            System.err.println("e.getClass(): " + e.getClass());
            
            if (e instanceof Throwable)
                System.err.println("e is a Throwable");
            else
                System.err.println("e is NOT a Throwable");

            // throw new TryItException(e);
            throw e;
        } finally {
            // e.printStackTrace();
            System.out.println("main finally");
        }
    }

    public static void aheadOfMain() {
        aheadOfMain(null);
    }

    public static void main(String[] args) {
        TryIt trial = new TryIt();

        try {
            trial.sayHello();
        } catch (TryItException e) {
            // throw e.getCause();
            System.err.println("e.getClass(): " + e.getClass());
            
            if (e instanceof Throwable)
                System.err.println("e is a Throwable");
            else
                System.err.println("e is NOT a Throwable");

            // throw new TryItException(e);
            throw e;
        } finally {
            // e.printStackTrace();
            System.out.println("main finally");
        }
    }
}
