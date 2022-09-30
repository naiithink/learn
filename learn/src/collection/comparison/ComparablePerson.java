package collection.comparison;

import java.util.Arrays;

public class ComparablePerson
        implements Comparable<ComparablePerson> {

    private String firstName;

    private String lastName;

    private Integer age;

    public ComparablePerson(String firstName, String lastName, Integer age) {
        this.firstName = firstName;
        this.lastName = lastName;
        this.age = age;
    }

    public String getFirstName() {
        return firstName;
    }

    public String getLastName() {
        return lastName;
    }

    public Integer getAge() {
        return age;
    }

    @Override
    public String toString() {
        return "Person [firstName=" + firstName + ", lastName=" + lastName + "age=" + age + "]";
    }

    @Override
    public int compareTo(ComparablePerson other) {
        return lastName.compareTo(other.lastName);
    }

    public static void main(String[] args) {
        ComparablePerson a = new ComparablePerson("John", "Doe", 100);
        ComparablePerson b = new ComparablePerson("Harry", "Potter", 200);
        ComparablePerson c = new ComparablePerson("Jerry", "Riggers", 300);

        // List<Person> people = new ArrayList<>();
        
        // people.add(a);
        // people.add(b);
        // people.add(c);

        ComparablePerson[] people = { b, c, a };

        for (ComparablePerson p : people) {
            System.out.println(p);
        }

        System.out.println("Start sorting");
        Arrays.sort(people);

        for (ComparablePerson p : people) {
            System.out.println(p);
        }
    }
}
