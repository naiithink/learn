package cs211.interfaces.ii.i;

import java.util.Comparator;

public interface MeasurableComparator<T>
        extends Comparator<T> {

    double getNaturalValueOf(T t);
}
