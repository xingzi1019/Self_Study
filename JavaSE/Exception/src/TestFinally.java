import java.util.InputMismatchException;
import java.util.Scanner;

public class TestFinally {
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

    public static void main(String[] args) {
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
            System.out.println("已完成异常的捕捉...");
        }
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