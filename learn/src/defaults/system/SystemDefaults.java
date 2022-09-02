package defaults.system;

public enum SystemDefaults {

    JAVA_VERSION        (Properties.JAVA_VERSION_VALUE),
    JAVA_HOME           (Properties.JAVA_HOME_VALUE),
    JAVA_CLASS_PATH     (Properties.JAVA_CLASS_PATH_VALUE),
    JAVA_LIBRARY_PATH   (Properties.JAVA_LIBRARY_PATH_VALUE),
    JAVA_IO_TMPDIR      (Properties.JAVA_IO_TMPDIR_VALUE),
    OS_NAME             (Properties.OS_NAME_VALUE),
    OS_ARCH             (Properties.OS_ARCH_VALUE),
    OS_VERSION          (Properties.OS_VERSION_VALUE),
    FILE_SEPARATOR      (Properties.FILE_SEPARATOR_VALUE),
    PATH_SEPARATOR      (Properties.PATH_SEPARATOR_VALUE),
    LINE_SEPARATOR      (Properties.LINE_SEPARATOR_VALUE),
    USER_NAME           (Properties.USER_NAME_VALUE),
    USER_HOME           (Properties.USER_HOME_VALUE),
    USER_DIR            (Properties.USER_DIR_VALUE);

    private final String value;

    SystemDefaults(String value) {
        this.value = value;
    }

    /**
     * Getting value of a constant
     * @return String value of an enum constant
     */
    public String value() {
        return value;
    }

    private static class Properties {
        public static final String JAVA_VERSION_VALUE       = System.getProperty("java.version");
        public static final String JAVA_HOME_VALUE          = System.getProperty("java.home");
        public static final String JAVA_CLASS_PATH_VALUE    = System.getProperty("java.class.path");
        public static final String JAVA_LIBRARY_PATH_VALUE  = System.getProperty("java.library.path");
        public static final String JAVA_IO_TMPDIR_VALUE     = System.getProperty("java.io.tmpdir");
        public static final String OS_NAME_VALUE            = System.getProperty("os.name");
        public static final String OS_ARCH_VALUE            = System.getProperty("os.arch");
        public static final String OS_VERSION_VALUE         = System.getProperty("os.version");
        public static final String FILE_SEPARATOR_VALUE     = System.getProperty("file.separator");
        public static final String PATH_SEPARATOR_VALUE     = System.getProperty("path.separator");
        public static final String LINE_SEPARATOR_VALUE     = System.getProperty("line.separator");
        public static final String USER_NAME_VALUE          = System.getProperty("user.name");
        public static final String USER_HOME_VALUE          = System.getProperty("user.home");
        public static final String USER_DIR_VALUE           = System.getProperty("user.dir");
    }

    public static void main(String[] args) {
        for (SystemDefaults e : SystemDefaults.values())
            System.out.println(e.toString() + ": " + e.value.toString());
    }
}
