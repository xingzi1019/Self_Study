package demo1;

// 本章对比前几章的多态 接口 等等相对比较简单
// 本章内容起始有一部分是和 C++ 当初学 string 一样的
public class Test {
    // inter 方法
    public static void main() {
        char[] ch = new char[]{'a', 'b', 'c'};
        String s1 = new String(ch);
        String s2 = "abc";
        System.out.println(s1 == s2);      // false
        System.out.println(s1.equals(s2)); // true    内容一样
        // 不懂就看课件的内存图
    }

    // 去除字符串左右两边的空格
    public static void main13() {
        // trim
        // 移除
        // ' '  空格
        // '\n' 换行
        // '\t' 制表
        // '\r' 回车
        // '\f' 换页
        String str = "     hello  world  ";
        String ret = str.trim();
        System.out.println('[' + str + ']');    // [     hello  world  ]
        System.out.println('[' + ret + ']');    // [hello  world]
        str = "  \t   \f hello \n";
        System.out.println(('[' + str + ']'));  // 直接输出两行
        // [  	    hello
        // ]
        ret = str.trim();
        System.out.println('[' + ret + ']');    // [hello]
    }

    // 字符串截取
    public static void main12() {
        String str = "helloworld";
        System.out.println(str.substring(5)); // 从指定位置截取到结尾
        System.out.println(str.substring(0, 5));        // 截取部分内容 注意:下标5不截 [0,5) 左闭右开
        // Java 的很多代表范围的两个参数的方法都是左闭右开
        // world
        // hello
    }

    // 字符串替换
    public static void main11() {
        String str = "hello world hello bit";
        String[] result = str.split(" "); // 将 str 按空格进行切分
        for (String s : result) {
            System.out.println(s);
        }
        // hello
        // world
        // hello
        // bit
        result = str.split(" ", 2); // 按照空格分割 最多分为两组
        for (String s : result) {
            System.out.println(s);
        }
        // hello
        // world hello bit
        /*str = "192.168.1.1" ;
        result = str.split(".") ; // split 的参数类型也是正则表达式
        for(String s: result) {
            System.out.println(s);
        }*/
        // 没有任何输出 因为这个参数不管用
        str = "192.168.1.1";
        result = str.split("\\.");
        for (String s : result) {
            System.out.println(s);
        }    // 字符串的 \ 是转义字符 不管是否是正则表达式 和 C/C++ 一样的
        // 输出:
        // 192
        // 168
        // 1
        // 1

        // 其中第⼀个 \ 告诉编译器：“⼩伙⼦，我接下来要⽤⼀个特殊的字符表⽰法"
        // 第⼆个 \ 是我们实际想要在字符串中表⽰的那个反斜杠。”
        // 然后这个 \.   被传递给正则表达式引擎，在那⾥它被表⽰为⼀个字⾯上的点号

        // 注意事项:
        // 1. 字符"|","*","+"都得加上转义字符，前⾯加上 "\\" .
        // 同理上述⽰例的点号
        // 2. ⽽如果是 "\" ，那么就得写成 "\\\\" .
        //    正则表达式需要 \\ 来匹配⼀个反斜杠。
        //    在Java字符串中表⽰ \\ ，我们需要 \\\\ 。
        // 3. 如果⼀个字符串中有多个分隔符，可以⽤"|"作为连字符.
        //    | 在正则表达式中表⽰"或"，意味着匹配它左边或右边的表达式

        str = "name=zhangsan&age=18";
        result = str.split("=|&");
        for (String s : result) {
            System.out.println(s);
        }
        // name
        // zhangsan
        // age
        // 18

        // 多次拆分
        str = "name=zhangsan&age=18";
        result = str.split("&");
        for (int i = 0; i < result.length; i++) {
            String[] temp = result[i].split("=");
            System.out.println(temp[0] + " = " + temp[1]);
        }
        // name = zhangsan
        // age = 18
    }

    public static void main10() {
        // replaceAll
        // 把所有的都进行置换
        String str1 = "ababcabcdabcde";
        String ret = str1.replaceAll("ab", "ok");
        System.out.println(ret); // okokcokcdokcde
        ret = str1.replace("ab", "ok");
        System.out.println(ret); // okokcokcdokcde
        // replace - 替换字符或字面字符串
        // replaceAll - 使用正则表达式替换

        // replaceFirst
        // 把第一个字符串置换
        /*String str1 = "ababcabcdabcde";
        String ret = str1.replaceFirst("ab","ok");
        System.out.println(ret); // okabcabcdabcde*/

        // replace
        // 可以传字符 也可以传字符串
        /*String str1 = "ababcabcdabcde";
        String ret = str1.replace("ab", "xx");
        System.out.println(str1); // ababcabcdabcde
        System.out.println(ret);  // xxxxcxxcdxxcde
        ret = str1.replace('a', 'w');
        System.out.println(ret);  // wbwbcwbcdwbcde
        ret = str1.replace("a", "星子");
        System.out.println(ret);  // 星子b星子bc星子bcd星子bcde*/
        /*String ret = str1.replace('a','k'); // 把原来所有的字符 a 换成字符 k
        System.out.println(ret);  // kbkbckbcdkbcde
        // 是新的一个内存空间而不是原本的 所以原本的没有发生改变
        System.out.println(str1); // ababcabcdabcde */
    }

