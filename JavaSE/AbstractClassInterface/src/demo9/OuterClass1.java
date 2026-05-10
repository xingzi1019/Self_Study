package demo9;

// 可以将一个类定义在另一个类或者一个方法的内部
// 前者称为内部类，后者称为外部类
// 内部类有实例内部类 静态内部类 局部内部类
public class OuterClass1 {
    public int data1 = 1;
    private int data2 = 2;
    public static final int data3 = 3;

    // 实例内部类
    class InnerClass {
        public int data1 = 111111;
        public int data4 = 4;
        private int data5 = 5;
        public static final int data6 = 6;

        // 实例内部类是可以访问外部类的成员的
        public void testInner() {
            // 方法名和外部类同名也是可以的
            System.out.println("testInner方法被执行了...");
            System.out.println(data1);      // 111111
            System.out.println(this.data1); // 111111
            // 优先使用局部变量 那么如何访问外部类的同名成员呢
            System.out.println(data2);
            System.out.println(data3);
            System.out.println(data4);
            System.out.println(data5);
            System.out.println(data6);
            // 法一:
            OuterClass1 outerClass1 = new OuterClass1();
            System.out.println(outerClass1.data1); // 1
            // 法二:
            System.out.println(OuterClass1.this.data1); // 1
            // System.out.println(OuterClass1.data1); // 不加 this 是错的
        }
        // 不难看出: 实例内部类是包含了外部类的 this 引用的
    }

    public void test() {
        System.out.println("test方法执行了...");
    }
}
