package demo2;
// 接口和类的关系可以用 implements 来进行使用
public class Cycle implements IShape{
    @Override
    public void draw() {
        System.out.println("画一个圆圈...");
    }
    /*@Override
    public void test2() {
        IShape.super.test2();
    }*/
}
