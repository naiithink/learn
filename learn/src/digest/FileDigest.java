package digest;

import java.io.IOException;
import java.io.InputStream;
import java.nio.charset.StandardCharsets;
import java.nio.file.FileSystems;
import java.nio.file.Files;
import java.nio.file.Path;
import java.security.DigestInputStream;
import java.security.MessageDigest;
import java.security.NoSuchAlgorithmException;

public class FileDigest {

    public static void main(String[] args) {
        Path file1Path = FileSystems.getDefault().getPath("files", "hello.txt");

        try (InputStream file1 = Files.newInputStream(file1Path)) {
            MessageDigest sha1 = MessageDigest.getInstance("SHA-1");
            DigestInputStream dis = new DigestInputStream(file1, sha1);

            byte[] digest = sha1.digest();

            String hash = new String(digest, StandardCharsets.UTF_8);

            System.err.println(hash);
        } catch (IOException e) {
            System.err.println(e.getMessage());
        } catch (NoSuchAlgorithmException e) {
            System.err.println(e.getMessage());
        }
    }
}
