import java.util.Scanner;

//递归求解汉诺塔问题
public class Test3_1 {
    public static void move(char a, char b) {
        System.out.println(a + "->" + b);
    }

    public static void fun(int n, char pos1, char pos2, char pos3) {
        if (n == 1) {
            move(pos1, pos3);
            return;
        }
        fun(n - 1, pos1, pos3, pos2);
        move(pos1, pos3);
        fun(n - 1, pos2, pos1, pos3); // 这里很容易不会或者出错
        //move(pos2,pos3);
    }

    public static void main() {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        fun(n, '1', '2', '3');
        int m = sc.nextInt();
        fun(m, 'A', 'B', 'C');
    }
}

//递归求斐波那契数列的第 N 项
//public class Test3_1 {
//    public static int fun(int n) {
//        if(n == 1 || n == 2) {
//            return 1;
//        }
//        return fun(n-1) + fun(n-2);
//    }
//    public static void main() {
//        Scanner sc = new Scanner(System.in);
//        int n = sc.nextInt();
//        int ret = fun(n);
//        System.out.println(ret);
//    }
//}

//写一个递归方法，输入一个非负整数，返回组成它的数字之和
//public class Test3_1 {
//    public static int fun(int n) {
//        if (n == 0) {
//            return 0;
//        }
//            return (n % 10) + fun(n / 10);
//    }
//
//    public static void main() {
//        int n = 12345;
//        int ret = fun(n);
//        System.out.println(ret);
//        int m = fun(9812);
//        System.out.println(m);
//    }
//}

//按顺序打印一个数字的每一位(例如 1234 打印出 1 2 3 4) (递归)
//public class Test3_1 {
//    public static void fun(int n) {
//        int temp = n % 10;
//        if (n > 10) {
//            fun(n / 10);
//        }
//        System.out.println(temp);
//    }
//    public static void main() {
//        int n = 1234;
//        fun(n);
//    }
//}

//递归求 1 + 2 + 3 + ... + 10
//public class Test3_1 {
//    public static int fun(int n) {
//        if (n == 1)
//            return 1;
//        return n+fun(n-1);
//    }
//    public static void main() {
//        int n = 10;
//        System.out.println(fun(n));
//    }
//}

//递归求 N 的阶乘
//public class Test3_1 {
//    public static int fun(int n) {
//        if (n==1)
//            return 1;
//        return n*fun(n-1);
//    }
//
//    public static void main() {
//        Scanner sc = new Scanner(System.in);
//        int n = sc.nextInt();
//        int ret = fun(n);
//        System.out.println(ret);
//    }
//}
