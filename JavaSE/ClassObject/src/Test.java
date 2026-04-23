// 1. 一般一个文件当中只定义一个类
// 2. public修饰的类必须要和文件名相同
// 3. 不要轻易去修改public修饰的类的名称，如果要修改，通过开发工具修改
// 找对象 创建对象 使用对象
// 类是图纸
// 对象是实体
// 类产生对象的过程叫做类的实例化
public class Test {
    public static void main() {
        GirlFriend girlFriend1 = new GirlFriend();
        girlFriend1.name = "薇尔莉特";
        girlFriend1.age = 18;
        girlFriend1.gender = "女";
        System.out.println("姓名:" + girlFriend1.name); // 默认姓名null
        System.out.println("年龄:" + girlFriend1.age); // 默认年龄0
        System.out.println("性别:" + girlFriend1.gender); // 默认性别null
        System.out.println("标记:" + girlFriend1.flg); // 默认标记false
        // 成员变量没有赋值时 会有默认值
        girlFriend1.eat();
        GirlFriend girlFriend2 = new GirlFriend();
        girlFriend2.name = "薇薇安";
        girlFriend2.age = 18;
        girlFriend2.gender = "女";
        System.out.println("姓名:" + girlFriend2.name);
        System.out.println("年龄:" + girlFriend2.age);
        System.out.println("性别:" + girlFriend2.gender);
        System.out.println("标记:" + girlFriend2.flg);
        girlFriend2.eat();
    }

    public static void main2() {
        // 可以通过 new 实例化无数的对象
        GirlFriend girlFriend1 = new GirlFriend();
        GirlFriend girlFriend2 = new GirlFriend();
        GirlFriend girlFriend3 = new GirlFriend();
        GirlFriend girlFriend4 = new GirlFriend();
    }

    public static void main1() {
        int[] array = new int[3];
        // 下面 new 了一个对象
        GirlFriend girlFriend = new GirlFriend();
        Dog dog = new Dog();
        WashMachine washMachine = new WashMachine();
        int a = 10;
    }
}
