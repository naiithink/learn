package digest;

import java.io.IOException;
import java.io.InputStream;
import java.nio.charset.Charset;
import java.nio.charset.StandardCharsets;
import java.nio.file.FileSystems;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.StandardOpenOption;
import java.security.DigestInputStream;
import java.security.MessageDigest;
import java.security.NoSuchAlgorithmException;

public class FileDigest {

    public static void main(String[] args) {
        Path file1Path = FileSystems.getDefault().getPath("files", "hello.txt");

        try (InputStream in = Files.newInputStream(file1Path, StandardOpenOption.READ)) {
            MessageDigest sha1 = MessageDigest.getInstance("SHA-1");
            DigestInputStream dis = new DigestInputStream(in, sha1);

            dis.on(true);

            while (dis.read() != -1);

            byte[] res = sha1.digest();

            StringBuilder hash = new StringBuilder(41);

            for (int i = 0, len = res.length; i < len; i++) {
                hash.append(Integer.toString((res[i] & 0xff) + 0x100, 16).substring(1));
            }

            System.out.println(hash);

            // String theRes = new String(res, StandardCharsets.UTF_8);

            // System.out.println(theRes);
        } catch (IOException e) {
            System.err.println(e.getMessage());
        } catch (NoSuchAlgorithmException e) {
            System.err.println(e.getMessage());
        }
    }
}
