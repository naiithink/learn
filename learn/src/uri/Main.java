package uri;

import java.io.IOException;
import java.net.URI;
import java.net.URISyntaxException;
import java.net.URL;
import java.net.URLConnection;

public class Main {

    public static void main(String[] args) {
        // Path path = Paths.get("/Users/naiithink/sprojects/private2/learn/src/uri/hello.txt");
        // URI uri = path.toUri();
        // System.out.println("toString: " + uri.toString());
        // System.out.println("getScheme: " + uri.getScheme());
        // System.out.println("getAuthority: " + uri.getAuthority());
        // System.out.println("getHost: " + uri.getHost());
        // System.out.println("getPort: " + uri.getPort());
        // System.out.println("getPath: " + uri.getPath());

        try {
            URI uri = new URI("file", null, "/Users/naiithink/sprojects/private2/learn/src/uri/pexels-himani-k-13391438.jpg", null);
            URL url = uri.toURL();

            URLConnection connection =  url.openConnection();

            System.out.println("Content-Type: " + connection.getContentType());
        } catch (URISyntaxException e) {
            // TODO Auto-generated catch block
            e.printStackTrace();
        } catch (IOException e) {
            // TODO Auto-generated catch block
            e.printStackTrace();
        }
    }
}
