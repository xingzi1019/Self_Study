// 在Java中要实现多态，必须要满足如下几个条件，缺一不可：
// 1. 必须在继承体系下
// 2. 子类必须要对父类中方法进行重写
// 3. 通过父类的引用调用重写的方法
// 多态体现：在代码运行时，当传递不同类对象时，会调用对应类中的方法
public class Test {
    public static void main() {
        Dog dog = new Dog("旺财",2);
        dog.eat();
        dog.bark();
        System.out.println("================");
        Cat cat = new Cat("咪咪",1);
        cat.eat();
        cat.mew();
    }
}
// 多态
// 1.重写
// 2.向上转型
// 3.动态绑定
