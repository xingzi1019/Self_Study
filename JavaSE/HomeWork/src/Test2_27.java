import java.util.Scanner;

public class Test2_27 {
    static int sum(int a,int b) {
        return a + b;
    }
    static float sum(float a,float b,float c) {
        return a + b + c;
    }
    static void main() {
        // 在同一个类中定义多个方法：
        // 要求不仅可以求2个整数的最大值，还可以求3个小数的最大值？
        int a = 2, b = 3;
        float f1 = 1.23F, f2 = 3.14f, f3 = 0.98F;
        int sumInt = sum(a,b);
        float sumFloat = sum(f1,f2,f3);
        System.out.println(sumInt);
        System.out.println(sumFloat);
    }

    static int fieBo(int n) {
        int a = 1;
        int b = 1;
        int c = a + b;
        if (n <= 2) {
            return 1;
        }
        // 1 1    2 n=3
        // 1 2    3 n=4
        // 2 3    5 n=5
        // 1 1 2 3 5 8 13 21
        n -= 3;
        while (n-- != 0) {
            a = b;
            b = c;
            c = a + b;
        }
        return c;
    }

    static void main4() {
        // 求斐波那契数列的第n项。(迭代实现)
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int receive = fieBo(n);
        System.out.println(receive);
        sc.close();
    }

    static int JieChen(int n) {
        int ret = 1;
        for (int i = 1; i <= n; i++) {
            ret *= i;
        }
        return ret;
    }

    static void main3() {
        // 求1！+2！+3！+4！+........+n!的和
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int sum = 0;
        for (int i = 1; i <= n; i++) {
            sum += JieChen(i);
        }
        System.out.println(sum);
    }

    static void main2() {
        /*
         * 编写代码模拟三次密码输入的场景。
         * 最多能输入三次密码，密码正确，提示“登录成功”
         * 密码错误， 可以重新输 入，最多输入三次。
         * 三次均错，则提示退出程序
         */
        int time = 3;
        Scanner sc = new Scanner(System.in);
        String s = "LumenStar1019";
        int i = 1;
        for (i = 1; i <= 3; i++) {
            String input = sc.nextLine();
            if (s.equals(input)) {
                System.out.println("登录成功");
                break;
            } else {
                System.out.println("登录失败");
            }
        }
        if (i == 3) {
            System.out.println("退出程序");
        }
    }

    static void main1() {
        //输出一个整数的每一位，如：123的每一位是3，2，1
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        while (n != 0) {
            System.out.println(n % 10);
            n /= 10;
        }
        sc.close();
    }
}
