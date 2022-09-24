package threads;

public class Sum {

    private class PrintOdd
            extends Thread {

        private int bound;

        public PrintOdd(int bound) {
            this.bound = bound;
        }

        @Override
        public void run() {
            for (int i = 1; i < bound; i += 2) {
                System.out.println(i);
                try {
                    Thread.sleep(1000);
                } catch (InterruptedException e) {
                    e.printStackTrace();
                }
            }
        }
    }

    private class PrintEven
            extends Thread {

        private int bound;

        public PrintEven(int bound) {
            this.bound = bound;
        }

        @Override
        public void run() {
            for (int i = 0; i < bound; i += 2) {
                System.out.println(i);
                try {
                    Thread.sleep(1000);
                } catch (InterruptedException e) {
                    e.printStackTrace();
                }
            }
        }
    }

    public static void main(String[] args) {
        Sum sum = new Sum();

        Thread oddThread = sum.new PrintOdd(30);
        Thread evenThread = sum.new PrintEven(2);

        oddThread.start();
        evenThread.start();
    }
}
