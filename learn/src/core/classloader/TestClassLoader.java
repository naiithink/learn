package core.classloader;

import java.util.ArrayList;

public class TestClassLoader {

    public static void main(String[] args) {
        System.out.println("ClassLoader of this is: " + TestClassLoader.class.getClassLoader());
        System.out.println("ClassLoader of String is: " + String.class.getClassLoader());
        System.out.println("ClassLoader of ArrayList is: " + ArrayList.class.getClassLoader());
    }
}
