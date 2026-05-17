// 猜想-->通过实践验证-->应用
public class Test2 {
    // finally
    // 在写程序时，有些特定的代码，不论程序是否发⽣您常，都需要执⾏
    // ⽐如程序中打开的资源：⽹络连接、数据库连接、IO流等，在程序正常或者您常退出时，必须要对资源进进⾏回收
    // 另外，因为您常会引发程序的跳转，可能导致有些语句执⾏不到，finally就是⽤来解决这个问题的

    // finally 中的 return 语句会覆盖 try 或 catch 的 return 语句
    public static void main() {

    }

    // 如果异常之间具有⽗⼦关系，⼀定是⼦类异常在前catch，⽗类异常在后catch，否则语法错误：
    public static void main3() {
        int[] arr = {1, 2, 3};
        try {
            System.out.println("before");
            arr = null;
            System.out.println(arr[100]);
            System.out.println("after");
        } catch (NullPointerException e) { // 如果放在父类后面会报错 因为根本捕捉不到会被父类截取 所以要把子类放在前面
            // 报错信息如下
            // Exception 'java.lang.NullPointerException' has already been caught
            e.printStackTrace();
        } catch (Exception e) { // Exception可以捕获到所有异常
            e.printStackTrace();
        } finally { // 无论是否异常 都会执行 finally
            System.out.println("不管怎么样 finally 都会被执行的");
        }
        System.out.println("after try catch");
        // 不推荐使用 catch(Exception)
    }

    // 【注意事项】
    // 1. try块内抛出异常位置之后的代码将不会被执⾏
    // 2. 如果抛出异常类型与catch时异常类型不匹配 即异常不会被成功捕获
    //    也就不会被处理 继续往外抛 直到JVM收到后中断程序----异常是按照类型来捕获的
    // 3. try中可能会抛出多个不同的异常对象，则必须⽤多个catch来捕获----即多种异常，多次捕获
    public static void main2() {
        int[] array = {1, 2, 3};
        try {
            System.out.println("before");
            // array = null;
            System.out.println(array[100]);
            System.out.println("after");
        }
        // catch 可以按下面方式来简写 但是不建议这么写 必然不好找到异常的原因
        catch (ArrayIndexOutOfBoundsException | NullPointerException e) { // 只需要后面写个 e 就可以了
            System.out.println("这是个数组下标越界异常/空指针异常");
            e.printStackTrace();
        }
        System.out.println("after try catch");
        /*catch (ArrayIndexOutOfBoundsException e) {
            System.out.println("这是个数组下标越界异常");
            e.printStackTrace();
        } catch (NullPointerException e) {
            System.out.println("这是个空指针异常");
            e.printStackTrace();
        } */
    }

    public static void main1() {
        try {
            int[] array = null;
            System.out.println(array.length);
            System.out.println("哈哈哈...");   // 并不会执行
            // 一旦 try 抛出异常 就会往下到 Catch 语句 所以不会执行 try 剩余的代码
        } catch (NullPointerException e) {
            // 可以填父类异常 甚至 Throwable 也是可以的
            // 如果捕捉到的异常不是真正的异常就会保底被 JVM 捕捉 那么程序就不会继续运行了
            e.printStackTrace();
            System.out.println("空指针异常抛出了...");
        }
        System.out.println("程序继续执行...");
    }
}
// 关于异常的处理⽅式
// 异常的种类有很多, 我们要根据不同的业务场景来决定.
// 1. 对于⽐较严重的问题(例如和算钱相关的场景), 应该让程序直接崩溃, 防⽌造成更严重的后果
// 2. 对于不太严重的问题(⼤多数场景), 可以记录错误⽇志, 并通过监控报警程序及时通知程序猿
// 3. 对于可能会恢复的问题(和⽹络相关的场景), 可以尝试进⾏重试.
// 在我们当前的代码中采取的是经过简化的第⼆种⽅式
// 我们记录的错误⽇志是出现异常的⽅法调⽤信息
// 能很快速的让我们找到出现异常的位置
// 以后在实际⼯作中我们会采取更完备的⽅式来记录异常信息.