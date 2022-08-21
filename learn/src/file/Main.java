package file;

import java.io.FileNotFoundException;
import java.io.IOException;

import java.nio.charset.Charset;
import java.nio.file.FileSystems;
import java.nio.file.Path;
import java.nio.file.Files;
import java.io.BufferedReader;

public class Main {

    public static void main(String[] args) throws IOException {
        if (args.length < 1)
            System.exit(1);

        Charset charset = Charset.forName("UTF-8");

        Path path = FileSystems.getDefault().getPath(args[0]);
        BufferedReader reader = Files.newBufferedReader(path, charset);

        while (reader.ready())
            System.out.println(reader.readLine());
    }
}
