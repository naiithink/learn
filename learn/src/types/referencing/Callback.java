package types.referencing;

public class Callback {

    public static void callMe(Class<?> caller) {
        StackWalker stackWalker = StackWalker.getInstance(StackWalker.Option.RETAIN_CLASS_REFERENCE);

        StackWalker.StackFrame stackFrame = stackWalker.walk(stream1 -> stream1.skip(0)
                                                                               .findFirst()
                                                                               .orElse(null));

        System.out.println(caller.getName());
        System.out.println(stackFrame.getClassName());
        System.out.println(stackFrame.getMethodName());
        System.out.println(stackFrame.getLineNumber());
    }
}
