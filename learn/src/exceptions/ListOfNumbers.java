/**
 * The three components of an exception handler -- `try', `catch', and `finally' blocks
 *
 * The Try Block
 *
 *      try {
 *          statements
 *      }
 *      catch and finally blocks...
 *
 * The Try-with-resources Statement
 * A try statement that declares one or more resources.
 * A resource is an object that must be closed after the program is finished with it.
 * The try-with-resources statement ensures that each resource is closed at the end of the statement.
 * Any object that implements java.lang.AutoCloseable,
 * which includes all objects which implement java.io.Closeable, can be used as a resource.
 *
 * The following example reads the first line from a file.
 * It uses an instance of BufferedReader to read data from the file.
 * BufferedReader is a resource that must be closed after the program is finished with it:
 *
 *      static String readFirstLineFromFile(String path) throws IOException {
 *          try (BufferedReader br =
 *                         new BufferedReader(new FileReader(path))) {
 *              return br.readLine();
 *          }
 *      }
 *
 * Prior to Java SE 7, you can use a finally block to ensure that a resource is closed
 * regardless of whether the try statement completes normally or abruptly.
 * The following example uses a finally block instead of a try-with-resources statement:
 *
 *      static String readFirstLineFromFileWithFinallyBlock(String path)
 *                                                           throws IOException {
 *          BufferedReader br = new BufferedReader(new FileReader(path));
 *          try {
 *              return br.readLine();
 *          } finally {
 *              br.close();
 *          }
 *      }
 *
 * The Catch Block
 * @note No code can be between the end of the try block and the beginning of the first catch block.
 *
 *      try {
 *
 *      } catch (ExceptionType name) {
 *
 *      } catch (ExceptionType name) {
 *
 *      }
 *
 * Each catch block is an exception handler that handles the type of exception indicated by its argument.
 * The argument type, ExceptionType, declares the type of exception that the handler can handle
 * and must be the name of a class that inherits from the Throwable class.
 * The handler can refer to the exception with name.
 *
 * Multi-Catching Exceptions (Java SE 7 and later)
 *
 *      catch (ExceptionType1 | ExceptionType2 name) {
 *
 *      }
 *
 * @note If a catch block handles more than one exception type, then the catch parameter is implicitly final.
 * Therefore you cannot assign any values to it within the catch block.
 *
 * Suppressed Exceptions
 *
 *      Throwable.getSuppressed()
 */

package exceptions;

/**
 * The following example defines and implements a class named `ListOfNumbers'.
 * When constructed, `ListOfNumbers' creates an `ArrayList' that contains 10 `Integer' elements
 * with sequential values 0 through 9.
 * The `ListOfNumbers' class also defines a method named `writeList()',
 * which writes the list of numbers into a text file called `OutFile.txt'.
 * This example uses output classes defined in `java.io', which are covered in the Basic I/O section.
 */

// Note: This class will not compile yet.
import java.io.*;
import java.util.List;
import java.util.ArrayList;

public class ListOfNumbers {

    private List<Integer> list;
    private static final int SIZE = 10;

    public ListOfNumbers() {
        list = new ArrayList<>(SIZE);
        for (int i = 0; i < SIZE; i++) {
            list.add(i);
        }
    }

    public void writeList() {
        // The FileWriter constructor throws IOException, which must be caught.
        PrintWriter out = new PrintWriter(new FileWriter("OutFile.txt"));

        for (int i = 0; i < SIZE; i++) {
            // The get(int) method throws IndexOutOfBoundsException, which must be caught.
            out.println("Value at: " + i + " = " + list.get(i));
        }
        out.close();
    }
}
