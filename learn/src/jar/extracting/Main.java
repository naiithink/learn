// package jar.extracting;

import java.io.BufferedReader;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.InputStreamReader;
import java.nio.file.FileAlreadyExistsException;
import java.nio.file.NotDirectoryException;

public class Main {

    public static void main(String[] args) {
        if (args.length < 2) {
            System.err.println("Expect 2 args. <jar> <dest>");
            System.exit(1);
        }

        final String JAR_FILE_PATH_STRING = args[0];
        final String DEST_DIR_PATH_STRING = args[1];

        InputStreamReader prompt = new InputStreamReader(System.in);
        BufferedReader reader = new BufferedReader(prompt);

        try {
            Extractor.extractJar(JAR_FILE_PATH_STRING, DEST_DIR_PATH_STRING);
        } catch (FileAlreadyExistsException e) {
            String ans = new String();

            System.err.format("""


                Path %s is already exists.
                It will be overridden, continue?
                y/N ฿\t""", e.getFile());

            try {
                switch (ans = reader.readLine()) {
                    case "N":
                    case "n":
                        reader.close();
                        prompt.close();
                        System.exit(1);
                }
            } catch (IOException e1) {
                e.printStackTrace();
            } 
        } catch (NotDirectoryException e) {
            // TODO Auto-generated catch block
            e.printStackTrace();
        } catch (FileNotFoundException e) {
            // TODO Auto-generated catch block
            e.printStackTrace();
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}
