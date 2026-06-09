package demo1;

public class Test {
    public static void main(String[] args) {
        Animal animal = new Animal();
        Cat cat = new Cat();
        Animal ac = new Cat();
        animal.move();
        cat.move();
        cat.mew();
        ac.move();
        // ac.mew(); // error 父类引用不能调用子类方法
    }
}
