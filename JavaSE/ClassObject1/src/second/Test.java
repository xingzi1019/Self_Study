package second; // 声明当前 java 类是在哪个包(文件夹)下的

import java.util.Arrays;
import java.util.Scanner; // 这个过程就叫做导包
//import java.sql.*; // // * 导入 sql 里面所有的类
//import java.lang.Math;
import static java.lang.Math.*; // 尽量不要导入包中静态的方法和变量

// 所以一般不要用 * 号会有歧义
public class Test {
    public static void main(String[] args) {
        double x = 30;
        double y = 40;
        // 静态导入的方式写起来更方便一些.
        // double result = Math.sqrt(Math.pow(x, 2) + Math.pow(y, 2));
        double result = sqrt(pow(x, 2) + pow(y, 2));
        System.out.println(result);
        System.out.println(result);
    }

    public static void main3() {
        //Date date = new Date();
        // java.util.Scanner sc = new java.util.Scanner(System.in); // 也可以这么写
        Scanner scanner = new Scanner(System.in); // 更推荐这种写法 不会像 cpp 那样会有严重的开销和污染名字空间
        int[] array = new int[3];
        System.out.println(Arrays.toString(array));
    }

    public static void main2() {
        Person person2 = new Person();
        // person2.show();
        System.out.println(person2); // Person@23fc625e
        // 从现象上来看:是在调用自己的 toString 方法
        // 原理是动态绑定
    }

    //构造方法注意事项
    //1. 名字必须与类名相同
    //2. 没有返回值类型，设置为void也不行
    //3. 创建对象时由编译器自动调用，并且在对象的生命周期内只调用一次(相当于人的出生，每个人只能出生一次)
    //4. 构造方法可以重载(用户根据自己的需求提供不同参数的构造方法)
    public static void main1(String[] args) {
        Person person = new Person("lisi", 14);
        System.out.println("==================");
        Person person2 = new Person(); // 调用了不带参数的构造方法
        Person person3 = new Person("小白"); // 调用了带 name 参数的构造方法
        Person person4 = new Person(2); // 调用了带 age 参数的构造方法
        // person.name = "张三";
        // person.age = 10;
    }
    /*public static void main() {
        // 构造方法是在 new 的时候被调用的
        Person person = new Person();
        // 调用构造方法主要用来初始化这个对象的成员变量
        person.name = "张三";
        person.age = 10;
        person.sleep();
        person.eat();
    }*/
}
