// 在Java中要实现多态，必须要满足如下几个条件，缺一不可：
// 1. 必须在继承体系下
// 2. 子类必须要对父类中方法进行重写
// 3. 通过父类的引用调用重写的方法
// 多态体现：在代码运行时，当传递不同类对象时，会调用对应类中的方法
public class Test {
    // 向上转型
    // 父类引用 引用了子类对象
    // 有三种情况可以触发
    // 1.直接赋值  main2 Animal animal = new Dog("旺财", 2);
    // 2.参数的传递 main3
    // 3.返回值
    public static void func(Animal animal) {
    }

    public static Animal func2() {
        Dog dog = new Dog("旺财", 2);
        return  dog; // 返回值触发向上转型
    }

    public static void main() {
        Dog dog = new Dog("旺财", 2);
        func(dog); // 参数的传递带来的向上转型
        Cat cat = new Cat("咪咪", 1);
        func(cat);
        func(new Dog("小黑", 1)); // 这也行
    }

    public static void main2() {
        /*Dog dog = new Dog("旺财", 2);
        Animal animal = dog;*/
        // 上面两行和下面这行代码一样
        Animal animal = new Dog("旺财", 2);
        // 虽然类型不一样但是有继承关系
    }

    public static void main1() {
        Dog dog = new Dog("旺财", 2);
        dog.eat();
        dog.bark();
        System.out.println("================");
        Cat cat = new Cat("咪咪", 1);
        cat.eat();
        cat.mew();
    }
}
// 多态
// 1.重写
// 2.向上转型
// 3.动态绑定
