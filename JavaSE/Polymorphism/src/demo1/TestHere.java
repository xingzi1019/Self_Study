// 重写方法不允许抛出比被重写方法更广泛的检查异常
package demo1;

// 在Java中要实现多态，必须要满足如下几个条件，缺一不可：
// 1. 必须在继承体系下
// 2. 子类必须要对父类中方法进行重写
// 3. 通过父类的引用调用重写的方法
// 多态体现：在代码运行时，当传递不同类对象时，会调用对应类中的方法
public class TestHere {
    // 向上转型
    // 实际就是创建一个子类对象，将其当成父类对象来使用
    // 父类引用 引用了子类对象
    // 有三种情况可以触发
    // 1.直接赋值  main2 demo1.Animal animal = new demo1.Dog("旺财", 2);
    // 2.参数的传递 main3
    // 3.返回值
    // 向上转型的优点：让代码实现更简单灵活
    // 向上转型的缺陷：不能调用到子类特有的方法
    public static void main() {
        Animal animal = new Dog("旺财", 2);
        if (animal instanceof Dog) {
            Dog dog = (Dog) animal; // 向下转型
            dog.bark();
        }
        System.out.println("==========");
        if (animal instanceof Cat) { // 理解为 animal 是不是 Cat 的引用对象或者实例
            Cat cat = (Cat) animal; // 这个时候的 animal 已经是 Dog 类型 所以都是子类没法强转
            cat.mew();
        } else {
            System.out.println("animal not instanceof Cat");
        }
        // 向下转型
        // 把父类类型给到了子类类型
        // 不安全 因此引进关键字 instanceof
        // 把持向下转型有 if instances else 的这种习惯
    }

    public static void eattng(Animal animal) {
        animal.eat(); // 重写了 就调用子类的 没有重写就调用父类自己的
        // 这一块就是多态
    }

    public static void main5() {
        Dog dog = new Dog("旺财", 2);
        eattng(dog); // 旺财正在吃狗粮...
        Cat cat = new Cat("咪咪", 1);
        eattng(cat); // 咪咪正在吃猫粮...
    }
    // 做个总结
    // 同一个引用 同一个方法
    // 引用的对象不一样 调用同一个方法
    // 所表现的行为不一样 我们把这种思想就称之为多态
    // 1.向上转型 2.发生重写 3.动态绑定

    public static void func(Animal animal) {

    }

    public static Animal func2() {
        Dog dog = new Dog("旺财", 2);
        return dog; // 返回值触发向上转型
        // return new demo1.Dog("旺财", 2); // 这个也是 只是自己没见过这中写法
    }

    public static void main4() {
        Animal animal = new Dog("旺财", 2);
        System.out.println(animal.name); // 旺财
        // animal.color(); // 报错
        // animal.bark(); // 报错 只能调用 animal 引用所属的类的成员
        animal.eat(); // 旺财正在吃狗粮...     // 奇怪的是 这么为什么调用了 demo1.Dog 的 eat
        // 这就是动态绑定(运行时绑定)
        // 父类引用子类对象 通过父类引用 调用了这个重写的方法
    }

    public static void main3() {
        System.out.println("Out");
        Dog dog = new Dog("旺财", 2);
        func(dog); // 参数的传递带来的向上转型
        Cat cat = new Cat("咪咪", 1);
        func(cat);
        func(new Dog("小黑", 1)); // 这也行
    }

    public static void main2() {
        /*demo1.Dog dog = new demo1.Dog("旺财", 2);
        demo1.Animal animal = dog;*/
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
// 静态绑定：也称为前期绑定(早绑定)
// 即在编译时 根据用户所传递实参类型就确定了具体调用那个方法。典型代表函数重载。
// 动态绑定：也称为后期绑定(晚绑定)
// 即在编译时，不能确定方法的行为，需要等到程序运行时，才能够确定具体调用那个类的方法

// 向下转型

// 多态的优缺点
// 能够降低代码的 "圈复杂度", 避免使用大量的 if - else
// 可拓展功能更强