    // 格式化
    public static void main9() {
        String s = String.format("%d-%d-%d", 2026, 5, 14);
        System.out.println(s);  // 2026-5-14
    }

    // 字符串转数组
    public static void main8() {
        String s = "hello";
        // 字符串转数组
        char[] ch = s.toCharArray();
        for (int i = 0; i < ch.length; i++) {
            System.out.print(ch[i]);
            System.out.print(' ');
        }
        System.out.println();
        // 数组转字符串
        String s2 = new String(ch);
        System.out.println(s2);
    }

    // 转换大小写
    public static void main7() {
        String str = "hello";
        String ret = str.toUpperCase();
        System.out.println(str);            // hello
        System.out.println("ret = " + ret); // ret = HELLO
        ret = str.toLowerCase();            //
        System.out.println("ret = " + ret); // 换成小写
    }

    // 字符串转换
    public static void main6() {
        // 数字转字符串
        String s1 = String.valueOf(1234);
        String s2 = String.valueOf(12.34);
        String s3 = String.valueOf(true);
        // String s4 = String.valueOf(new Student("Hanmeimei", 18));
        System.out.println(s1);
        System.out.println(s2);
        System.out.println(s3);
        // System.out.println(s4);
        System.out.println("=================================");
        // 字符串转数字
        // 注意：Integer、Double等是Java中的包装类型，这个后⾯会讲到
        int data1 = Integer.parseInt("1234");
        double data2 = Double.parseDouble("12.34");
        System.out.println(data1);
        System.out.println(data2);
    }

    // 字符串查找
    public static void main5() {
        // indexOf
        // 从左往右依次查找 返回第一个要求找到的字符的下标
        String str2 = "abcbefcb";
        int index = str2.indexOf('b');
        System.out.println(index);  // 1
        index = str2.indexOf('w');
        System.out.println(index);  // -1  找不到就返回 -1
        index = str2.indexOf('b', 2); // indexOf 从指定位置开始查找
        // 重载了很多 这个意思是从下标 2(包括2) 开始查找
        System.out.println(index);  // 3
        index = str2.indexOf("cb"); // 依旧从左往右找
        System.out.println(index);  // 2 返回字符串 cb 的首个元素 c 的下标
        index = str2.indexOf("cb", 6);
        System.out.println(index);  // 6
        index = str2.lastIndexOf("cb"); // 默认是从最后一个位置往前找
        System.out.println(index);  // 6
        index = str2.lastIndexOf("cb", 2);
        System.out.println(index);  // 2


        // charAt
        // int类型参数 返回char类型 参数数值对应下标的字符
        String str1 = "abcdef";   // 下标从0开始
        char ch = str1.charAt(1); // 传 10 会抛出异常
        System.out.println(ch);   // b
    }

    // equalsIgnoreCase 忽略大小写比较
    public static void main4() {
        String s1 = "XingZi";
        String s2 = "xingzi";
        System.out.println(s1.equalsIgnoreCase(s2)); // true
        // 应用于验证码验证等等
    }

    // compareTo 方法 按照字典序进行比较
    public static void main3() {
        // compareTo 返回值是 int 类型
        String s1 = new String("abc");
        String s2 = new String("ac");
        String s3 = new String("abc");
        String s4 = new String("abcdef");
        System.out.println(s1.compareTo(s2));   // 不同输出字符差值-1
        System.out.println(s1.compareTo(s3));   // 相同输出 0
        System.out.println(s1.compareTo(s4));   // 前k个字符完全相同，输出长度差值 -3
    }

    // 字符串常量池和对内存的理解
    public static void main2() {
        // String 本身有重写来自 Object 类的 equals 方法
        String s1 = "xingzi";
        String s2 = "xingzi";
        System.out.println(s1 == s1);        // true
        System.out.println(s1.equals(s2));   // true
        // 虽然 s1 和 s2 的栈地址不一样 但是这两个引用指向了同一个堆空间(字符串常量池)
        // 当str2再次存储的时候
        // 先会检查字符串常量池当中是否存在"abc"常量如果存在 则不再重复存储
        System.out.println("==================");
        String s3 = new String("xingzi");
        String s4 = new String("yu");
        String s5 = new String("yu");
        System.out.println(s3 == s1);        // false
        // new 的 s3 在堆里 上面的 s1 在栈里 肯定不一样
        System.out.println(s3.equals(s1));   // true
        // 但是这两指向了同一块字符串常量池里的空间
        System.out.println(s4 == s5);        // false
        // 两个 new 出来的对象的地址肯定不一样
        System.out.println(s4.equals(s5));   // true
        // s4 和 s5 两个在堆的对象指向的还是同一个在堆的字符串常量池的 xingzi

        // 总结
        // == 比较的是两个引用是否相等
        // equals 比较的是内容是否相等    ---> 按字典序排序的
        // 还不理解就看一下课件的内存图
    }

    // 字符串构造
    public static void main1() {
        String s1 = "hello";
        System.out.println(s1);

        String s2 = new String("hello");
        System.out.println(s2);

        char[] array = {'h', 'e', 'l', 'l', 'o'};
        String s3 = new String(array);
        System.out.println(s3);

        byte[] bytes = {97, 98, 99, 100}; // 字符本质存的还是数值
        String s4 = new String(bytes);
        System.out.println(s4);
        // hello
        // hello
        // hello
        // abcd
    }
}
