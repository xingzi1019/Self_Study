package review;

public class Girl extends Student {
    public int beauty;

    {
        System.out.println("Girl的实例代码块");
    }

    static {
        System.out.println("Girl的静态代码块");
    }

    public Girl() {
        super();
        System.out.println("调用了不带参数的Girl");
    }

    public Girl(int id, String name, int age, String gender, int beauty) {
        super(id, name, age, gender);
        this.beauty = beauty;
        System.out.println("调用了带5个参数的Girl");
    }

    public void makeUp() {
        System.out.println(name + " 正在化妆");
    }

    public String toString() {
        return name + " girl 的 toString 被调用了";
    }
}
