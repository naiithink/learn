// package file.attributes;

import java.io.FileNotFoundException;
import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;
import java.nio.file.attribute.BasicFileAttributes;

public class ReadFileAttr {

    public static void main(String[] args) throws IOException {
        if (args.length < 1) {
            throw new IllegalArgumentException("This program requires exactly one argument, that is a file path");
        }

        Path filePath = Paths.get(args[0]);

        if (Files.exists(filePath) == false) {
            throw new FileNotFoundException(filePath.toString());
        }

        BasicFileAttributes attr = Files.readAttributes(filePath, BasicFileAttributes.class);

        System.out.println("File Name:      " + filePath.getFileName());
        System.out.println("ID:             " + attr.fileKey());
        System.out.println("Creation time:  " + attr.creationTime());
        System.out.println("Is directory:   " + attr.isDirectory());
        System.out.println("Last access:    " + attr.lastAccessTime());
        System.out.println("Last modified:  " + attr.lastModifiedTime());
        System.out.println("Size:           " + attr.size());
    }
}
