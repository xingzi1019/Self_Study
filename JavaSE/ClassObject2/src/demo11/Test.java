// 在方法当中定义的变量是局部变量，而静态的变量属于类变量
// 所以方法里面不能有 static 修饰的变量
package demo11;
// import 只能导入一个具体的类
public class Test {
    // 代码块:
    // 1.普通代码块
    // 2.构造块(实例代码块)
    // 3.静态块
    // 4.同步代码块 -----> 后面多线程部分再讲
    public static void main() {
        Student student1 = new Student();
        // 静态代码块被执行了......
        // 实例代码块被执行了......
        // 不带参数的构造方法被执行了......
        System.out.println("================");
        // System.out.println(Student.ClassRoom);
        // 静态代码块被执行了......
        // 119Java
        Student student2 = new Student();
        // 类只被加载一次 所以静态代码块只被执行一次
        // 不管你实例化几次对象 静态代码块只会执行一次
        //。 静态代码块不管生成多少个对象，其只会执行一次
        //。 静态成员变量是类的属性，因此是在JVM加载类时开辟空间并初始化的
        //。 如果一个类中包含多个静态代码块，在编译代码时，编译器会按照定义的先后次序依次执行(合并)
        //。 实例代码块只有在创建对象时才会执行
    }

    public static void main5() {
        Student student1 = new Student("悟空", 100);
        System.out.println(student1.name); // 悟空
        System.out.println(student1.age); // 100
        System.out.println("=============");
        Student student2 = new Student("八戒", 100);
        System.out.println(student1.name); // 八戒
        System.out.println(student1.age); // 100
    }

    public static void main4() {
        Student student1 = new Student();
        // 写了实例代码块之后 先执行实例代码块 再执行构造方法
        System.out.println(student1.name); // 星子
        System.out.println(student1.age); // 19
    }

    public static void main3(String[] args) {
        // 普通代码块 ---->但是基本上不会去写
        {
            int a = 10;
            System.out.println(a); // 10
        }
        // System.out.println(a); // 报错
        int a = 100;
        System.out.println(a); // 100
    }

    public static void main2(String[] args) {
        Student.ClassRoom = "119Java"; // 属于类的变量 通过类来访问
        System.out.println(Student.ClassRoom);
        System.out.println(Student.getClassRoom()); // 119Java
    }

    public static void main1(String[] args) {
        Student student1 = new Student();
        student1.name = "张三";
        student1.age = 10;
        //student1.ClassRoom = "119Java";
        // 上面注释掉的代码 合法但是并不合理 应该要用类名来访问
        Student.ClassRoom = "119Java";

        Student student2 = new Student();
        student2.name = "王五";
        student2.age = 19;
        //student2.ClassRoom = "119Java";
        System.out.println(Student.ClassRoom); // 119Java
    }
}