package demo1;

public class Animal {
    public String name;
    public int age;

    public Animal(String name, int age) {
        this.name = name;
        this.age = age;
        System.out.println("Animal带两个参数的构造被调用了...");
    }
    public Animal() {
        System.out.println("Animal不带参数的构造被调用了...");
    }

    public void eat() {
        System.out.println(this.name + " 正在吃饭...");

    }
}
