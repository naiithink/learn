package file.operation.paths;

import java.nio.file.FileSystems;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.PathMatcher;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

public class Exists {

    public static void main(String[] args) {
        final String CLASS_NAME = Exists.class.getSimpleName();

        final String REGEX = String.format(".*(?=\\/%s)", CLASS_NAME);

        System.out.println(REGEX);

        Pattern pattern = Pattern.compile(REGEX);

        Matcher matcher;

        final String PATH = "null.txt";

        final String DEFAULT_SEPARATOR = FileSystems.getDefault().getSeparator();

        final String EXTERNAL_PREFIX = System.getProperty("user.dir");

        String toBeMatched = Exists.class.getCanonicalName().replace('.', DEFAULT_SEPARATOR.charAt(0));

        System.out.println("2b: " + toBeMatched);

        matcher = pattern.matcher(toBeMatched);

        final String PRE_INTERNAL_PREFIX;

        if (matcher.find())
            PRE_INTERNAL_PREFIX = matcher.group(0);
        else
            PRE_INTERNAL_PREFIX = "";

        System.out.println("pre: " + PRE_INTERNAL_PREFIX);

        final String INTERNAL_PREFIX = "learn"
                + DEFAULT_SEPARATOR.charAt(0)
                + "src"
                + DEFAULT_SEPARATOR.charAt(0)
                + PRE_INTERNAL_PREFIX
                + DEFAULT_SEPARATOR.charAt(0);

        Path path = FileSystems.getDefault().getPath(EXTERNAL_PREFIX, INTERNAL_PREFIX, "null.txt");

        System.out.println("INTERNAL_PREFIX: " + INTERNAL_PREFIX);

        System.out.println(path + ": " + Files.exists(path));

        System.out.println(Exists.class.getCanonicalName());

        System.out.println(System.getProperty("user.dir"));
    }
}
