package demo1;

// Shape 不能表示一个具体的图形
// 抽象类 abstract
// 多了一层编译器的提醒
// final 和 abstract 互不兼容
public abstract class Shape {
    public abstract void draw();
    /*{
        System.out.println("画一个图形...");
    }*/
    private void aa() {
        System.out.println("..00");
    }
}
