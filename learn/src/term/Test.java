package term;

import java.util.ArrayList;
import java.util.List;

public enum Test {
    NOUN,
    PRONOUN,
    ADJECTIVE,
    VERB,
    ADVERB,
    PREPOSITION,
    CONJUNCTION,
    ARTICLE;

    public static List<String> getStringValueList() {
        final int valueCount = Test.values().length;
        List<String> values = new ArrayList<>();

        int index = 0;

        for (Test p : Test.values()) {
            values.add(p.name());
        }

        return values;
    }
}

class Main {

    public static void main(String[] args) {
        List<String> ls = Test.getStringValueList();
        for (String s : ls)
            System.out.println(s);
    }
}
