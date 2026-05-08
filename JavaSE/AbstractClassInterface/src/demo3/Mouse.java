package demo3;

public class Mouse implements IUSB {
    @Override
    // 这个 public 必须要写 不能不写 因为访问修饰限定符得 >= 父类
    public void openDevice() {
        System.out.println("打开鼠标");
    }

    public void click() {
        System.out.println("点击鼠标");
    }

    @Override
    public void closeDevice() {
        System.out.println("关闭鼠标");
    }

    @Override
    public void test() {
        System.out.println("我是 Mouse 重写的 test 方法");
    }
}
