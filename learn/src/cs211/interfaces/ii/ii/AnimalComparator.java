package cs211.interfaces.ii.ii;

import java.util.Comparator;

public class AnimalComparator
        implements Comparator<Animal> {

    @Override
    public int compare(Animal a1, Animal a2) {
        return a1.getAge() > a2.getAge() ? 1
                                         : a1.getAge() == a2.getAge() ? 0
                                                                      : -1;
    }
}
