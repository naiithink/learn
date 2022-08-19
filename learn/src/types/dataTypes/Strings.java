package types.dataTypes;

public class Strings {

    public static void main(String[] args) {
        String s1 = "hello";
        String s2 = "hello";

        System.out.println(s1 == s2);

        String s3 = s1;

        System.out.println(s3);

        System.out.println("---");

        s3 = "world";

        System.out.println(s1);
        System.out.println(s2);
        System.out.println(s3);

        System.out.println("---");

        System.out.println(s1 == s2);
        System.out.println(s1 == s3);
        System.out.println(s2 == s3);

        System.out.println("---");

        System.out.println("s1 == s2: " + s1 == s2);
        System.out.println("s1 == s3: " + s1 == s3);
        System.out.println("s2 == s3: " + s2 == s3);
    }
}
