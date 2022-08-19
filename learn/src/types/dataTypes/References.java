package types.dataTypes;

public class References {

    static {
        sx = 100;
        sy = 200;

        // System.out.println(sx + " " + sy);
    }

    static private int sx;

    static private int sy;

    private int x;

    private int y;

    static {
        System.out.println(">> " + sx + " " + sy);

        sx = 10;
        sy = 20;

        System.out.println(sx + " " + sy);
    }

    static {
        sx = 40;
        sy = 50;

        System.out.println(sx + " " + sy);
    }

    public References(int x, int y) {
        this.x = x;
        this.y = y;
    }

    public void setX(int x) {
        this.x = x;
    }

    public void setY(int y) {
        this.y = y;
    }

    public int getX() {
        return x;
    }

    public int getY() {
        return y;
    }

    @Override
    public String toString() {
        return "References { " +
                "x = " + x +
                ", y = " + y +
                " }";
    }
}

class Main {

    public static void main(String[] args) {
        References ref1 = new References(4, 5);
        References ref2 = ref1;

        System.out.println("ref1: " + ref1.toString());
        System.out.println("ref2: " + ref2.toString());

        ref2.setX(1);
        ref2.setY(2);

        System.out.println("ref1: " + ref1.toString());
        System.out.println("ref2: " + ref2.toString());
    }
}
