package jar.extracting.names;

import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.LinkOption;
import java.nio.file.Path;
import java.nio.file.Paths;
import java.util.Enumeration;
import java.util.jar.JarEntry;
import java.util.jar.JarFile;

public class Names {

    public static void main(String[] args) {
        Path jarFile = Paths.get(System.getProperty("user.dir") + System.getProperty("file.separator") + "learn", "src", "jar", "extracting", "names", "main", "Main.jar");

        System.out.println("Jar file Path#getFileName: " + jarFile.getFileName());
        System.out.println("Jar file Path#getFileSystem: " + jarFile.getFileSystem());
        System.out.println("Jar file: " + jarFile.toString());

        System.out.println("No extension: " + jarFile.getFileName().toString().replaceAll("\\.\\w+$", ""));

        if (Files.exists(jarFile, LinkOption.NOFOLLOW_LINKS)) {
            JarFile jarJarFile;

            try {
                jarJarFile = new JarFile(jarFile.toFile(), false, JarFile.OPEN_READ);
                Enumeration<JarEntry> jarJarFileEntries = jarJarFile.entries();

                System.out.println("Entries: " + jarJarFileEntries.toString());

                int i = 0;

                while (jarJarFileEntries.hasMoreElements()) {
                    JarEntry jarFileEntry = jarJarFileEntries.nextElement();

                    System.out.println("Entry " + i++);
                    System.out.println("getName: " + jarFileEntry.getName());
                    System.out.println("getRealName: " + jarFileEntry.getRealName());
                }
            } catch (IOException e) {
                // TODO Auto-generated catch block
                e.printStackTrace();
            }
        }
    }
}
