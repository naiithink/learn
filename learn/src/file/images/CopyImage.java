// package file.images;

import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.LinkOption;
import java.nio.file.Path;
import java.nio.file.Paths;

public final class CopyImage {

    public static void main(String[] args) throws IOException {
        if (args.length < 2)
            System.exit(1);

        Path src = Paths.get(args[0]);
        Path tgt = Paths.get(args[1]);

        if (Files.exists(src, LinkOption.NOFOLLOW_LINKS) == false
            || Files.exists(tgt, LinkOption.NOFOLLOW_LINKS)) {
                System.err.println("File already exists.");
                System.exit(17);
        }

        Files.copy(src, tgt);

        System.out.println("Done.");
    }
}
