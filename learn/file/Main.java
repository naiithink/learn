import java.io.IOException;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.BufferedReader;

public class Main {
    public static void main(String[] args) {
        final String FILE_TO_READ = "Foo.csv";
        FileReader fileBuffer;
        BufferedReader readFileBuffer;

        try {
            fileBuffer = new FileReader(FILE_TO_READ);
            readFileBuffer = new BufferedReader(fileBuffer);
            System.out.println(readFileBuffer.readLine());
        } catch (FileNotFoundException e) {
            System.err.println(e.getMessage());
        } catch (IOException e) {
            System.err.println(e.getMessage());
        }
    }
}
