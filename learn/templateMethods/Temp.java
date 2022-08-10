public class Temp<T> {
    private T instance;

    public Temp(T f) {
        instance = f;
    }

    public T getInstance() {
        return instance;
    }
}
