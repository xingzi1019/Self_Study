package review;

public class Boy extends Student {
    public int strength;

    {
        System.out.println("Boy的实例代码块");
    }

    static {
        System.out.println("Boy的静态代码块");
    }

    public Boy() {
        super();
        System.out.println("调用了不带参数的Boy");
    }

    public Boy(int id, String name, int age, String gender, int strength) {
        super(id, name, age, gender);
        this.strength = strength;
        System.out.println("调用了带5个参数的Boy");
    }

    public void plagGame() {
        System.out.println(this.name + " 正在大游戏");
    }

    public String toString() {
        return super.name + " boy的 toString 被调用了";
    }
}
