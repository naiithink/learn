package file.operation;

import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;
import java.nio.file.FileSystems;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.StandardOpenOption;

public class CopyBytes {

    public static void main(String[] args) {
        Path inFile = FileSystems.getDefault().getPath("learn", "src", "file", "operation", "files", "hello.txt");
        Path outFile = FileSystems.getDefault().getPath("learn", "src", "file", "operation", "files", "hello_out.txt");

        try (InputStream in = Files.newInputStream(inFile, StandardOpenOption.READ);
             OutputStream out = Files.newOutputStream(outFile, StandardOpenOption.CREATE)) {
            int c;

            while ((c = in.read()) != -1) {
                out.write(c);
            }
        } catch (IOException e) {
            throw new RuntimeException(e);
        }
    }
}
