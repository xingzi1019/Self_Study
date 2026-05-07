package demo2;

// 一般命名 I 开头
// interface 代替 class
public interface IShape {
    // public int size; // error
    // public void test() { } // error
    // int SIZE = 10; // 接口的成员变量默认是 public static final 这样修饰的

    // void test();    // 接口的成员方法默认是 public abstract
    // 因为默认这样 所以为了简约 我们就直接不写了
    void draw();
    // 要具体实现的只能被 static 或者 default 修饰
    public static void test() {

    }
    public default void test2() {
        // 这个叫默认方法
    }
}
