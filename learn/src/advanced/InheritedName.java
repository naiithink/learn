package advanced;

import java.lang.reflect.InvocationTargetException;
import java.lang.reflect.Method;

public final class InheritedName {

    public static void main(String[] args) throws NoSuchMethodException, IllegalAccessException, IllegalArgumentException, InvocationTargetException {
        Cat cat = new Cat();

        Method sleep = cat.getClass().getMethod("sleep", int.class);

        sleep.invoke(null, 10);
    }
}

abstract class Animal {

    abstract void sleep(int time);
}

class Cat extends Animal {

    @Override
    void sleep(int time) {
        for (int i = 0; i < time; ++i)
            System.out.println("Zzz");
    }
}
