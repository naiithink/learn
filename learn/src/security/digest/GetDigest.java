package security.digest;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.security.MessageDigest;

public class GetDigest {

    private String path;

    private byte digest;

    public GetDigest(String path) {

        MessageDigest sha1 = MessageDigest.getInstance("SHA-1");

        try {
            BufferedReader reader = new BufferedReader();

            this.path = path;

            this.digest

        } catch (CloneNotSupportedException e) {
            System.err.println(e.getMessage());
        }
    }

    public static void main(String[] args) {
        GetDigest
    }
}
