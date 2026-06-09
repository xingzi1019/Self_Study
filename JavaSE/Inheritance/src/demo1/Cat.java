package demo1;
// 子类构造之前要先构造父类
public class Cat extends Animal {
    public Cat() {
        super("李四",9);
    }
    public void mew() {
        System.out.println(this.name + " 正在喵喵喵......");
    }
}
