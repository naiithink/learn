package enums;

public class Enum {

    enum Opt {
        HELP ("help"),
        LAUNCH ("launch");

        private final String opt;

        Opt(final String opt) {
            this.opt = opt;
        }

        String opt() {
            return opt;
        }

        @Override
        public String toString() {
            return opt;
        }
    }

    public static void main(String[] args) {
        if (args.length == 1) {
            String optopt = args[0];

            switch (optopt) {
                case "help" -> System.out.println("Help");
                case "launch" -> System.out.println("Launching...");
                default -> System.out.println("Unknown option, default help");
            }
        } else {
            System.err.println("ERROR: This program requires exactly one argument.");
            System.exit(1);
        }
    }
}
