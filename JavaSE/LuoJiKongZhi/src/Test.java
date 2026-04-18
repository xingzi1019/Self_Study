import java.util.Random;
import java.util.Scanner;

public class Test {
    static void main() {
        Scanner sc = new Scanner(System.in);
        Random random = new Random();
        int num = random.nextInt(100) + 1;
        int n = 0;
        System.out.print("输入你猜的数字：");
        while (true) {
            n = sc.nextInt();
            if (n > num) {
                System.out.println("猜大了 再试一次：");
            } else if (n < num) {
                System.out.println("猜小了 再试一次：");
            } else {
                System.out.println("答对了");
                break;
            }
        }
        sc.close();
    }
    // 求出0～n之间的所有“水仙花数”并输出。
    // (“水仙花数”是指一个三位数，其各位数字的立方和确好等于该数本身
    // 如；153＝1^3＋5^3＋3^3，则153是一个“水仙花数“。）
    static void main13() {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        for (int i = 100; i <= n; i++) {
            //int sum = 0;
            int g, s, b;
            g = i % 10;
            s = i / 10 % 10;
            b = i / 100;
            if (Math.pow(g, 3) + Math.pow(s, 3) + Math.pow(b, 3) == i)
                System.out.println(i);
        }
        sc.close();
    }

    // 计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值
    static void main12() {
        double sum = 0;
        for (int i = 1; i <= 100; i++) {
            if (i % 2 == 1) sum += 1.0 / i;
            else sum -= 1.0 / i;
        }
        System.out.println(sum);
    }

    static void main11() {
        //求2个整数的最大公约数
        //等会 欧几里得优化一下 霎时间忘记了这个东西
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        int maxgcd = 1;
        for (int i = 1; i <= Math.min(a, b); i++) {
            if (a % i == 0 && b % i == 0) {
                maxgcd = i;
            }
        }
        System.out.println(maxgcd);
        sc.close();
    }

    //1到 100 的所有整数中出现多少个数字9
    //9
    //19 29 39
    //90 91 92
    static void main10() {
        int count = 0;
        for (int i = 1; i <= 100; i++) {
            if (i == 9)
                count++;
            if (i > 10 && i < 90) {
                if (i % 9 == 0)
                    count++;
            }
            if (i >= 90 && i <= 99)
                count++;
        }
        System.out.println(count);
    }

    //1000 - 2000 的闰年
    static void main9() {
        for (int i = 1000; i <= 2000; i += 4) {
            boolean flag = true;
            if (i % 100 == 0 && i % 400 != 0) {
                flag = false;
            }
            if (flag) {
                System.out.println(i);
            }
        }
    }

    static void main8() {
        int a = 10, b = 20;
        int maxvalue = Math.max(a, b);
        System.out.println(maxvalue); // 10
        int absvalue = Math.abs(a - b);
        System.out.println(absvalue); // 20
    }

    static void main7() {
        //byte a = 0; // 不会死循环 [0,127][-128,-1]
        int a = 0;// 假死循环
        do {
            System.out.println(a);
            a++;
        } while (a != 0);
    }

    static void main6() {
        // 1-5的阶乘
        int sum = 0;
        for (int i = 1; i <= 5; i++) {
            int ret = 1;
            for (int j = 1; j <= i; j++) {
                ret *= j;
            }
            sum += ret;
        }
        System.out.println(sum);
        /*for (int i = 0; i < 10; i++) {
            System.out.println(i);
        }*/
    }

    static void main5() {
        int a = 1;
        // 是个坑 a = 3 后a的值不会改变 死循环了
        while (a < 10) {
            if (a == 3) {
                continue;
            }
            System.out.println(a); // 1 2
            a++;
        }
    }

    //打印 1 - 100 之间所有的素数
    static void main4() {
        for (int i = 2; i <= 100; i++) {
            boolean flg = true;
            for (int j = 2; j <= Math.sqrt(i); j++) {
                if (i % j == 0) {
                    flg = false;
                }
            }
            if (flg) {
                System.out.print(i);
                System.out.print(" ");
            }
        }
    }

    static void main3() {
        //循环初始值 循环条件 循环条件的改变 循环调节不改变就会陷入死循环

        //循环条件只能是 true 或者 false
        for (int i = 0; i < 10; i++) {
            System.out.print(i);
            System.out.print(" ");
        }
    }

    static void main2() {
        //switch 不能是 long float double
        //可以是String 枚举类型
        char ch = 'a';
        switch (ch) {
            case 'a':
                System.out.println(1);
            case 'b':
                System.out.println(2);
                break;
            default:
                System.out.println("error");
        }
    }

    static void main1() {
        // if 缩进的对齐
    }
}
