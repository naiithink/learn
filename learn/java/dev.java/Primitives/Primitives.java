package Primitives;
public class Primitives {
    public static void main(String[] args) {
        System.out.println("""
            TYPE                    SPECS
                                    DEFAULT VALUE
            """);
        System.out.println("""
            byte                    8-bit signed 2's complement integer
                                    0
            """);
        System.out.println("""
            short                   16-bit signed 2's complement integer
                                    0
            """);
        System.out.println("""
            int                     32-bit signed 2's complement integer
                                    0
            """);
        System.out.println("""
            long                    64-bit signed 2's complement integer
                                    0L
            """);
        System.out.println("""
            float                   single-precision 32-bit IEEE 754 floating point
                                    0.0f
            """);
        System.out.println("""
            double                  double-precision 64-bit IEEE 754 floating point
                                    0.0d
            """);
        System.out.println("""
            char                    single 16-bit Unicode character
                                    \\u0000
            """);
        System.out.println("""
            String (or any object)  \u1F937
                                    null
            """);
        System.out.println("""
            boolean                 size is not precisely defined
                                    false
            """);
    }
}
