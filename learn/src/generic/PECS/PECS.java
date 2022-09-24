package generic.PECS;

import java.util.List;
import java.util.ArrayList;

public final class PECS {

    public static void main(String[] args) {
        List<? extends Number> list1 = new ArrayList<Double>();
        List<? super Integer> list2 = new ArrayList<Integer>();

        list1.add(1);
        list2.add(1);

        Number num1 = list1.get(0);
        Integer num2 = list2.get(0);

        System.out.println(num1);
        System.out.println(num2);
    }
}
