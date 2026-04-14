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
         * float
         * double
         * char
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

        System.out.println(Long.MAX_VALUE); //  922 3372 0368 5477 5807
        System.out.println(Long.MIN_VALUE); // -922 3372 0368 5477 5808
        long l = 10;
        //long ll = 10l; // 为了区分int和long类型，一般建议：long类型变量的初始值之后加L或者l
        // 小 l 合法但不合理
        long lll = 10L; // 一般更加偏好大写L，因为小写l与1不好区分
    }
}
// 一些 IDEA 的输入技巧 提高我们写代码的效率
// maina + 回车 或者 psvma + 回车也可以直接打出 public static void main(String[] argc)
// sout + 回车 可以直接打出 System.out.println();
// a.sout + 回车 可以直接打出 System.out.println(a);
