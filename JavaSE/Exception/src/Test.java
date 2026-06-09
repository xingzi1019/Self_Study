import java.io.FileInputStream;
import java.io.FileNotFoundException;

// 异常的处理一般由两种
// 一个是   --> 事前防御型
// 另一个是 --> 事后认错型
// 异常处理主要的5个关键字：throw、try、catch、finally、throws
class Student implements Cloneable {
    @Override
    protected Object clone() throws CloneNotSupportedException {
        return super.clone();
    }
}

public class Test {
    public static void func2(int a) {
        if (a == 0) {
            throw new ArithmeticException();
        }
        System.out.println(10 / a);
    }

    public static void func4(int a) { // 此时这个 throws CloneNotSupportedException 如果要写 那么main方法也得写
        try {
            if (a == 0) {
                throw new CloneNotSupportedException();
            }
        } catch (CloneNotSupportedException e) {
            e.printStackTrace();
            System.out.println("捕捉到了CloneNotSupportedException异常");
        }
        System.out.println("heihei");
    }

    public static void main() {
        func4(0);
    }

    public static void main4() {
        // func2(0);
        // 引入新语法 try catch
        try {
            func2(0); // 放进可能会抛出异常的语句
        } catch (ArithmeticException e) {  // 可能的异常类型放进 catch() 里面 捕获 try 当中可能发生的异常
            System.out.println("捕捉到了算术异常");
            e.printStackTrace(); // 会帮我们打印异常信息
            // java.lang.ArithmeticException
            //	at Test.func2(Test.java:18)
            //	at Test.main(Test.java:27)
        }
        // 要是抛出的异常没有 catch 到 JVM 也会捕捉 也会自动抛出异常
        // 发现此时连异常都不抛出了
        System.out.println("bbb"); // 不处理就执行不到这一行
    }

    public static void func(int a) throws CloneNotSupportedException {
        /*if (a == 0) { // 程序员手动抛出异常
            // throw new ArithmeticException(); // 常用在 抛出自己定义的异常
            // throw new ArithmeticException("a == 0"); // 有重载的
            // throw new StackOverflowError(); // 这个是错误
            // throw后面必须跟一个异常对象(Throwable 或其子类的实例)
            throw new CloneNotSupportedException("a == 0");
        }*/
        System.out.println(10 / a);
    }

    public static void main3() {
        try {
            func(0);
        } catch (ArithmeticException e) {
            // throw new RuntimeException(e);
            e.printStackTrace();
        } catch (CloneNotSupportedException e) {
            throw new RuntimeException(e);
        }
        // 处理之后程序可以继续往下走
        System.out.println("aaa");
    }

    public static void main2() throws CloneNotSupportedException, FileNotFoundException { // 加上这个 throw Clone... 就不会报错了
        Student student1 = new Student();
        Student student2 = (Student) student1.clone(); // Unhandled exception:
        FileInputStream fileInputStream = new FileInputStream("hello");
    }

    public static void main1() {
        // 程序遇到异常就不会去执行后面的代码了
        // 除非你处理了异常 不然程序不会继续往下走

        // 空指针异常
        /*int[] array = null;
        System.out.println(array.length); // NullPointerException */

        // 算术异常
        // System.out.println(10 / 0); // ArithmeticException

        // 越界
        int[] array = {1, 2, 3, 4, 5};
        System.out.println(array[5]); // ArrayIndexOutOfBoundsException

        // 异常是被 JVM 发现的
        // 所有的异常都是由 Throwable 这个类派生出来的
        // Throwable 派生出两个类型 一个是错误 Error 另一个是异常 Exception
        // 异常分为两类 一类是编译时异常/受查异常 另一类是运行时异常/非受查异常

        // 语法错误和编译时异常要区分开来
        // 运⾏时指的是程序已经编译通过得到 class ⽂件了, 再由 JVM 执⾏过程中出现的错误
    }
}
