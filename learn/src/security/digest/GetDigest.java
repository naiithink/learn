package security.digest;

import java.io.File;
import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.nio.Buffer;
import java.nio.file.*;
import java.nio.charset.Charset;
import java.security.DigestInputStream;
import java.security.MessageDigest;
import java.security.NoSuchAlgorithmException;

public class GetDigest {

    @FunctionalInterface
    interface FileCheckPath {
        public String getPath();
    }

    private final String path;

    private byte[] digest;

    private Charset charset;

    private BufferedReader reader;

    public GetDigest(String path) throws NoSuchAlgorithmException {
        this.path = new FileCheckPath(path) {
            File file = new File(path);
            if (file.exists() && file.isFile()) {
                return path;
            } else {
                System.exit(1);
            }
        };
        MessageDigest sha = MessageDigest.getInstance("SHA-1");
        BufferedReader reader = new BufferedReader();


        // catch (CloneNotSupportedException e) {
    }

    public static void main(String[] args) {
        GetDigest
    }
}
