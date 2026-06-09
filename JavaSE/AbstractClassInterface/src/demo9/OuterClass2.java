package demo9;

public class OuterClass2 {
    public int data1 = 1;
    private int data2 = 2;
    public static final int data3 = 3;

    // 静态内部类
    static class InnerClass { // 可以和其他类的内部类同名
        // public int data1 = 111111;
        public int data4 = 4;
        private int data5 = 5;
        public static final int data6 = 6;

        public void testInner() {
            System.out.println("testInner方法执行了...");
            OuterClass2 outerClass2 = new OuterClass2();
            // System.out.println(OuterClass2.this.data1); // error
            // System.out.println(OuterClass2.this.data2); // error
            // System.out.println(data2); // error 静态不能调用实例
            // System.out.println(data1); // error 静态不能调用实例
            System.out.println(outerClass2.data1);
            System.out.println(outerClass2.data2);
            System.out.println(data3);
            System.out.println(data4);
            System.out.println(data5);
            System.out.println(data6);
        }
    }

    public static void staticTest() {
        // 你静态肯定不能调用实例的
        // System.out.println(data1); // error
        // System.out.println(data2); // error
        OuterClass2 outerClass2 = new OuterClass2();
        System.out.println(outerClass2.data1);
        System.out.println(outerClass2.data2);
        System.out.println(data3);
    }

    public void test() {
        System.out.println("test方法执行了...");
    }

    public void test2() {
        int a = 10; // 不能用 public 等修饰 但可以用 final
        // 局部变量的作用域和可见性范围决定了它不需要访问修饰符
        // 局部内部类
        // 定义在方法内部的类 只能在方法内部使用
        // 不能被 public private protected static 修饰
        // 可以被 abstract
        class Inner {
            public int data;

            public void func() {
                System.out.println("func方法执行了...");
            }
        }

        abstract class Inner2 extends Inner {

        }

        Inner inner = new Inner();
        inner.func();
    }
}
