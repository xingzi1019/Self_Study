package first;

// 类名用大驼峰命名
public class WashMachine {
    public String brand;  // 品牌
    public String type;   // 型号
    public double weight; // 重量
    public double length; // 长
    public double width;  // 宽
    public double height; // 高
    public String color;  // 颜色

    public void washClothes() { // 洗衣服
        System.out.println("洗衣功能");
    }

    public void dryClothes() { // 脱水
        System.out.println("脱水功能");
    }

    public void setTime() { // 定时
        System.out.println("定时功能");
    }
}