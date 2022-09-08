package properties;

import java.io.IOException;
import java.io.InputStream;
import java.nio.file.FileSystems;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;
import java.util.Properties;
import java.util.Set;

public class JavaProperties {

    public static void main(String[] args) {
        System.out.println(System.getProperty("java.io.tmpdir"));

        Path tmpDir = Paths.get(System.getProperty("java.io.tmpdir"));

        Path inFile = FileSystems.getDefault().getPath("learn/src/properties/hello.properties");
        Set<Object> keySet;
        String[] keyArray;

        int numberOfKeys = 0;

        try (InputStream in = Files.newInputStream(inFile)) {
            Properties prop = new Properties();

            prop.load(in);

            numberOfKeys = prop.size();

            keySet = prop.keySet();

            keyArray = new String[prop.size()];
            keyArray = keySet.toArray(keyArray);

            System.out.println("Keys: " + numberOfKeys);

            for (String i : keyArray) {
                System.out.println(i + " = " + prop.getProperty(i));
            }
        } catch (IOException e) {
            System.err.println("Got an exception: " + e.getMessage());
        }
    }
}
