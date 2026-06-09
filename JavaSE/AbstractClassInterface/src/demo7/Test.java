package demo7;

public class Test {
    public static void main() throws CloneNotSupportedException {
        Person person1 = new Person("zhangsan", 10, 10.9);
        Person person2 = (Person) person1.clone();
        System.out.println(person1.m.money); // 9.9
        System.out.println(person2.m.money); // 9.9
        System.out.println("============");
        person2.m.money = 19.99;
        System.out.println(person1.m.money); // 19.99
        System.out.println(person2.m.money); // 19.99
        // 上面这种就叫做浅拷贝
        // 我对 Person 类里面的 clone 类进行修改 把 m 也进行了拷贝 此时就变成了深拷贝
        // 上面的 person2 的修改就对 person1 没有影响
        // 9.9
        // 19.99
    }

    public static void main1() throws CloneNotSupportedException {
        Person person1 = new Person("zhangsan", 10, 10.99);
        Person person2 = (Person) person1.clone();
        // 返回的 Object 类不能用 Person接收 向下转型了属于是 和下面这个例子一样
        // Animal a = new Dog();    // 向上转型：Dog → Animal
        // Dog d = (Dog) a;         // 向下转型：Animal → Dog
        // d.run();                  // 现在可以调用 Dog 独有的方法了！
        System.out.println(person1);
        System.out.println(person2);
    }
}
// 1.重新 clone 方法
// 2.声明异常(Person 和 Test 都得加)
// 3.强制类型转换(向下转型)