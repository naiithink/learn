package threads;

import java.util.Objects;

public class SpeakerThread extends Thread {

    private String timestamp;

    private int number;

    private String message;

    public SpeakerThread(int number, String message) {
        Objects.requireNonNull(message);
        this.timestamp = String.valueOf(System.currentTimeMillis());
        this.number = number;
        this.message = message;
    }

    @Override
    public void run() {
        try {
            if (number % 2 == 0) {
                System.out.println(this.getId() + " " + timestamp + " " + message);
                // this.wait(2000);
            } else {
                System.out.println(this.getId() + " " + timestamp + " " + message);
                // this.wait(3000);
            }
        } // catch (InterruptedException e) {
        //     e.printStackTrace();
        // }
        finally {
            
        }
    }

    public static void main(String[] args) {
        SpeakerThread speaker1 = new SpeakerThread(1, "hello");
        SpeakerThread speaker2 = new SpeakerThread(2, "hello");
        Runnable runner = () -> {
            System.out.println(String.valueOf(System.currentTimeMillis()) + " hello.");
            try {
                Thread.sleep(2000);
            } catch (InterruptedException e) {
                // TODO Auto-generated catch block
                e.printStackTrace();
            }
        };

        Thread runner1 = new Thread(runner);
        Thread runner2 = new Thread(runner);

        runner1.start();
        runner2.start();
        speaker1.start();
        speaker2.start();
    }
}
