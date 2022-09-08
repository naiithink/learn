// package jar.extracting;

import java.io.BufferedReader;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.nio.file.FileAlreadyExistsException;
import java.nio.file.Files;
import java.nio.file.LinkOption;
import java.nio.file.NotDirectoryException;
import java.nio.file.Path;
import java.nio.file.Paths;
import java.nio.file.StandardCopyOption;
import java.util.Enumeration;
import java.util.jar.JarEntry;
import java.util.jar.JarFile;

public abstract class Extractor {

    public static void extractJar(final String jarFilePathString, final String destDirPathString) throws FileNotFoundException,
                                                                                                         NotDirectoryException,
                                                                                                         FileAlreadyExistsException,
                                                                                                         IOException {
        final String timestamp = String.valueOf(System.currentTimeMillis());
        final String tmpDirPrefixString = "com.naiithink-" + timestamp + "-";

        // >>>
        Path appTmpDirPath = Files.createTempDirectory(tmpDirPrefixString);
        Path methTmpDirPath = appTmpDirPath.resolve(Extractor.class.getSimpleName());
        // <<<

        // final String[] FILE_2B_CREATED = { "hello", ".tmp" };

        // System.out.println("Created temp dir at: " + tmpDirPrefixPath.toString());
        // System.out.println("Try resolve: " + tmpDirPrefixPath.resolve("eiei").toString());

        // Files.createTempFile(tmpDirPrefixPath, FILE_2B_CREATED[0], FILE_2B_CREATED[1]);

        // System.out.println("Created a file: " + tmpDirPrefixPath.toString() + System.getProperty("file.separator") + FILE_2B_CREATED[0] + FILE_2B_CREATED[1]);

        // >>> Check whether both JAR and dest dir exist and are valid
        Path jarFilePath = Paths.get(jarFilePathString);
        Path destDirPath = Paths.get(methTmpDirPath.resolve(destDirPathString).toString());

        // System.out.println(destDirPath.relativize());

        // System.out.println("destDirPath: " + destDirPath.toString());

        // Path created = Files.createTempDirectory(methTmpDirPath, methTmpDirPath.relativize(destDirPath).toString());

        // System.out.println("Rel: " + methTmpDirPath.relativize(destDirPath).toString());
        // System.out.println("In tmp dir: " + created.toString());

        if (Files.exists(jarFilePath, LinkOption.NOFOLLOW_LINKS) == false) {
            throw new FileNotFoundException(jarFilePathString);
        }

        if (Files.exists(destDirPath, LinkOption.NOFOLLOW_LINKS) == false) {
            throw new FileNotFoundException(destDirPathString);
        } else if (Files.isDirectory(destDirPath, LinkOption.NOFOLLOW_LINKS) == false) {
            throw new NotDirectoryException(destDirPathString);
        }
        // <<< Check whether both JAR and dest dir exist and are valid

        try (JarFile jarJarFile = new JarFile(jarFilePath.toFile(), false, JarFile.OPEN_READ)) {

            Enumeration<JarEntry> jarJarFileEnumEntries = jarJarFile.entries();

            while (jarJarFileEnumEntries.hasMoreElements()) {
                JarEntry jarJarFileEntry = jarJarFileEnumEntries.nextElement();
                Path jarJarFileEntryPath = Paths.get(jarJarFileEntry.getName());

                System.out.println("jarJarFileEntry.getName(): " + jarJarFileEntry.getName());

                // System.out.println("jarJarFileEntry: " + jarJarFileEntry.toString());
                // System.out.println("destPath: " + destPath.toString());

                // if (jarJarFileEntry.getName().matches("META-INF.*")) {
                //     // while (jarJarFileEnumEntries.nextElement().isDirectory() == false);
                //     jarJarFileEntry = jarJarFileEnumEntries.nextElement();
                //     continue;
                // }

                if (jarJarFileEntry.isDirectory()) {
                    Path subTempDir = methTmpDirPath.resolve(jarJarFileEntryPath.getFileName());

                    Files.createTempDirectory(jarJarFileEntryPath, Extractor.class.getSimpleName() + timestamp/* tmpDestDirPath.resolve(jarJarFileEntryPath).toString() */);
                    continue;
                }

                InputStream in = jarJarFile.getInputStream(jarJarFileEntry);
                Files.copy(in, tmpDestDirPath, StandardCopyOption.REPLACE_EXISTING);

                in.close();
            }
        } catch (FileNotFoundException e) {
            throw e;
        } catch (IOException e) {
            // TODO Auto-generated catch block
            e.printStackTrace();
        }

        Files.move(tmpDestDirPath, destDirPath, StandardCopyOption.ATOMIC_MOVE);
    }
}
