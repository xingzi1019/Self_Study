package Last;

class Base {
    private int a;
    public int b;
}

// class DD extends Base,Test // 报错 Java 不支持多继承
class A {

}

final class B extends A {
    // 当一个类被 final 修饰之后不能被继承
}

// class C extends B{ // 报错: Cannot inherit from final class 'Last.B'
//     我们常用的 String 就是 final 修饰的
// }
class D extends Base {
    private int c;
    public void func() {
        System.out.println(super.b);
        // System.out.println(super.a); // 报错:'a' has private access in 'Last.Base'
        // a 和 this.a 也不行
        System.out.println(this.c);
    }
}
// 组合
// 把继承理解成 is-a  猫继承了动物    猫   is a 动物
// 把组合理解成 has-a 学校有学生(老师)  学校 has a 学生(老师)
class Student {

}
class Teacher {
    public String name;
    public int age;
    @Override
    public String toString() {
        return "Teacher{" +
                "name='" + name + '\'' +
                ", age=" + age +
                '}';
    }
}
class School {
    private Student stu;
    private Teacher tea;
}
public class Test {
    //final int COUNT; // 修饰成员变量时一定要初始化
    // final 可以修饰类 变量 成员变量 方法
    // 被 final 修饰的方法不能被重写
    final int COUNT = 9;

    public static void main() {
        final int SIZE = 10; // 常量
        // SIZE = 100; // 报错 被 final 修饰以后就不能被改变
        // 常量一般都全大写
        Teacher teacher = new Teacher();
        teacher.name = "aaa";
        teacher.age = 18;
        System.out.println(teacher);
    }
}
// 所以的 Java 类都直接或间接继承 Object类
// class A { }  // 隐式继承 Object
// class B extends A { }  // 只继承 A
// 这里的 B 通过继承 A 间接继承 Object

