package demo5;
// 接口的继承
public class Dog implements IAmphibious{
    public String name;
    public int age;

    public Dog(String name, int age) {
        this.name = name;
        this.age = age;
    }

    @Override
    public void test() {
        System.out.println("狗哥的测试...");
    }

    @Override
    public void running() {
        System.out.println("狗哥"+this.name+"在跑...");
    }

    @Override
    public void swimming() {

    }
}
