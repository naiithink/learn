package types.referencing;

public class Caller {

    public static void main(String[] args) {
        Callback.callMe(Caller.class);
    }
}
