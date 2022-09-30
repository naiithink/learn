package generic.PECS.cats;

import java.util.ArrayList;
import java.util.List;

final class CatLover {

    public static void main(String[] args) {
        List<Sphinx> sphinxs = new ArrayList<>();
        List<? extends Cat> cats = sphinxs;

        // cats.add(new Cat("Tom"));
        cats.add(new Sphinx("Tom"));
    }
}
