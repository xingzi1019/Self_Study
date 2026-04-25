package demo2;
// 静态方法里面是不能使用 this 和 super 的
public class Derived extends Base {
    public int a = 100;
    // 在子类方法中 或者 通过子类对象访问成员时：
    // 1.如果访问的成员变量子类中有，优先访问自己的成员变量。
    // 2.如果访问的成员变量子类中无，则访问父类继承下来的，如果父类也没有定义，则编译报错。
    // 3.如果访问的成员变量与父类中成员变量同名，则优先访问自己的
    // 成员变量访问遵循就近原则，自己有优先自己的，如果没有则向父类中找
    public int c = 3;
    public void method2() {
        testDerived(); // 子类的 testDerived 方法
        this.testDerived(); // 子类的 testDerived 方法
        this.testBase(); // 子类的 testBase 方法
        super.testBase(); // 父类的 testBase 方法
        testBase(); // 子类的 testBase 方法
        // 就近原则:一样的 优先去子类里面找 找不到才去父类里面找
    }
    public void testDerived() {
        System.out.println("子类的 testDerived 方法");
    }
    public void testBase() {
        System.out.println("子类的 testBase 方法");
    }

    public void method() {
        /*this.a = 10;
        this.b = 20;
        this.c = 30;*/
        System.out.println("父类的 a = " + super.a); // 1
        System.out.println(this.a); // 100
        System.out.println(super.b); // 2
        System.out.println(this.c); // 3
    }
}
