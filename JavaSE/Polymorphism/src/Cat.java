public class Cat extends Animal {
    public Cat(String name, int age) {
        super(name, age);
    }

    public void mew() {
        System.out.println(this.name + "正在喵喵叫...");
    }
    // ctrl + o 直接生成

    @Override
    public void eat() {
        System.out.println(this.name+"正在吃猫粮...");
    }
}
