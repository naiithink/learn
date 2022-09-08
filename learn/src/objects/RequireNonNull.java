package objects;

import java.util.Objects;

public class RequireNonNull {

    public static void main(String[] args) {
        String s1 = null;
        Objects.requireNonNull(s1);
    }
}
