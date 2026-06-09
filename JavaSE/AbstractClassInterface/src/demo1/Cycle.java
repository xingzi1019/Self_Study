package demo1;

public class Cycle extends Shape{
    // Alt Shift Enter 直接写
    @Override
    public void draw() {
        System.out.println("画一个圆圈...");
    }
    /* 父类的抽象方法子类必须要全部重写 不然会报错
    @Override
    public void draw() {
        System.out.println("画一个圆圈...");
    }*/
}
