import java.util.Random;
import java.util.Scanner;
//这么理解 import 和 #include 差不多

public class Test {
    static void main() {
        // 再来一遍猜数字游戏
        // Random 是伪随机
        Random random = new Random(); // 就当 Scanner 一样来理解就好了
        int num = random.nextInt(100); // [0,100) 左闭右开
        System.out.println(num);
        int num2 = random.nextInt(21) + 30; // [30,50] 右边界限额外 + 1 就可以实现 左右都是闭区间了
        System.out.println(num2);
    }
    static void main6() {
        Scanner sc = new Scanner(System.in);
        // IDEA 里面的结束是 ctrl + d
        // cmd  里面的结束是 ctrl + z
        // 使用 Scanner 循环读取 N 个数字
        while (sc.hasNextInt()) {
            int n = sc.nextInt();
            System.out.println(n);
        }
        // 工作流程图
        // 循环开始
        //  ↓
        // while (sc.hasNextInt())  ← 等待输入...
        // 用户输入: 5 ->（按回车）
        //  ↓
        // hasNextInt() 检测到 "5" 是整数 → 返回 true
        // 进入循环体
        //  ↓
        // int n = sc.nextInt();   ← 读取刚才输入的 "5"（消耗掉这个数字）
        // System.out.println(n);  ← 输出 5
        //  ↓
        // 回到循环开始
        //  ↓
        // while (sc.hasNextInt()) ← 再次等待新的输入...
        sc.close();
    }

    static void main5() {
        Scanner scan = new Scanner(System.in);
        //发现输入年龄之后的 ENTER 回车键被 nextLine() 读取
        System.out.println("请输入你的年龄:");
        int age = scan.nextInt();
        System.out.println("年龄是" + age);
        scan.nextLine(); // 那我们再来一个 nextLine() 读取走不就行了吗
        System.out.println("请输入你的姓名:");
        String name = scan.nextLine();
        System.out.println("姓名是" + name);

        System.out.println("请输入你的体重:");
        float weight = scan.nextFloat();
        System.out.println("体重是:" + weight);

        scan.close();
    }

    static void main4() {
        //Scanner就是一个工具而已
        //Scanner类型 变量 = 对象 -> System.in 标准输入
        Scanner scan = new Scanner(System.in); //
        /*int a = scan.nextInt();
        double d = scan.nextDouble();
        float f = scan.nextFloat();*/
        System.out.println("请输入你的姓名:");
        String name = scan.nextLine();
        //String name = scan.next(); // 遇到空格结束
        System.out.println("姓名是" + name);
        System.out.println("请输入你的年龄:");
        int age = scan.nextInt();
        System.out.println("年龄是" + age);
        System.out.println("请输入你的体重:");
        float weight = scan.nextFloat();
        System.out.println("体重是:" + weight);
        scan.close();
    }

    static void main3() {
        // %b %h %.2f%%
        // %b：输出布尔值
        boolean a = true;
        System.out.printf("%b", a);
        // %h：输出散列表（哈希表） ---> hash 所以 %h 的 h 就是这么来的
        System.out.printf("%h", 100);
    }

    static void main2() {
        //System.out.println(msg); // 输出一个字符串, 带换行
        //System.out.print(msg); // 输出一个字符串, 不带换行
        //System.out.printf(format, msg); // 格式化输出
        //println 输出的内容自带 \n, print 不带 \n
        //printf 的格式化输出方式和 C 语言的 printf 是基本一致的.代码示例
        System.out.println("hello world");
        int x = 10;
        System.out.printf("x = %d\n", x);
    }

    static void main1() {
        // * 号图案
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        // char[][] map = new char[n][n];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i == j) {
                    System.out.print("*");
                } else if (i + j == n - 1) {
                    System.out.print("*");
                } else {
                    System.out.print(" ");
                }
            }
            System.out.println();
        }
    }
}
