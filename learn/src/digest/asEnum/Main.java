package digest.asEnum;

import java.io.FileNotFoundException;
import java.security.NoSuchAlgorithmException;

public class Main {

    public static void main(String[] args) throws NoSuchAlgorithmException, FileNotFoundException {
        System.out.println(OakDigest.DEFAULT_ALGORITHM.getDigestStringOf("/Users/naiithink/sprojects/private2/learn/src/digest/asEnum/hello.txt"));
        System.out.println(OakDigest.DEFAULT_ALGORITHM.getDigestStringOfMessage("hello, world\n"));
        System.out.println(OakDigest.DEFAULT_ALGORITHM.ordinal());
        System.out.println(OakDigest.DEFAULT_ALGORITHM.toString());
        System.out.println(OakDigest.NIL.toString());

        for (String s : OakDigest.NIL.getSupportedAlgorithms())
            System.out.println(s);
    }
}
