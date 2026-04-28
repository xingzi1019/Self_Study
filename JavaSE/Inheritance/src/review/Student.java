package review;

public class Student {
    int id; // 不能加 private 加了 Boy 和 Girl 就访问不了了
    String name; // 包访问权限
    int age;
    String gender;

    {
        System.out.println("Student的实例代码块");
    }

    static {
        System.out.println("Student的静态代码块");
    }

    public Student() {
        System.out.println("调用了Student不带参数的构造");
    }

    public Student(int id, String name, int age, String gender) {
        this.id = id;
        this.name = name;
        this.age = age;
        this.gender = gender; // 别忘了赋值
        System.out.println("调用了Student带4个参数构造");
    }

    public void doClass() {
        System.out.println(name + " 正在上课...");
    }

    public void eat() {
        System.out.println(name + " 正在吃饭...");
    }
}
