package uri;

import java.net.URI;
import java.net.URISyntaxException;

public abstract class ContentTypes {

    public static String getContentType(String path) throws URISyntaxException {
        URI url = new URI("file", "", "/Users/naiithink/sprojects/private2/learn/src/uri/hello.txt");
    }
}
