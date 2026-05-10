package demo9;

import java.util.Arrays;

public class Test {
    public static void main() {
        // InnerClass innerClass = new InnerClass(); // error
        // 看起来可能比较奇怪 但是看久了就没关系
        OuterClass1 outerClass1 = new OuterClass1();
        //                                  需要外部类引用才能 new 出来
        OuterClass1.InnerClass innerClass1= outerClass1.new InnerClass();
        OuterClass1.InnerClass innerClass2 = outerClass1.new InnerClass();
        // 上面这种写法只会 new 一个外部类 而下面的会 new 两个外部类出来
        OuterClass1.InnerClass innerClass3 = new OuterClass1().new InnerClass();
        OuterClass1.InnerClass innerClass4 = new OuterClass1().new InnerClass();
        innerClass1.testInner(); // testInner方法被执行了...
        System.out.println(outerClass1);
        System.out.println(innerClass1);
        // 匿名对象: new 了个对象 尽管会回收
        new OuterClass1().test();
        new OuterClass1().test();
        new OuterClass1().test();
        new OuterClass1().test();
        // 下面 new 了一回
        outerClass1.test();
        outerClass1.test();
        outerClass1.test();
        outerClass1.test();
    }
}
// 1. 外部类中的任何成员都可以在实例内部类方法中直接访问
// 2. 实例内部类所处的位置与外部类成员位置相同 因此也受 public private 等访问限定符的约束
// 3. 在实例内部类方法中访问同名的成员时 优先访问自己的 如果要访问外部类同名的成员
//    必须通过：外部类名称.this.同名成员 来访问
// 4. 实例内部类对象必须在先有外部类对象前提下才能创建
// 5. 实例内部类的非静态方法中包含了一个指向外部类对象的引用
// 6. 外部类中，不能直接访问实例内部类中的成员，如果要访问必须先要创建内部类的对象
