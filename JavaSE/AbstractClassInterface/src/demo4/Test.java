package demo4;

public class Test {
    public static void eat(Animal animal) {
        animal.eat();
    }

    public static void run(IRunning iRunning) {
        iRunning.running();
    }

    public static void swim(ISwimming iSwimming) {
        iSwimming.swimming();
    }

    public static void fly(IFlying iFlying) {
        iFlying.flying();
    }

    public static void main() {
        /*swim(new Dog("旺财", 2));
        swim(new Duck("YY", 3));
        fly(new Duck("YY", 3));*/
        Dog dog = new Dog("小白", 2);
        dog.eat();
        dog.running();
        dog.swimming();
        Animal animal1 = new Dog("旺财", 1);
        animal1.eat();
        // animal1. 点不出来 running 那些
        // 得向下转型
        /*if (animal1 instanceof Dog) {
            // ((Dog) animal1).swimming(); // 旺财 正在狗刨...
            // ((Dog) animal1).running();  // 旺财 正在用四条腿在跑...
            Dog d = (Dog) animal1;
            d.running();  // 旺财 正在用四条腿在跑...
            d.swimming(); // 旺财 正在狗刨...
        }*/
        if (animal1 instanceof Dog d) {
            d.swimming(); // 旺财 正在狗刨...
            d.running();  // 旺财 正在用四条腿在跑...
        }
        Animal animal2 = new Duck("小雅", 2);
        if (animal2 instanceof Duck duck) {
            duck.flying(); // 小雅 正在用翅膀飞
        }
    }
}
