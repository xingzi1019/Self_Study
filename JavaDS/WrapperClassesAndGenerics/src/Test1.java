public class Test1 {
    public static void main(String[] args) {
        Integer a = 127;
        Integer b = 127;

        Integer c = 128;
        Integer d = 128;
        // 是jvm搞的 [-128,127] 被 jvm 自动缓存
        System.out.println(a == b); // true
        System.out.println(c == d); // false
        Integer e = -128;
        Integer f = -128;
        Integer g = -129;
        Integer h = -129;
        System.out.println(e == f); // true
        System.out.println(g == h); // false
    }

    public static void main2(String[] args) {
        int i = 10;
        // 自动装箱
        Integer ii = i;
        Integer ij = (Integer) i;
        // 自动拆箱
        int j = ii;
        int k = (int) ii;

        System.out.println(i);
    }

    public static void main1(String[] args) {
        int i = 10;
        // 装箱 新建一个Integer 类型对象，将i 的值放入对象的某个属性中
        Integer ii = Integer.valueOf(i);
        Integer ij = new Integer(i); // Java 9 后开始废弃 尽管报错但是还是可以编译成功和运行
        // 拆箱 将Integer 对象中的值取出，放到一个基本数据类型中
        int j = ii.intValue();
    }
}
