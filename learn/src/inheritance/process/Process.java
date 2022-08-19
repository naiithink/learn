package inheritance.process;

interface Process {

    int getPID();
}

class Parent implements Process {

    private int pid;

    public Parent(int pid) {
        this.pid = pid;
    }

    public int getPID() {
        return pid;
    }

    public static void main(String[] args) {
        Parent pid0 = new Parent(123);

        System.out.println("PID: " + pid0.getPID());
    }
}
