package demo1;

// 1.以能阅读 java 集合源码为⽬标学习泛型
// 2.了解包装类
// 3.了解泛型


// 泛型如何编译的
// 擦除机制
// 那么，泛型到底是怎么编译的？
// 1. 基本概念：
// • 在编译时，Java 编译器会将泛型类型信息从代码中移除，这个过程就叫做类型擦除
// • 擦除后，泛型类型会被替换为其边界类型（通常是 Object）或者指定的类型
// 2. 擦除过程：
// • 将泛型参数替换为其边界或 Object
// • 在必要的地⽅插⼊类型转换以保持类型安全
// • ⽣成桥接⽅法以保持多态性

// 编译时才有擦除机制的概念 运行时是没有这个概念的
// 到 JVM 里头的时候已经是 Object 类了
class Student {

}

public class Test {
    // 什么是泛型
    // ⼀般的类和⽅法，只能使⽤具体的类型: 要么是基本类型，要么是⾃定义的类
    // 如果要编写可以应⽤于多种类型的代码，这种刻板的限制对代码的束缚就会很⼤
    // ----- 来源《Java编程思想》对泛型的介绍
    // 泛型是在JDK 1.5引⼊的新的语法
    // 通俗讲     泛型：就是适⽤于许多许多类型
    // 从代码上讲  泛型：就是对类型实现了参数化

    public static void main(String[] args) {
        MyArray<String> myArray = new MyArray<String>(); // 说明 myArray 只能放 String 类型的数据
        myArray.setVal(0, "xz");
        // myArray.setVal(1, 99); // error 编译器会帮我们检查
        String str1 = myArray.getPos(0); // 所以这里就不用强装了
        System.out.println(str1);
        System.out.println("====================");
        // MyArray<int> myArray2 = new MyArray<int>(); // <> 里面只能放包装类
        MyArray<Integer> myArray2 = new MyArray<Integer>();
        myArray2.setVal(0, 100);
        myArray2.setVal(1, 200);
        // myArray2.setVal(1,"kk"); // Error
        Integer pos = myArray2.getPos(0);
        System.out.println(pos);
        System.out.println("===================");
        // 更nb的使用方法如下
        // MyArray<Student> myArray3 = new MyArray<Student>();
        MyArray<Student> myArray3 = new MyArray<>(); // 后面<>里面的内容可以简写
        myArray3.setVal(0, new Student());
        Student student = myArray3.getPos(0);

        // 裸类型
        MyArray myArray99 = new MyArray();
        // 历史遗留问题 为了兼容之前的版本所以才保留
        // 不敢说更新了新的东西 之前的所有旧的就全部瘫痪了
    }

    public static void main4(String[] args) {
        MyArray myArray = new MyArray();
        myArray.setVal(0, "xz");
        myArray.setVal(1, 99);
        // String str = myArray.getPos(0); // 报错  父类类型 Object 给到子类必然有问题
        // int i = myArray.getPos(1);      // 报错
        // 只能用 Object 类接收
        // 方法一    强制类型转换成赋值时的类型
        String str1 = (String) myArray.getPos(0);
        int i1 = (int) myArray.getPos(1);
        // 方法二    用返回的类型来对应接收
        Object str2 = myArray.getPos(0);
        Object i2 = myArray.getPos(1);
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
        // [-128,127] // 总共256个数据
        // 有一个缓存的数组 如果在这个缓存数组的范围之内的话就是直接可以拿来用
        // 不在的话就去会 new 对象出来
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