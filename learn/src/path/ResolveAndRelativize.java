package path;

import java.nio.file.Path;
import java.nio.file.Paths;

public class ResolveAndRelativize {

    public static void main(String[] args) {
        Path prefix = Paths.get(System.getProperty("user.dir"), "learn", "src", "path", "files");

        System.out.println("Prefix: " + prefix);

        Path p1 = Paths.get(prefix + System.getProperty("file.separator") + "a");
        Path p2 = Paths.get("b");

        System.out.println("p1: " + p1.toString());
        System.out.println("p2: " + p2.toString());

        System.out.println("p1.resolve(p2): " + p1.resolve(p2));
        System.out.println("p1.relativize(p1.resolve(p2)): " + p1.relativize(p1.resolve(p2)));
    }
}
