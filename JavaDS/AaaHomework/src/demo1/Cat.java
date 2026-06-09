package demo1;

public class Cat extends Animal{
    public Cat() {

    }

    @Override
    public void move() {
        System.out.println("cat");
    }
    public void mew() {
        System.out.println("miao");
    }
}
