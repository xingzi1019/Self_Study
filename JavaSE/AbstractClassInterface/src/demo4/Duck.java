package demo4;

public class Duck extends Animal implements IRunning, ISwimming, IFlying {
    public Duck(String name, int age) {
        super(name, age);
    }

    @Override
    public void running() {
        System.out.println(this.name + " 正在用两条腿在跑...");
    }

    @Override
    public void swimming() {
        System.out.println(this.name + " 正在水上游泳...");
    }

    @Override
    public void flying() {
        System.out.println(this.name + " 正在用翅膀飞");
    }

    @Override
    public void eat() {
        System.out.println(this.name + " 正在吃鸭粮...");
    }
}
