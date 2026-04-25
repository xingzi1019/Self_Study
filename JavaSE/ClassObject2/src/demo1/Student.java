package demo1;

public class Student {
    // 总体顺序如下:
    // 1.先执行实例代码块
    // 2.在执行对应的构造方法
    // 3.如果有实例成员变量就地初始化
    // 此时 示例代码块和实例成员变量的执行顺序 取决于 书写的顺序
    public String name;
    public int age;
    public static String ClassRoom = "118Java"; // 静态成员变量(类变量)

    // 类被加载的时候 静态代码块
    static {
        ClassRoom = "119Java";
        System.out.println("静态代码块被执行了......");
    }

    public Student() {
        System.out.println("不带参数的构造方法被执行了......");
    }

    public Student(String name, int age) {
        this.age = age;
        this.name = name;
        System.out.println("带两个参数的构造方法被执行了......");
    }

    // 实例代码块
    {
        this.name = "星子";
        this.age = 19;
        System.out.println("实例代码块被执行了......");
        // 一般用来初始化实例成员
    }

    // 存储在方法区中 生命周期伴随类的一生 全局只有一份
    // 不属于某个具体的对象 是所有对象共同拥有的
    // 加了 static 之后当前的成员变量就不属于对象了
    public void doClass() {
        System.out.println("学生正在上课");
    }

    // 同样的 成员方法也可以 static 来修饰
    public static String getClassRoom() { // 不存在隐式参数 this
        // return ClassRoom; // this 代表当前对象的引用 所以.不出来
        // this.name = "aaa"; // 报错
        // name = "aaa"; // 也报错
        // return this.name; // 报错
        // 原因: 调用这个方法的时候没有实例化对象
        // 静态方法的调用不依赖于对象 但是方法内部 又使用了依赖于对象的内容
        // 所以这里不能调用非静态的内容 所以不能调用 name 也不能使用 this
        // 类比方法也是一样的
        // 总结:静态方法里面不能调用 非静态的属性和方法
        // 然而实例方法就必须依赖于对象

        // Student student = new Student();
        // student.doClass(); // 非得调用就 new 个对象出来
        // 上面这两行代码可以
        return ClassRoom;
    }

}
