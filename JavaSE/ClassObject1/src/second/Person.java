package second;

public class Person {
    public String name;
    public int age;

    /*// 当我们什么构造方法都没写的时候 Java 会帮我们提供一个不带参数的构造方法
    // 且是隐式提供的 (救急不就穷) 全不写才会提供 自己有写的话就不提供
    */
    /*public Person () {

    }*/
    /*
    // 构造方法也可以重载 当作出生说明
    public Person() {
        this.name = "bit";
        this.age = 9;
        System.out.println("不带参数的构造方法被调用了");
    }

    public Person(String name) {
        this.name = name;
    }

    public Person(int age) {
        this.age = age;
    }

    public Person(String name, int age) {
        this.name = name;
        this.age = age;
        System.out.println("带有两个参数的构造方法被调用了");
    }*/
    // 鼠标右键 Generate 或者 Alt + Insert
    // 然后选择 Constructor 生成构造方法
    public Person() {
        /*this.name = "bit";
        this.age = 12;*/
        System.out.println("不带参数的构造方法");
        this("bit", 12);
        // this小括号必须在构造方法的第一行
        // 但是 JDK 25 新特性允许了 this super 不必是第一条语句
        // 帮我们调用了带两个参数的构造方法
    }

    public Person(String name, int age) {
        // this(); 不能形成一个环
        this.name = name;
        this.age = age;
        System.out.println("带两个参数的构造方法");
    }

    public Person(String name) {
        this.name = name;
    }

    public Person(int age) {
        this.age = age;
    }

    public void show() {
        System.out.println("姓名：" + this.name + "年龄：" + this.age);
    }

    public void sleep() {
        System.out.println(this.name + "正在睡觉");
    }

    public void eat() {
        System.out.println(this.name + "正在吃饭");
    }
    // 官方底层调用了这个方法 所以我们自己重载
    /*public String toString() {
        //return "星子";
        return "姓名：" + this.name + "年龄：" + this.age;
    }*/
    // 但是我们同样可以 Generate

    @Override // 注解 要是编译器 这是重写的
    public String toString() {
        return "Person{" +
                "name='" + name + '\'' +
                ", age=" + age +
                '}';
    }

    /*public void func() {
        this.sleep();
        this.eat();
    }*/
}
