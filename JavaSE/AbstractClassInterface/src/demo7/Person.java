package demo7;
class Money implements Cloneable{
    public double money = 9.9;

    @Override
    protected Object clone() throws CloneNotSupportedException {
        return super.clone();
    }
}
// Cloneable 空接口
public class Person implements Cloneable {
    public String name;
    public int age;
    public double score;

    public Money m = new Money();

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
    protected Object clone() throws CloneNotSupportedException { // 受查异常
        // return super.clone(); // 浅拷贝
        Person tmp = (Person) super.clone();
        tmp.m = (Money) this.m.clone();
        return tmp;
    }
}
