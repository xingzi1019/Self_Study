package lambdademo;

// 下面这个 @ 注解 类似于重写的注解 帮助我们检查
/*@FunctionalInterface
interface NoParameterNoReturn {
    // 函数式接口
    // 注意：只能有⼀个抽象⽅法
    void test();
    default void test2() {
        // 默认方法
    }
}*/
/*
    lambda表达式允许你通过表达式来代替功能接⼝
    lambda表达式就和⽅法⼀样,它提供了⼀个正常的参数列表和⼀个使⽤这些参数的主体(body,可以是⼀个表达式或⼀个代码块)

    基本语法:
    (parameters) -> expression
    (parameters) -> {Statements}

    paramaters：类似⽅法中的形参列表，这⾥的参数是函数式接⼝⾥的参数。
                这⾥的参数类型可以明确的声明也可不声明⽽由JVM隐含的推断
                另外当只有⼀个推断类型时可以省略掉圆括号

    ->：可理解为“被⽤于”的意思

    ⽅法体： 可以是表达式也可以是代码块，是函数式接⼝⾥⽅法的实现。
            代码块可返回⼀个值或者什么都不反回，这⾥的代码块块等同于⽅法的⽅法体。
            如果是表达式，也可以返回⼀个值或者什么都不返回
 */

// 要了解Lambda表达式,⾸先需要了解什么是函数式接⼝
// 函数式接⼝定义：⼀个接⼝有且只有⼀个抽象⽅法
// 简单来说：lambda表达式是匿名内部类的一种简化形式，但并不是所有匿名内部类都能用lambda替代

import java.util.ArrayList;
import java.util.Comparator;
import java.util.HashMap;
import java.util.PriorityQueue;
import java.util.function.BiConsumer;
import java.util.function.Consumer;

public class Test {
    /*
    优点：
    1. 代码简洁，开发迅速
    2. ⽅便函数式编程
    3. ⾮常容易进⾏并⾏计算
    4. Java 引⼊ Lambda，改善了集合操作
    缺点:
    1. 代码可读性变差
    2. 在⾮并⾏计算中，很多计算未必有传统的 for 性能要⾼
    3. 不容易进⾏调试
     */
    public static void main(String[] args) {
        HashMap<Integer, String> map = new HashMap<>();
        map.put(1, "tell");
        map.put(2, "bit");
        map.put(3, "hello");
        map.put(4, "lambda");
        map.forEach(new BiConsumer<Integer, String>() {
            @Override
            public void accept(Integer integer, String string) {
                System.out.println(integer + " " + string);
            }
        });
        System.out.println("============================================");
        map.forEach((i, s) -> System.out.println(i + " " + s));
    }

    public static void main4(String[] args) {
        ArrayList<String> list = new ArrayList<>();
        list.add("tell");
        list.add("bit");
        list.add("hello");
        list.forEach(new Consumer<String>() {
            @Override
            public void accept(String s) {
                System.out.println(s);
            }
        });
        System.out.println("==========================");
        // 上下效果一样
        // 用来替代 Consumer 这个函数式接口
        list.forEach(s -> System.out.println(s));

        list.sort(new Comparator<String>() {
            @Override
            public int compare(String o1, String o2) {
                return o1.compareTo(o2);
            }
        });
        // list.forEach(s -> System.out.println(s));
        list.forEach(System.out::println); // 可以精简成这样
        // list.sort((o1, o2) -> o1.compareTo(o2));
        list.sort(String::compareTo); // 也可以这么精简
    }

    public static void main1(String[] args) {
        NoParameterNoReturn noParameterNoReturn = new NoParameterNoReturn() {
            @Override
            public void test() {
                System.out.println("哈哈");
            }
        }; // 等号后面就是一个匿名内部类 这个类实现了这个接口 同时重写了里面的方法
        noParameterNoReturn.test(); // 输出 哈哈
        // 下面这样也可以输出 哈哈
        new NoParameterNoReturn() {
            @Override
            public void test() {
                System.out.println("哈哈");
            }
        }.test(); // test 没有返回值所以不能够被接收

        NoParameterNoReturn noParameterNoReturn2 = () -> System.out.println("哈哈哈");
        noParameterNoReturn2.test();
        int a = 10;
        // a = 100;
        PriorityQueue<Integer> priorityQueue = new PriorityQueue<>(new Comparator<Integer>() {
            @Override
            public int compare(Integer o1, Integer o2) {
                System.out.println(a); // 这个变量捕获的 要么是 final 修饰的 要么是不重新赋值改变的
                return o1.compareTo(o2);
            }
        });
        // 同样的 lambda 表达式的后半段也只能捕获 final 修饰的值 或者没有变化的值
        // 上下两个写法是一样的
        PriorityQueue<Integer> priorityQueue2 = new PriorityQueue<>((x, y) -> {
            return x.compareTo(y);
        });
        // 所以代码习惯 如果要在 匿名内部类 或者 lambda 使用的时候就会 加上 final 关键字 后面误改的时候就会先报错出来
    }

    public static void main2(String[] args) {
        OneParameterNoReturn oneParameterNoReturn = new OneParameterNoReturn() {
            @Override
            public void test(int a) {
                System.out.println(a);
            }
        };
        oneParameterNoReturn.test(1);
        // OneParameterNoReturn oneParameterNoReturn2 = (x) -> {System.out.println(x);};
        // 前面只有一个参数可以省略小括号 后面只有一条语句可以省略花括号
        // 没有参数的话前面小括号不能省略
        OneParameterNoReturn oneParameterNoReturn2 = x -> System.out.println(x); // 再精简 System.out::println;
        oneParameterNoReturn2.test(2);

        // MoreParameterNoReturn moreParameterNoReturn = (int a,int b) -> System.out.println(a+b);
        MoreParameterNoReturn moreParameterNoReturn = (a, b) -> System.out.println(a + b); // 参数类型可以省略
    }

    public static void main3(String[] args) {
        // NoParameterReturn noParameterReturn = () -> {return 10;};
        NoParameterReturn noParameterReturn = () -> 10; // 可以精简成这这样
        System.out.println(noParameterReturn.test()); // 10

        OneParameterReturn oneParameterReturn = a -> a + 1;
        System.out.println(oneParameterReturn.test(10)); // 11

        MoreParameterReturn moreParameterReturn = (a, b) -> a + b;
        System.out.println(moreParameterReturn.test(1, 2)); // 3
    }
    /*
    语法的精简这里做个总结:
        1. 参数类型可以省略，如果需要省略，每个参数的类型都要省略
        2. 参数的⼩括号⾥⾯只有⼀个参数，那么⼩括号可以省略
        3. 如果⽅法体当中只有⼀句代码，那么⼤括号可以省略
        4. 如果⽅法体中只有⼀条语句，且是return语句，那么⼤括号可以省略，且可以去掉return关键字
     */

    //⽆返回值⽆参数
    @FunctionalInterface
    interface NoParameterNoReturn {
        void test();
    }

    //⽆返回值⼀个参数
    @FunctionalInterface
    interface OneParameterNoReturn {
        void test(int a);
    }

    //⽆返回值多个参数
    @FunctionalInterface
    interface MoreParameterNoReturn {
        void test(int a, int b);
    }

    //有返回值⽆参数
    @FunctionalInterface
    interface NoParameterReturn {
        int test();
    }

    //有返回值⼀个参数
    @FunctionalInterface
    interface OneParameterReturn {
        int test(int a);
    }

    //有返回值多参数
    @FunctionalInterface
    interface MoreParameterReturn {
        int test(int a, int b);
    }
}