package generics;

public class Box<T> {

    private T object;

    public Box(T object) {
        this.object = object;
    }

    public void set(T object) {
        this.object = object;
    }

    public T get() {
        return this.object;
    }

    @Override
    public String toString() {
        return "Box{" +
                "object=" + object +
                '}';
    }

    public static void main(String[] args) {
        Integer n = 10;
        Box<Integer> box = new Box<>(n);

        System.out.println(box.toString());
    }
}
