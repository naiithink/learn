public class Color {
    private String name;
    private int red;
    private int green;
    private int blue;

    public Color(String name, int red, int green, int blue) {
        this.name = name;

        if (red < 0 || red > 255
            || green < 0 || green > 255
            || blue < 0 || blue > 255) {
            System.err.println("Invalid argument, this instance has not been initialized successfully.\n");
            // System.exit(1);
            return;
        }

        this.red = red;
        this.green = green;
        this.blue = blue;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public int[] getTriplet() {
        int[] result = { red, green, blue };
        return result;
    }

    public void setTriplet(int red, int green, int blue) {
        if (red < 0 || red > 255
            || green < 0 || green > 255
            || blue < 0 || blue > 255) {
            System.err.println("Invalid argument.\n");
            // System.exit(1);
            return;
        }

        this.red = red;
        this.green = green;
        this.blue = blue;
    }

    public void setRed(int red) {
        if (red < 0 || red > 255) {
            System.err.println("Invalid argument.\n");
            // System.exit(1);
            return;
        }

        this.red = red;
    }

    public void setGreen(int green) {
        if (green < 0 || green > 255) {
            System.err.println("Invalid argument.\n");
            // System.exit(1);
            return;
        }

        this.green = green;
    }

    public void setBlue(int blue) {
        if (blue < 0 || blue > 255) {
            System.err.println("Invalid argument.\n");
            // System.exit(1);
            return;
        }

        this.blue = blue;
    }

    @Override
    public String toString() {
        return "Color{" +
                "name='" + name + '\'' +
                ", red=" + red +
                ", green=" + green +
                ", blue=" + blue +
                '}';
    }
}
