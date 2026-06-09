package demo1;
//class A {
//    public void test() throws NullPointerException{
//
//    }
//}
//class B extends A {
//    @Override
//    public void test() throws RuntimeException { // 重写方法不能抛出比被重写方法更广泛的检查异常
//        super.test();
//    }
//}
//public class Test {
//    public static void main() {
//
//    }
//}

// 抽象类不能被实例化
// 可以进行向上转型
// 可以定义和普通类一样的成员变量和成员方法
// 抽象类中可以定义抽象方法 -> 没有具体实现
// 如果这个类当中有一个抽象方法 那么这个类一定是抽象方法 反之不一定成立
public class Test {
    public static void drawMap(Shape shape) {
        shape.draw();
    }
    public static void main() {
        // Shape shape = new Shape(); // 不行
        Shape shape = new Cycle(); // 可以
        // 报错 一个类被 abstract 修饰后不能被实例化 不能去 new 它
        drawMap(shape);
        drawMap(new Cycle());
        drawMap(new Flower());
        drawMap(new Rect());
    }
}