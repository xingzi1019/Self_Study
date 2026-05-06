package demo2;

public class Test {
    public static void drawShape1() {
        Rect rect = new Rect();
        Circle circle = new Circle();
        Flower flower = new Flower();
        String[] shapes = {"cycle", "rect", "cycle", "rect", "flower"};
        for (String shape : shapes) {
            if (shape.equals("cycle")) {
                circle.draw();
            } else if (shape.equals("rect")) {
                rect.draw();
            } else if (shape.equals("flower")) {
                flower.draw();
            }
        }
    }

    public static void drawShape2() {
        Rect rect = new Rect();
        Circle circle = new Circle();
        Flower flower = new Flower();
        // 向上转型
        Shape[] shapes = {rect, circle, rect, circle, flower};
        // 和下面这种一样 也是发生了向上转型
        Shape[] shapes2 = new Shape[3];
        shapes2[0] = new Flower();
        shapes2[1] = new Rect();
        shapes2[2] = new Circle();
    }

    public static void drawShape() {
        // 向上转型
        Shape[] shapes = {
                new Rect(), new Circle(), new Rect(), new Circle(), new Flower()
        };
        for (Shape sh : shapes) {
            sh.draw();
        }
    }

    public static void main(String[] args) {
        /*Test test = new Test();
        test.drawShape();*/
        drawShape(); // 本类的静态方法 如果不是静态的话 那就需要实例化
    }
}
