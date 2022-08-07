public class Singleton {
    private static Singleton instance;

    private int number;

    private Singleton(int someNumber) {
        number = someNumber;
    }

    public static Singleton getInstance(int someNumber) {
        if (instance == null) {
            synchronized(Singleton.class) {
                Singleton inst = instance;
                if (inst == null) {
                    synchronized (Singleton.class) {
                        instance = new Singleton(someNumber);
                    }
                }
            }
        } else {
            instance.number = someNumber;
        }

        return instance;
    }

    @java.lang.Override
    public java.lang.String toString() {
        return "Singleton{" +
                "number=" + number +
                '}';
    }
}
