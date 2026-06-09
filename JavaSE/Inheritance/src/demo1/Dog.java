package demo1;
// 子类构造之前要先构造父类
// 子类对象 = 父类对象 + 子类新增成员
// 如果父类都没构造完，子类怎么敢继续构造？
public class Dog extends Animal {
    /*public Dog() {
        super("张三", 10);
        // 这样就可以是先完成对父类的构造
    }*/
    // 不写的话编译器会默认帮你写下面这个不带参数的构造方法
    public String color;
    public Dog() {
        // System.out.println("JDK25新特性"); // 不报错
        super("aaa",1);
        // Animal();不能这么写 之能写 super
    }
    public Dog(String name,int age,String color) {
        super(name,age);
        this.color = color; // JDK 25新特性 允许这行放在 super 前面
    }

    public void bark() {
        System.out.println(this.name + " 正在汪汪汪......");
    }
}
