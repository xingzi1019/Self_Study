import java.util.Scanner;
// “Src” 在编程和技术领域是 Source（源、来源）的缩写，全称是 Source Code（源代码）
// Java里面判断字符串是否相等不能用 == 而是要用s.equals(ss) 来判断
public class Test {
    // 3柱3盘 汉诺塔 问题
    // A B C 三个柱子 A上面从下到上是从大到小的盘子
    // 完成换柱 需要这么一步步的执行
    // a->c a->b c->b a->c b->a b->c a->c 最终移动到了C柱上
    // 需要7步
    // 多验证几个之后 发现 n 个盘子 需要 (2^n) - 1 次操作
    // 脑海里面不要去展开 数值大一点展开就崩溃了
    // 每一个塔都可以看作是最下面那个加上上面的所有 而每一次的移动你都需要借助一个中间位置
    // A柱上的塔放到C柱上
    //                              起始位置    中间位置    目标位置
    public static void hanoi(int n, char pos1, char pos2, char pos3) {
        if (n == 1) {
            move(pos1, pos3);
            return;
        } else {
            // 第一步:上面的 n-1 个 盘子放到 B 上  至于这一步怎么放的我先不管(就是要有这种豪气和胆气 这种感觉只可深究不好言传)
            hanoi(n - 1, pos1, pos3, pos2);
            //               src         dest

            // 第二步:最下面的盘子放到 C 上面
            move(pos1, pos3);

            // 第三步:刚刚从 A->B 的 n-1 个盘子 要放到 已经有最大盘子的 C 上 他怎么实现的我不管
            hanoi(n - 1, pos2, pos1, pos3);
            //              src          dest
        }
    }

    public static void move(char posSrc, char posDest) {
        System.out.print(posSrc + "->" + posDest + " ");
    }

    static void main() {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        hanoi(n, 'A', 'B', 'C');
    }

    static void outNum(int n) {
        if (n < 10) {
            System.out.print(n);
            return;
        }
        //while (n != 0) { // 千万注意一下递归的出口条件
        int temp = n % 10;
        outNum(n / 10);
        System.out.print(temp);
        //}
    }

    // 用递归按顺序打印数字的每一位
    public static void main6() {
        int n = 1234; // 按这样的顺序打印1 2 3 4
        outNum(n);
    }

    public static void main5(String[] args) {
        int n = 5;
        int ret = factor(n);
        System.out.println("ret = " + ret);
    }

    // 递归解决 n 的阶乘
    public static int factor(int n) {
        if (n == 1) {
            return 1;
        }
        return n * factor(n - 1); // factor 调用函数自身
    }

    public static int max(int num1, int num2, int num3) {
        return num3 > (num1 > num2 ? num1 : num2) ? num3 : (num1 > num2 ? num1 : num2); // 这么写代码 合法但是不合理
        //return num3 > num1 > num2 ? num1 : num2 ? num3 : num1 > num2 ? num1 : num2; // 报错 所以要加括号
    }

    public static void main4() {
        int a = 1;
        int b = 2;
        int da = max(5, 8, 11);
        System.out.println(da);
        int ret = add(add(a, b), b); // 返回值可以支持链式表达式
        System.out.println(ret);
    }

    // 交换的是形参 x y 的值 实参 a b 的值没有变化
    public static void swap(int x, int y) {
        int temp = x;
        x = y;
        y = temp;
    }
    // 在Java当中是无法获取栈上的局部变量的地址的，如果要发生实参的交换，我们需要具备类和对象的知识

    public static void main3() {
        int a = 3;
        int b = 4;
        swap(a, b);
        System.out.println(a); // 3
        System.out.println(b); // 4
    }

    public static int add(int a, int b) {
        return (a + b);
    }

    // 求 n 的阶乘
    public static int jieChen(int n) {
        int ret = 1;
        for (int i = 1; i <= n; i++) {
            ret *= i;
        }
        return ret;
    }

    public static void main2() {
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
