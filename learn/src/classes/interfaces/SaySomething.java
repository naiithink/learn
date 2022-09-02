package classes.interfaces;

public interface SaySomething {
    
    default void sayHello() {
        System.out.println("hello, world");
    }
}
