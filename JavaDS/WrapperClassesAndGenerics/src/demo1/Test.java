package demo1;

// 1.以能阅读 java 集合源码为⽬标学习泛型
// 2.了解包装类
// 3.了解泛型
public class Test {
    // 什么是泛型
    // ⼀般的类和⽅法，只能使⽤具体的类型: 要么是基本类型，要么是⾃定义的类
    // 如果要编写可以应⽤于多种类型的代码，这种刻板的限制对代码的束缚就会很⼤
    // ----- 来源《Java编程思想》对泛型的介绍
    // 泛型是在JDK 1.5引⼊的新的语法
    // 通俗讲     泛型：就是适⽤于许多许多类型
    // 从代码上讲  泛型：就是对类型实现了参数化
    public static void main(String[] args) {

    }

    // 装箱/装包
    // 基本数据类型 变成 包装类的类型
    // 拆箱/拆包
    // 包装类的类型 变成 基本数据类型

    public static void main3(String[] args) {
        Integer a = 100;
        Integer b = 100;
        System.out.println(a == b); // true
        Integer c = 200;
        Integer d = 200;
        System.out.println(c == d); // false

        // 去看 valueOf 源码

        int aa = 100;
        int bb = 100;
        System.out.println(aa == bb); // true
        int cc = 200;
        int dd = 200;
        System.out.println(cc == dd); // true
    }

    // 拆箱
    public static void main2(String[] args) {
        Integer i = Integer.valueOf(100);
        // 自动拆箱
        int a = i; // 自动帮我调用了intValue
        // 手动拆箱
        int b = i.intValue();
        System.out.println(a); // 100
        System.out.println(b); // 100
    }

    // 装箱
    public static void main1(String[] args) {
        int a = 10;
        // 装箱一  手动装箱
        Integer i = Integer.valueOf(a);
        System.out.println(i);
        // 装箱二  自动装箱
        Integer ii = a;    // 自动帮我调用了 Integer.valueOf
        System.out.println(ii);
    }
}