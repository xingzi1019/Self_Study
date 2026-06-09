package demo22;
import protect.TestBase;
public class Test extends TestBase {
    public static void main() {
        Derived derived = new Derived();
        derived.method2();
        // TODO 通过derived 怎么访问父类的 a
        Test test = new Test();
        System.out.println(test.a); // 100
        TestBase testBase = new TestBase();
        // System.out.println(testBase.a); // 报错
        // 可以把 protected理解为“家庭内部财产”
        // 在同一个包里（同一个家庭）：大家都能用
        // 在不同包里（不同家庭）：只有儿子（子类）可以用自己的身份用，不能直接拿父亲（父类）的身份证去办事
        // 现在的代码 testBase.a相当于拿着父亲的身份证去办事，所以编译器报错
    }
}
