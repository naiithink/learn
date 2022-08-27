package packaging.subpackage;

import packaging.subpackage.subsubpackage.ClassInSubsubpackage;

public class Main {

    public static void main(String[] args) {
        ClassInSubpackage o = new ClassInSubpackage(10);

        System.out.println(o.getN());
    }
}
