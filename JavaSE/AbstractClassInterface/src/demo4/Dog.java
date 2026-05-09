package demo4;

public class Dog extends Animal implements ISwimming, IRunning {
    public Dog(String name, int age) {
        super(name, age);
    }

    @Override
    public void running() {
        System.out.println(this.name + " 正在用四条腿在跑...");
    }

    @Override
    public void swimming() {
        System.out.println(this.name + " 正在狗刨...");
    }

    @Override
    public void eat() {
        System.out.println(this.name + " 正在吃狗粮...");
    }
}
