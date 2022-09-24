/**
 * For classes, use 'extends' keyword.
 * For interfaces, use 'implements' keyword.
 */

package generic.bounding;

public class Bounded<T extends Number> {

    private T attr1;

    public Bounded(T attr1) {
        this.attr1 = attr1;
    }

    public T getAttr1() {
        return attr1;
    }

    public void setAttr1(T attr1) {
        this.attr1 = attr1;
    }

    public <T extends Number> void inspect(T t) {
        System.out.println("T: ");
    }

    @Override
    public String toString() {
        return "Bounded{" +
                "attr1=" + attr1 +
                '}';
    }
}
