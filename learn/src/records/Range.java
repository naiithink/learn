package records;

public record Range(int start, int end) {

    // Compact Constructor
    public Range {
        if (end <= start) {
            throw new IllegalArgumentException("End cannot be lesser than start");
        }

        if (start < 0) {
            start = 0;
        }

        if (end < 0) {
            end = 0;
        }
    }

    // Canonical Constructor
    // public Range(int start, int end) {
    //     if (end <= start) {
    //         throw new IllegalArgumentException("End cannot be lesser than start");
    //     }
    // 
    //     if (start < 0) {
    //         this.start = 0;
    //     } else {
    //         this.start = start;
    //     }
    // 
    //     if (end > 100) {
    //         this.end = 10;
    //     } else {
    //         this.end = end;
    //     }
    // }
}
