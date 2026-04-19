import java.util.Scanner;

public class Test {
    public static int add(int a, int b) {
        return (a + b);
    }

    public static int jieChen(int n) {
        int ret = 1;
        for (int i = 1; i <= n; i++) {
            ret *= i;
        }
        return ret;
    }

    public static void main() {
        int sum = 0;
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        // 求 1~n 的阶乘
        for (int i = 1; i <= n; i++) {
            sum += jieChen(i);
        }
        System.out.println(sum);
        sc.close();
    }

    public static void main1() {
        // public 和 static 都是修饰符 void 是返回值类型
        //在Java当中，方法必须写在类当中
        //在Java当中，方法不能嵌套定义
        //在Java当中，没有方法声明一说
        long ret = add(1, 3);
        System.out.println(ret); // 不会报错 正常执行
    }
}
