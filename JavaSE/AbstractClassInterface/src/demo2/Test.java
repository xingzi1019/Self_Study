package demo2;

public class Test {
    public static void drawMap(IShape iShape) { // 有向上转型的发生
        iShape.draw();
    }

    public static void main() {
        drawMap(new Cycle());
        drawMap(new Flower());
        IShape[] iShapes = {new Cycle(), new Flower()};
        for (IShape shp : iShapes) {
            shp.draw();
        }
    }

    public static void main1() {
        // IShape iShape = new IShape(); // error
        // 接口不能被实例化
        IShape iShape = new Cycle(); // 这个类实现了当前的这个接口
        iShape.draw(); // 画一个圆圈...
        IShape iShape1 = new Flower();
        iShape1.draw(); // 画一朵花花...
    }
}
