/**
 * Not all combinations of instance and class variables and methods are allowed:
 *
 * - Instance methods can access instance variables and instance methods directly.
 * - Instance methods can access class variables and class methods directly.
 * - Class methods can access class variables and class methods directly.
 * - Class methods cannot access instance variables or instance methods directly—they must use an object reference.
 *   Also, class methods cannot use the this keyword as there is no instance for this to refer to.
 */

package statically;

public class Main {

    public static void main(String[] args) {
        StaticFields.number = 10;

        System.out.println(StaticFields.number);
    }
}
