package demo1;

import java.util.SplittableRandom;

public class Test {

    // 字符串构造
    public static void main() {
        String s1 = "xingzi";
        String s2 = "xingzi";
        System.out.println(s1 == s1);
        System.out.println(s1.equals(s2));
    }

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
