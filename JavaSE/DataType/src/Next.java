public class Next {
    public static void main(String[] argc) {
        // 类型转换: 隐式类型转换 强制类型转换
//        int a = 10;
//        long b = 100L;
//        b = a; // 可以通过编译 隐式类型转换
//        a = (int)b; // 编译失败int a = 10;
//        // 其实和 c/c++ 差不多

//        int a = 10;
//        long b = 100L;
//        b = a; // int-->long，数据范围由小到大，隐式转换
//        a = (int)b; // long-->int, 数据范围由大到小，需要强转，否则编译失败
//        float f = 3.14F;
//        double d = 5.12;
//        d = f; // float-->double，数据范围由小到大，隐式转换
//        f = (float)d; // double-->float, 数据范围由大到小，需要强转，否则编译失败
//        byte b1 = 100; // 100默认为int，没有超过byte范围，隐式转换
//        byte b2 = (byte)257; // 257默认为int，超过byte范围，需要显示转换，否则报错
//        注意事项：
//        1. 不同数字类型的变量之间赋值, 表示范围更小的类型能隐式转换成范围较大的类型
//        2. 如果需要把范围大的类型赋值给范围小的, 需要强制类型转换, 但是可能精度丢失
//        3. 将一个字面值常量进行赋值的时候, Java 会自动针对数字范围进行检查
//        4. 强制类型转换一定能成功，不相干的类型不能互相转换
        // 所有小于四个字节的数据 在运算时会提升为4个字节
//        byte a = 10;
//        byte b = 20;
//        //byte c = a + b; // 编译报错
//        byte c = (byte)(a+b); // 编译通过
//        System.out.println(c);
        test();
    }
    // String 类型
    public static void test() {
        String str1 = "hello";
        String str2 = "world";
        String str3 = str1 + str2; // 字符串拼接 和 cpp 一样
        System.out.println(str1 + str2);
        System.out.println(str3);
        int a = 10;
        int b = 20;
        System.out.println("a+b=" + a + b); // a+b=1020
        System.out.println("a+b=" + (a + b)); // a+b=30
        System.out.println(a + b + "=a+b"); // 30=a+b
        // 因此可以看出 Java 的加法是有一定规则的
        // 第一个 "a+b="是字符串，+从左到右运算，遇到字符串时后续的 +是字符串连接
        // 第二个 括号优先级高，先计算 a + b得到数值 30，再进行字符串连接
        // 第三个 从左到右，先计算 a + b，因为一开始是数值相加，得到 30，然后与字符串 "=a+b"拼接
        System.out.println("自动换行......"); // print 后面的 ln 是换行的意思 去掉就不会换行了
        System.out.print("不换行");
        System.out.printf("%s\n", "哈哈");

        //int 转化成 String
        int num = 10;
        // 法1
        String str11 = num + "";
        // 法2
        String str22 = String.valueOf(num); // 通过调用这个方法 可以把任何类型都转化成字符串类型

        //String 转 int
        String str = "100";
        int num2 = Integer.parseInt(str);

        String s = String.valueOf(19.9);
        System.out.println(s);

        String s1 = "100";
        String s2 = "200";
        int nums1 = Integer.parseInt(s1); // 这个 parseInt 方法是将 String 转换成 int
        long nums2 = Long.parseLong(s2);
        System.out.println(nums1 + 1);
        System.out.println(nums2 + 1);

        String s3 = "321.21";
        double nums3 = Double.parseDouble(s3);
        System.out.println(nums3 + 0.1);
    }
}
