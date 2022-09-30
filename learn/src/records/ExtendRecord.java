package records;

record SuperRecord(int i) {}

class ExtendRecord
        extends SuperRecord {

    public ExtendRecord(int i) {
        super(i);
    }
}
