package demo1;
// 继承是共性的抽取 抽取出来之后可以提高代码的复用性
// 注意：
// 1. 子类会将父类中的成员变量或者成员方法继承到子类中
// 2. 子类继承父类之后，必须要新添加自己特有的成员，体现出与基类的不同，否则就没有必要继承了
public class Test {
    public static void main() {
        Dog dog = new Dog();
        dog.name = "旺财";
        dog.age = 2;
        dog.eat();

        Cat cat = new Cat();
        cat.name = "咪咪";
        cat.age = 1;
        cat.eat();
    }
}
