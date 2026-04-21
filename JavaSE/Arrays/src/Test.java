// Shift + F9 开始调试  直接运行到断点位置的
// F9 运行到下一个断点
// F8 逐过程执行 不进入方法内部
// F7 逐语句     会进入方法内部
// Shift + F8 快速跑完这个方法 然后停在上层调用处
// Ctrl  + F5 重新开始调试
// Alt + Shift + F7 强制进入方法 一般是进入库方法

import java.util.Arrays;
import java.util.Scanner;

public class Test {
    static void main() {
        int a = 10;
        int b = 20;
        // a 和 b 是放在栈空间上的 你是获取不到它的地址的 Java没有 & 取地址这个东西 就算你拿到 也没有 * 解引用这个符号
        int[] array = {1, 2, 3, 4, 5};
        // 上面这一行代码实际上做了两件事
        // 1.数组对象本身
        //   是一个 int[] 对象
        //   存放在堆中
        // 2.变量 array
        //   是一个引用变量
        //   存放在栈中
        //   它的值是"指向堆中数组对象的地址"
        // 用一句话总结就是---> array 变量在栈上 真正的数组对象在堆上
        System.out.println(array); // [I@f6f4d33

        int[] arr1 = {0};
        System.out.println(arr1); // [I@23fc625e

        int[] arr2 = null; // null 大写是错的
        // 不知道初始化什么的时候就初始化为 null
        System.out.println(arr2); // null

        int[] arr3;
        // System.out.println(arr3); // 报错 当一个引用没有初始化就会报错
    }

    // 数组的遍历
    static void main5() {
        int[] array = new int[5];
        array = new int[]{1, 2, 3, 4, 5};
        for (int i = 0; i < array.length; i++) {
            System.out.print(array[i] + " ");
        }
        System.out.println();
        // for each 循环 和 cpp 的范围 for 一样的道理
        for (int x : array) {
            System.out.print(x + " ");
        }
        System.out.println("=====借助工具=====");
        String ret = Arrays.toString(array); // Java 官方帮忙写的代码
        System.out.println(ret); // [1, 2, 3, 4, 5]
        System.out.println(Arrays.toString(array)); // [1, 2, 3, 4, 5]
    }

    // 倘若没有初始化 那么除了 boolean 数组是 false 外其他的值都默认为 0
    static void main4() {
        int[] array = new int[5];
        array = new int[]{1, 2, 3, 4, 5};

        int[] array1;
        array1 = new int[]{1, 2, 3, 4, 5};

        int[] array2;
        array2 = new int[5];

        int[] array3;
        array3 = new int[]{1, 2, 3};
        // array3 = {1,2,3,4,5}; // error
        // 未初始化的不允许打印输出
        // System.out.println(array3[3]);
        // System.out.println("" + array3[0] + array3[1] + array3[2] + "" + array3[3]);
    }

    static void main3() {
        int[] array1 = {1, 2, 3, 4, 5}; // 相当于是下面那一种的简写
        int[] array2 = new int[]{1, 2, 3, 4, 5};
        int arr[] = {1, 2, 3, 4, 5}; // 合法但不合理 C/C++风格要改过来
        // int[5] array2 = {1, 2, 3, 4, 5}; 报错
        // int[] array3 = new int[5]{1, 2, 3, 4, 5}; 报错的
        // [] 只有在访问数组元素的时候才可以加数字 其他时候都是不加的
    }

    static void main2() {
        int[] array = new int[5];
        int ret1 = array[0];
        int ret2 = array[4];
        // int ret3 = array[5]; // 报错
        System.out.println(ret1); // 0
        System.out.println(ret2); // 0
        array[3] = 99;
        System.out.println(array[3]); // 99
    }

    static void main1() {
        // 动态初始化
        int[] array1 = new int[5]; // 基本格式是这样的
        double[] array2 = new double[6];
        String[] array3 = new String[7];
    }
}
