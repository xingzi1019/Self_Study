package protect;

public class TestBase {
    protected int a = 100; // 子能通过当前子类对象的引用才能进行访问
    // 可以把 protected理解为“家庭内部财产”
    // 在同一个包里（同一个家庭）：大家都能用
    // 在不同包里（不同家庭）：只有儿子（子类）可以用自己的身份用，不能直接拿父亲（父类）的身份证去办事
    public void Test() {
        System.out.println(a);
    }
}
