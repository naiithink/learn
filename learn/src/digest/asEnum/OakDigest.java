package digest.asEnum;

import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.InputStream;
import java.nio.charset.StandardCharsets;
import java.nio.file.FileSystems;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.StandardOpenOption;
import java.security.DigestInputStream;
import java.security.MessageDigest;
import java.security.NoSuchAlgorithmException;

/**
 * MessageDigest of String message or File content
 *
 * Usage:
 * OakDigest.<ALGORITHM_CONSTANT>.<method>
 * 
 * Getting all supported/available algorithms:
 *  - String[]       OakDigest.NIL.getSupportedAlgorithms()
 *  - String         OakDigest.NIL.toString()
 * 
 * @warning The order of enum CONSTANT MUST NOT be modified.
 */
public enum OakDigest {

    MD5                 (0, "MD5"),
    SHA_1               (1, "SHA-1"),
    SHA_256             (2, "SHA-256"),
    NIL                 (3, null),
    DEFAULT_ALGORITHM   (-1, SHA_1.algorithm());

    /*
     * Algorithm constant index
     */
    private final int index;

    /*
     * Algorithm constant name as String literal
     */
    private final String algorithm;

    /*
     * Constructor for an enum type MUST BE package-private or private access.
     */
    private OakDigest(int index, String algorithm) {
        this.index = index;
        this.algorithm = algorithm;
    }

    /*
     * Internal use only
     * Current algorithm constant name as String literal
     */
    private String algorithm() {
        return algorithm;
    }

    /**
     * @return Depending on calling context;
     *         if the name of this algorithm constant is not null, returns an array with length of one containing current algorithm name;
     *         otherwise, returns an array containing all supported/available algorithm name.
     */
    public String[] getSupportedAlgorithms() {
        final int LENGTH_OF_ARRAY_CONTAINING_SELF = 1;
        String[] supportedAlgorithms;

        if (algorithm == null) {
            supportedAlgorithms = new String[NIL.index];
            int iter = 0;

            for (OakDigest d : OakDigest.values()) {
                if (d.algorithm == null)
                    break;

                supportedAlgorithms[iter] = d.algorithm;
                iter++;
            }
        } else {
            supportedAlgorithms = new String[LENGTH_OF_ARRAY_CONTAINING_SELF];
            supportedAlgorithms[0] = algorithm;
        }

        return supportedAlgorithms;
    }

    /**
     * @return default algorithm used to get message digest
     */
    public String getDefaultDigestAlgorithm() {
        return DEFAULT_ALGORITHM.algorithm;
    }

    /**
     * Internal use
     * Converts an array of byte to a String
     * 
     * @param bytes array of byte
     * @return String converted from @ref bytes
     */
    protected String byteArrayToHexString(byte[] bytes) {
        String result = "";

        for (int i = 0, len = bytes.length; i < len; i++)
            result += Integer.toString((bytes[i] & 0xff) + 0x100, 16).substring(1);

        return result;
    }

    /**
     * @param message String message to be digest
     * @return digest message from @ref message
     */
    public String getDigestStringOfMessage(String message) {
        String result = "";

        try {
            MessageDigest messageDigest = MessageDigest.getInstance(algorithm);
            byte[] digestResultByte = messageDigest.digest(message.getBytes(StandardCharsets.UTF_8));
            result = byteArrayToHexString(digestResultByte);
        } catch (NoSuchAlgorithmException e) {
            throw new RuntimeException(e);
        }

        return result;
    }

    /**
     * @param filePath Path to a file on the current file system
     * @return digest message from @ref filePath
     */
    public String getDigestStringOf(Path filePath) throws FileNotFoundException {
        if (Files.exists(filePath) == false)
            throw new FileNotFoundException(filePath.toString());

        String fileDigestString = new String();

        try (InputStream fis = Files.newInputStream(filePath, StandardOpenOption.READ)) {
            MessageDigest fileDigest = MessageDigest.getInstance(algorithm);
            DigestInputStream dis = new DigestInputStream(fis, fileDigest);

            while (dis.read() != -1);

            byte[] digestBytes = fileDigest.digest();

            fileDigestString = byteArrayToHexString(digestBytes);
        } catch (NoSuchAlgorithmException e) {
            throw new RuntimeException(e);
        } catch (IOException e) {
            throw new RuntimeException(e);
        }

        return fileDigestString;
    }

    /**
     * @param filePathString path String as reference to a file on the current file system
     * @return digest message from @ref filePath
     */
    public String getDigestStringOf(String filePathString) throws FileNotFoundException {
        return getDigestStringOf(FileSystems.getDefault().getPath(filePathString));
    }

    @Override
    public String toString() {
        String string;

        if (algorithm == null) {
            string = "All supported algorithms: ";

            for (OakDigest d : OakDigest.values()) {
                if (d.algorithm == null)
                    break;

                string += d.algorithm + " ";
            }
        } else {
            string = algorithm;
        }

        return string;
    }
}
