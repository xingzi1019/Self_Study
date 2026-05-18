package demosingleton;
// 饿汉式
public class Singleton {
    // 因为不管几个对象 static 修饰的只有一个
    private static Singleton instance = new Singleton();

    private Singleton() {

    }

    public static Singleton getInstance() {
        return instance;
    }
}
