package demo3;

public interface IUSB {
    // 接口不能有静态代码块
    // 接口不能有构造方法
    void openDevice();
    void closeDevice();
    // 兜了个底 子类没重写就调用这个 有重写就调用子类自己的
    default void test() {
        System.out.println("默认的 test 方法");
    }
}
//abstract class A implements IUSB {
//    abstract void closeDevice2();
//    // 抽象类可以实现接口 不重写接口的方法
//}
//class B extends A {
//    // 如果一个普通类实现了这个抽象类
//    // 那么所有没有被重写的 抽象方法
//    // 都需要被重写
//    @Override
//    void closeDevice2() {
//
//    }
//    @Override
//    public void openDevice() {
//
//    }
//    @Override
//    public void closeDevice() {
//
//    }
//}