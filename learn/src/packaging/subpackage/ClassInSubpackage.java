package packaging.subpackage;

class ClassInSubpackage {

    private int n;

    ClassInSubpackage(int n) {
        this.n = n;
    }

    int getN() {
        return n;
    }

    void setN(int n) {
        this.n = n;
    }

    @Override
    public String toString() {
        return "ClassInSubpackage{" +
                "n=" + n +
                '}';
    }
}
