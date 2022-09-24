package types.collections;

import java.util.Hashtable;

public class MyDictionary {

    public static void main(String[] args) {
        Hashtable<String, String> dict = new Hashtable<>();

        dict.put("hello", "world");

        System.out.println("got " + dict.get("hello"));
    }
}
