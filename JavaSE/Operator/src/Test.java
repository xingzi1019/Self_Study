
public class Test {
    public static void main() {
        //表达式1 ? 表达式2 : 表达式3
        //表达式1得是boolean类型
        int a = 10;
        int b = 20;
        int max = a > b ? a : b;
        boolean flg = true == false ? true == true ? false : true : false;
        //                         //                             //
        System.out.println(flg);
    }

    static void main9() {
        // << >>  >>>(无符号右移)  不存在 <<< 这个符号
        // <<  左侧不要 右边补0
        // >>  右侧不要 左边补符号位
        // >>> 右侧不要 左边补0

    }

    static void main8(String[] args) {
        short a = 128;
        byte b = (byte) a;
        // [-128,127]
        System.out.println(a); // 128  a是short类型
        System.out.println(b); // -128
        // 钟表
        //    -1 0
        //
        //  -128 127
    }

    public static void main7(String[] args) {
        // & | ^ ~
    }

    public static void main6(String[] args) {
        System.out.println(10 > 20 && 10 / 0 == 0); // 打印 false 没报错
        System.out.println(10 < 20 || 10 / 0 == 0); // 打印 true  没报错
        //& 和 | 如果表达式结果为 boolean 时, 也表示逻辑运算. 但与 && || 相比, 它们不支持短路求值
        System.out.println(10 > 20 & 10 / 0 == 0); // 程序抛出异常
        System.out.println(10 < 20 | 10 / 0 == 0); // 程序抛出异常
    }

    public static void main5(String[] args) {
        int a = 10;
        //boolean flg = !a; // 报错 和 !结合的表达式 只能是 boolean 表达式
        boolean flg = !(a == 10);
        System.out.println(flg);
    }

    public static void main4(String[] args) {
        int a = 1;
        int b = 2;
        // 运算结果都是 boolean 类型
        System.out.println(a == 1 && b == 2); // 左为真 且 右为真 则结果为真
        System.out.println(a == 1 && b > 100); // 左为真 但 右为假 则结果为假
        System.out.println(a > 100 && b == 2); // 左为假 但 右为真 则结果为假
        System.out.println(a > 100 && b > 100); // 左为假 且 右为假 则结果为假
    }

    public static void main3(String[] args) {
        int a = 10;
        int b = 20;
        // 注意：在Java中 = 表示赋值，要与数学中的含义区分
        // 在Java中 == 表示相等
        System.out.println(a == b); // false
        System.out.println(a != b); // true
        System.out.println(a < b); // true
        System.out.println(a > b); // false
        System.out.println(a <= b); // true
        System.out.println(a >= b); // false
        // 其计算结果只有 true 和 false
    }

    public static void main2(String[] args) {
        int a = 1;
        a += 2;
        System.out.println(a); // 3
        /*int num = 10;
        num += 12.5;
        // 上面这行代码相当于是 num = (int)(num + 12.5)
        System.out.println(num); // 22 被当作整数*/

        //增量运算符在计算的时候，可以不进行强制类型转换
        /*int num = 10;
        num = num + 12.5; // 报错
        System.out.println(num);*/
        double aa = 10.4;
        int bb = 10;
        bb += aa; //不会报错
        // bb = bb + aa; //此时会编译报错，等号右边被提升为了double类型
    }

    public static void main1(String[] args) {
        int a = 20;
        int b = 10;
        // + - * / 都一样的
        System.out.println(a + b); // 30
        System.out.println(a - b); // 10
        System.out.println(a * b); // 200
        System.out.println(a / b); // 2
        System.out.println(a % b); // 0 --->模运算相当于数学中除法的余数
        System.out.println();
        // 除号 /
        System.out.println(0 / 2); // 0
        //System.out.println(2 / 0); // 报错 除数 / 不能为 0
        System.out.println(1 / 2);
        System.out.println(1 / 0.5); // 2.0
        System.out.println(-11.5 / 2); // -5.75
        System.out.println(-11.5 / 2.0); // -5.75
        System.out.println();
        // 重点看看 % C是不允许 % 两边是浮点数的
        // Java - 结果符号与被除数相同
        System.out.println(7 % 3);     // 1
        System.out.println(-7 % 3);    // -1
        System.out.println(7 % -3);    // 1
        System.out.println(-7 % -3);   // -1
        System.out.println();
        // 支持浮点数取模运算 C/C++ 不支持
        // Java - 支持浮点数取余
        System.out.println(7.5 % 2);    // 1.5
        System.out.println(7.5 % 2.5);  // 0.0
        System.out.println(7.5 % 2.0);  // 1.5
        System.out.println(-7.5 % 3.0); // -1.5
        System.out.println();
    }
}


