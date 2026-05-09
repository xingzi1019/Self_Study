package demo6;

public class Student implements Comparable<Student> { // <T> :这个 T 是泛型
    public String name;
    public int age;
    public double score;

    public Student(String name, int age, double score) {
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
    public int compareTo(Student o) {
        /*if (this.age > o.age) {
            return 1;
        } else if (this.age == o.age)
            return 0;
        else {
            return -1;
        }*/
        return this.age - o.age;
    }
}
