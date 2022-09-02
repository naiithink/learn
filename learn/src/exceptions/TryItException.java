package exceptions;

public class TryItException extends Exception {

    public TryItException() {
    }

    public TryItException(String message) {
        super(message);
    }

    public TryItException(Throwable cause) {
        super(cause);
    }

    public TryItException(String message, Throwable cause) {
        super(message, cause);
    }

    public TryItException(String message, Throwable cause, boolean enableSuppression, boolean writableStackTrace) {
        super(message, cause, enableSuppression, writableStackTrace);
    }
}
