public class Dog extends Animal {
    public Dog(String name, int age) {
        super(name, age);
    }

    public void bark() {
        System.out.println(this.name + "正在汪汪叫...");
    }
    @Override // 一般也加一个Override 一样的 IDEA 可以帮我们生成
    public void eat() {
        System.out.println(this.name + "正在吃狗粮...");
    }
    // 重写   上面这个和父类同名的方法就是重写
    // 1.方法名一样
    // 2.参数一样【数据类型 个数 顺序】
    // 3.返回值【基本类型->相同】【引用类型->相同或子类(专业术语:协变类型)】
    // 4.子类的访问修饰限定符要 >= 父类
    // 5.被 private 修饰的方法不能被重写
    // 6.被 static  修饰的方法不能被重写
    // 7.被 final   修饰的方法不能被重写
}
