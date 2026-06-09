import java.util.Scanner;
// Shift + F9 开始调试  直接运行到断点位置的
// F9 运行到下一个断点
// F8 逐过程执行 不进入方法内部
// F7 逐语句     会进入方法内部
// Shift + F8 快速跑完这个方法 然后停在上层调用处
// Ctrl  + F5 重新开始调试
// Alt + Shift + F7 强制进入方法 一般是进入库方法
public class MyTest {
    public static void func(int n) {
        System.out.println(n);
    }

    static int fieBo(int n) {
        int a = 1;
        int b = 1;
        int c = a + b;
        if (n <= 2) {
            return 1;
        }
        n -= 3;
        while (n-- != 0) {
            a = b;
            b = c;
            c = a + b;
        }
        return c;
    }

    public static void main(String[] args) {
        // 求斐波那契数列的第n项。(迭代实现)
        /*Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        System.out.println(fieBo(1));
        System.out.println(fieBo(2));
        System.out.println(fieBo(3));
        System.out.println(fieBo(4));
        int receive = fieBo(n);
        System.out.println(receive);
        sc.close();*/


        /*int a =10;
        int max = Math.max(10,20);
        System.out.println(a);
        int ret = fieBo(1);
        System.out.println(ret);*/
        for (int i = 0; i < 1000; i++) {
            if (i == 500) {
                System.out.println("five");
            }
        }
    }
}
