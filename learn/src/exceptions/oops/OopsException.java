package exceptions.oops;

public class OopsException extends Exception {

    public OopsException() {}

    public OopsException(String message) {
        super(message);
    }

    public OopsException(String message, Throwable cause) {
        super(message, cause);
    }
}
