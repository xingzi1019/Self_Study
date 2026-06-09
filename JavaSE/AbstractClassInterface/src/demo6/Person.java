package demo6;

public class Person implements Comparable<Person>{
    public String name;
    public int age;
    public double score;

    public Person(String name, int age, double score) {
        this.name = name;
        this.age = age;
        this.score = score;
    }

    @Override
    public String toString() {
        return "Student{" +
                "name='" + name + '\'' +
                ", age=" + age +
                ", score=" + score +
                '}';
    }

    @Override
    public int compareTo(Person o) {
        return this.age - o.age;
    }
}
