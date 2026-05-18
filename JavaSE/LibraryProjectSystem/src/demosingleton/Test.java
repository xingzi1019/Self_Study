package demosingleton;

public class Test {
    // 单例模式
    public static void main() {
        Singleton2 instance = Singleton2.getInstance();
        Singleton2 singleton2 = Singleton2.getInstance();
    }

    public static void main1() {
        // Singleton singleton1 = new Singleton();
        // Singleton singleton2 = new Singleton();
        Singleton instance1 = Singleton.getInstance();
        Singleton instance2 = Singleton.getInstance();
        System.out.println(instance1 == instance2); // true
        // 所以上面这两个拿的是同一个对象
    }
}
