import java.io.*;
import java.net.URI;
import java.security.*;
import java.util.*;
// import java.sql.ShardingKey;

public class Main {
    private static final String URLSCHEME = "https";
    private static final String BASEURL = "seccdn.libravatar.org";
    private static String url;

    public static void main(String[] args) {
        StringBuffer result = new StringBuffer();
        String email = "potsawattkw@gmail.com";
        byte[] digested;

        try {
            MessageDigest sha256 = MessageDigest.getInstance("SHA-256");
            sha256.update(email.getBytes("UTF-8"));
            digested = sha256.digest();

            for (int i = 0; i < digested.length; i++) {
                if ((0xff & digested[i]) < 0x10) {
                    result.append("0"
                            + Integer.toHexString((0xFF & digested[i])));
                } else {
                    result.append(Integer.toHexString(0xFF & digested[i]));
                }
            }

            System.out.println(result);
            sha256.reset();
        } catch (NoSuchAlgorithmException err) {
            System.out.println("Got an exception: " + err.getMessage());
        } catch (UnsupportedEncodingException err) {
            System.out.println("Got an exception: " + err.getMessage());
        }

        url = URLSCHEME + "://" + BASEURL + "/avatar/" + result + "?s=300";
        System.out.println(url);

        // BufferedInputStream image = new BufferedInputStream(new URI(URLSCHEME,
        // BASEURL, "avatar" result, "?s=300"))
    }
}

// https://seccdn.libravatar.org/avatar/
// java, gmail: 29365ac6162d73804abbff4cafc3b6975a6e45ed59ea0c4c3cd65c72fe4a40ad
// a3f2229e2173bc782ae201ba6018aeb6350092c087636e9eaf0491374665e919
// 28384f4936bac4f95616c94d0a84784dff161a7cf10d5265f120ea388ac946f1
