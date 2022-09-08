package generics.methods;

public abstract class Method {

    public static <T extends String> boolean equalsTrue(T obj) {
        Boolean bool = Boolean.valueOf(true);
        return bool.equals(Boolean.valueOf((String) obj));
    }

    public static void main(String[] args) {
        System.out.println("true: " + Method.equalsTrue("true"));
        System.out.println("false: " + Method.equalsTrue("false"));
    }
}
