public class NeiZhiTypes {
    //Java里面的常量和c/c++差不多 值得注意的是空指针是小写的null
    static int b; // 全局变量倒是不用初始化就能用 但是为了代码的规范性 还是建议初始化 如果不知道初始化成啥就初始化成 0
    //全局变量要加static符号 这个以后再解释
    static final int c = 0;
    public static void main(String[] argc) {
        //Java的内置类型和C++有所不同和增加
        //得益于Java的特性 同一类型无论在多少位的操作系统上 所占据的字节数都是一样的
        //不论是在16位系统还是32位系统，int都占用4个字节，long都占8个字节
        /*
         * byte   1个字节
         * short  2
         * int    4
         * long   8
         * float  4
         * double 8
         * char   2
         * boolean 没有明确占用的内存大小 和cpp一样的 多了 ean 而已
         */
        //第一个字节的第一个比特位表示符号 然后剩下的表示值
        System.out.println(Integer.MAX_VALUE); //   2 ^ 31 - 1
        System.out.println(Integer.MIN_VALUE); // - 2 ^ 31
        // Integer 是 int 的包装类
        //int aaa = 2147483648; // 这就是超出范围了 2 ^ 31 会报错
        //int b;
        System.out.println(b); // error 严格来说 Java 定义的变量 需要进行初始化
        System.out.println(c); // 默认初始化为 0

        long l = 10;
        //long ll = 10l; // 为了区分int和long类型，一般建议：long类型变量的初始值之后加L或者l
        // 小 l 合法但不合理
        long lll = 10L; // 一般更加偏好大写L，因为小写l与1不好区分
        System.out.println(Long.MAX_VALUE); //  922 3372 0368 5477 5807
        System.out.println(Long.MIN_VALUE); // -922 3372 0368 5477 5808
        System.out.println();

        System.out.println(Byte.MAX_VALUE);
        System.out.println(Byte.MIN_VALUE);
        System.out.println();

        System.out.println(Short.MAX_VALUE);
        System.out.println(Short.MIN_VALUE);
        System.out.println();

        double d = 12.5;
        System.out.println(d);
        System.out.println(Double.MAX_VALUE);
        System.out.println(Double.MIN_VALUE);

        double num = 1.1;
        System.out.println(num * num); // 输出1.21吗？
        // 输出 1.2100 0000 0000 0002

        float f = 12.5f; // 不加 f 或者 F 就会报错
        float ff = 12.5F;
        System.out.println(f); // 12.5
        System.out.println(ff); // 12.5
        System.out.println();

        char ch = 'a'; // 两个字节
        char ch2 = 97;
        System.out.println(ch); // Java 是 Unicode 编码的 但是比 ASCII 大得多 所以是包含 ASCII 的
        System.out.println(ch2); // 所以这里的 97 也表示 a
        System.out.println();
        // 已知: 一个汉字两个字节
        char ch3 = '星';
        System.out.println(ch3);
        System.out.println(Character.MAX_VALUE); // 无法打印
        System.out.println(Character.MIN_VALUE); // 无法打印
        System.out.println();

        // Java 的 boolean 只有 false 和 true
        // 不存在 0 和 非0 C++里面只是会警告 而 Java 直接报错
        // JVM 没有规定 boolean 占用字节数
        // Java虚拟机规范中，并没有明确规定boolean占几个字节，也没有专门用来处理boolean的字节码指令
        // 在Oracle的Java虚拟机实现中 Java编程语言中的布尔数组被编码为Java虚拟机字节数组 每个布尔元素使用8位
        boolean flag = true;
        boolean flag2 = false;
        boolean b1 = 1 < 2;
        boolean b2 = 1 > 2;
        if (b1) {
            System.out.println('1');
        }
        if (b2) {
            System.out.println('2');
        }
        // 输出 1
    }

}
// 一些 IDEA 的输入技巧 提高我们写代码的效率
// maina + 回车 或者 psvma + 回车也可以直接打出 public static void main(String[] argc)
// sout + 回车 可以直接打出 System.out.println();
// a.sout + 回车 可以直接打出 System.out.println(a);
