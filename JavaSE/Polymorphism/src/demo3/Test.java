package demo3;

class B {
    public B() {
        func();
    }

    public void func() {
        System.out.println("B.func()");
    }
}

class D extends B {
    private int num = 1;

    @Override
    public void func() {
        System.out.println("D.func() " + num);
        // 动态绑定 应该执行的是子类的 func 方法
        // 又因为父类构造还没执行完 所以子类 B 的实例也还没执行 所以 num 还没有被赋值 默认为 1
    }
}

public class Test {

    public static void main() {
        D d = new D(); // D.func() 0
    }
}
