package demo2;

import java.math.BigDecimal;
import java.math.MathContext;
import java.math.RoundingMode;

// BigDecimal类
// BigDecimal是Java在java.math包中提供的 线程安全 的API类 ⽤来对超过16位有效位的数进⾏精确的运算
// 双精度浮点型变量double可以处理16位有效数 但在实际应⽤中 可能需要对更⼤或者更⼩的数进⾏运算和处理
public class Test {
    //
    public static void main() {
        // 这样就是精确的
        BigDecimal a = new BigDecimal("1.35");
        BigDecimal b = new BigDecimal("3.22");
        // + 加法
        BigDecimal addRet = a.add(b); // 4.57
        System.out.println(addRet);
        // - 减法
        BigDecimal subRet = a.subtract(b);
        System.out.println(subRet); // -1.87
        // * 乘法
        BigDecimal mulRet = a.multiply(b);
        System.out.println(mulRet); // 4.3470
        // / 除法
        // BigDecimal divRet = a.divide(b); // 因为这个除不尽
        // System.out.println(divRet); // 除不尽所以抛出算术异常 ArithmeticException
        // 下面这个除得尽就不会抛出这个异常了
        /*a = new BigDecimal("5.2");
        b = new BigDecimal("2.6");
        BigDecimal divRet = a.divide(b);
        System.out.println(divRet); // 2*/
        /*BigDecimal divRet = a.divide(b,4, RoundingMode.HALF_UP); // 这个要导包
        System.out.println(divRet); // 0.4193*/
        // 这个4表示除法运算结果要保留4位小数
        // RoundingMode.HALF_UP 表示四舍五入
        BigDecimal divRet = a.divide(b, new MathContext(4,RoundingMode.HALF_UP)); // 记得导包
        System.out.println(divRet); // 0.4193
    }


    public static void main2() {
        // 下面这一行给的时候就不是精确的 0.1 和 0.2
        System.out.println(0.1 + 0.2); // 0.30000000000000004
        BigDecimal bigDecimal1 = new BigDecimal("0.1");
        BigDecimal bigDecimal2 = new BigDecimal("0.2");

        BigDecimal ret = bigDecimal1.add(bigDecimal2);
        System.out.println(ret); // 0.3
    }

    public static void main1() {
        BigDecimal bigDecimal1 = new BigDecimal(1.99);
        System.out.println(bigDecimal1); // 1.9899999999999999911182158029987476766109466552734375
        BigDecimal bigDecimal2 = new BigDecimal("1.99");
        System.out.println(bigDecimal2); // 1.99
        // 所以更推荐用字符串的形式来创建对象
    }
}
