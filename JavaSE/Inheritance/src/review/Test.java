package review;

public class Test {
    public Test() {
        System.out.println("调用了Test无参构造");
    }

    public static void main() {
        Girl girl1 = new Girl();
        System.out.println(girl1);
        girl1.makeUp();
        girl1.eat();
        girl1.doClass();
        System.out.println();

        Girl girl2 = new Girl(27, "yuting", 19, "woman", 100);
        System.out.println(girl2);
        girl2.makeUp();
        girl2.eat();
        girl2.doClass();
        System.out.println(girl2.id + " "
                + girl2.name + " " + girl2.age + " "
                + girl2.gender + " " + girl2.beauty);
        System.out.println();

        Boy boy1 = new Boy();
        System.out.println(boy1);
        boy1.plagGame();
        boy1.eat();
        boy1.doClass();
        System.out.println();

        Boy boy2 = new Boy(37, "xingzi", 19, "man", 9);
        System.out.println(boy2);
        boy2.plagGame();
        boy2.eat();
        boy2.doClass();
        System.out.println(boy2.id + " "
                + boy2.name + " " + boy2.age + " "
                + boy2.gender + " " + boy2.strength);
        System.out.println();
    }
}
