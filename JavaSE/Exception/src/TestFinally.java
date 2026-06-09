import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.util.InputMismatchException;
import java.util.Scanner;
// throw 可以抛出异常也可以抛出错误
// 但通常规范 Error 是 JVM 层面的问题 一般不由开发者抛出

// 总结
// 【异常常处理流程总结】
//• 程序先执⾏ try 中的代码
//• 如果 try 中的代码出现异常, 就会结束 try 中的代码, 看和 catch 中的异常类型是否匹配.
//• 如果找到匹配的您常类型, 就会执⾏ catch 中的代码
//• 如果没有找到匹配的异常类型, 就会将异常向上传递到上层调⽤者.
//• ⽆论是否找到匹配的异常类型, finally 中的代码都会被执⾏到(在该⽅法结束之前执⾏).
//• 如果上层调⽤者也没有处理的了异常, 就继续向上传递.
//• ⼀直到 main ⽅法也没有合适的代码处理异常, 就会交给 JVM 来进⾏处理, 此时程序就会异常终⽌

public class TestFinally {
    // 调用栈
    // ⽅法之间是存在相互调⽤关系的, 这种调⽤关系我们可以⽤ "调用栈" 来描述
    // 在 JVM 中有⼀块内存空间称为 "虚拟机栈" 专门存储⽅法之间的调⽤关系
    // 当代码中出现异常的时候, 我们就可以使⽤e.printStackTrace(); 的⽅法查看出现异常代码的调⽤栈

    // 如果向上⼀直传递都没有合适的⽅法处理您常, 最终就会交给 JVM 处理
    // 程序就会异常终⽌(和我们最开始未使⽤ try catch 时是⼀样的)
    public static void main() {
        try {
            func1();
        } catch (ArrayIndexOutOfBoundsException e) {
            // System.out.println("抛出xxx异常...");
            e.printStackTrace();
        }
        System.out.println("after try catch");
    }

    public static void func1() {
        int[] array = {1, 2, 3};
        System.out.println(array[100]);
    } // 站在这个方法的角度并没有处理这个异常
    // 输出1
    // 条件:存在 System.out.println("抛出xxx异常..."); 这个代码的话
    // 抛出xxx异常...
    //after try catch
    //java.lang.ArrayIndexOutOfBoundsException: Index 100 out of bounds for length 3
    //	at TestFinally.func1(TestFinally.java:23)
    //	at TestFinally.main(TestFinally.java:13)

    // 输出2
    // 条件:不存在System.out.println("抛出xxx异常..."); 这个代码的话
    // java.lang.ArrayIndexOutOfBoundsException: Index 100 out of bounds for length 3
    //	at TestFinally.func1(TestFinally.java:23)
    //	at TestFinally.main(TestFinally.java:13)
    //after try catch

    // 原因 ：
    // 输出1:
    // 执行顺序：
    // e.printStackTrace()会将异常信息打印到 标准错误流（stderr）
    // System.out.println()打印到 标准输出流（stdout）
    // 两个流是独立的，输出顺序不保证，取决于系统的缓冲区刷新时机
    // 通常控制台中，stderr可能会稍后显示，导致 println的输出先出现
    // 输出2:
    // 执行顺序：
    // 只有 e.printStackTrace()输出到 stderr
    // 然后是 System.out.println("after try catch")输出到 stdout
    // 由于 stderr 和 stdout 的竞争，有时看起来是顺序执行

    //                                            这里的 throws 其实更多时候是在声明 这个方法可能有下面的这些异常 注意是可能
    public static int getElement(int[] array, int index) throws NullPointerException, ArrayIndexOutOfBoundsException {
        if (null == array) {
            throw new NullPointerException("传递的数组为null");
        }
        if (index < 0 || index >= array.length) {
            throw new ArrayIndexOutOfBoundsException("传递的数组下标越界");
        }
        return array[index];
    }

    public static void main4(String[] args) {
        int[] array = {1, 2, 3};
        try {
            getElement(array, 3);
        } catch (NullPointerException e) {
            e.printStackTrace();
        } catch (ArrayIndexOutOfBoundsException e) {
            e.printStackTrace();
        } catch (Exception e) {
            e.printStackTrace();
        } finally {
            System.out.println("已完成异常的捕捉1...");
        }
        try {
            FileInputStream fileInputStream = new FileInputStream("路径");
        } catch (FileNotFoundException e) {
            e.printStackTrace();
        } finally {
            System.out.println("已完成异常的捕捉2...");
        }
        // finally是最后执行的 上下两个 try catch 执行完之后才会展示 finally
    }

    public static void func() throws FileNotFoundException {
        FileInputStream fileInputStream = new FileInputStream("路径");
    }

    public static int getData1() {
        Scanner sc = null;
        try {
            sc = new Scanner(System.in);
            int data = sc.nextInt();
            return data;  // 输对会执行到这一行 输错就不会执行这一行代码了
        } catch (InputMismatchException e) {
            e.printStackTrace();
        } finally { // 保底 防止资源的浪费
            System.out.println("finally中代码");
        }
        // 发现输对不关闭 sc 输错才会关闭
        System.out.println("try-catch-finally之后代码");
        if (null != sc) {
            sc.close();
        }
        return 0;
    }

    public static int getData() {
        try (Scanner sc = new Scanner(System.in)) { // 如果try() 里面写了资源 那么后面不用手动 close 它会帮我们自动 close
            int data = sc.nextInt();
            return data;
        } catch (InputMismatchException e) {
            e.printStackTrace();
        } finally {
            System.out.println("finally中代码");
        }
        System.out.println("try-catch-finally之后代码");
        return 0;
    }

    public static int func4() {
        try {
            return 10;
        } finally {
            return 20;
        }
    }

    public static void main3() {
        int i = func4();
        System.out.println(i); // 20
    }

    public static void main2(String[] args) {
        int data = getData();
        System.out.println(data);
    }

    public static void main1() {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt(); // 输入别的会抛出输入匹配错误异常 InputMismatchException
        System.out.println(a);
    }
}