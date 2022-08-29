package classes.finalClasses;

public final class FinalClass {

    int n;

    public FinalClass(int n) {
        this.n = n;
    }

    public int getN() {
        return n;
    }

    public void setN(int n) {
        this.n = n;
    }

    @Override
    public String toString() {
        return "FinalClass{" +
                "n=" + n +
                '}';
    }
}
