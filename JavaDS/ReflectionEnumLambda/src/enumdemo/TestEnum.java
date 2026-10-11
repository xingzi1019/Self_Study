package enumdemo;

// 默认继承了 Java 原生的枚举类
// 在 Java 中，每个枚举类都自动拥有一个 values() 方法
// 但这个方法并不是定义在 java.lang.Enum 类里的
// 而是由编译器自动生成在具体的枚举类中
/*
1)  java.lang.Enum 是所有枚举类型的共同父类，但它本身是抽象的，不能直接实例化。
    它提供了 name()、ordinal()、compareTo()、equals() 等通用方法，但没有 values()。
2)  values() 是编译器生成的静态方法
3)  为什么不在 Enum 基类里定义？
    因为 Enum 是泛型类 Enum<E extends Enum<E>>，它不知道子类具体有哪些枚举常量。
    如果放在基类里，需要反射或额外机制才能拿到常量列表，而编译器直接生成静态方法更高效、更类型安全。
 */
public enum TestEnum {

    RED(1, "红色"),   // 0
    BLACK(2, "黑色"), // 1
    GREEN(3, "绿色"); // 2
    // 对应枚举类型里面的属性 比如下面这两行代码
    public String color;
    public int ordinal;

    // 枚举的构造方法默认是私有的 你写其他修饰词会报错
    /*private TestEnum(String color, int ordinal) {
        this.ordinal = ordinal;
        this.color = color;
    }*/
    private TestEnum(int ordinal, String color) {
        this.ordinal = ordinal;
        this.color = color;
    }

    public static void main(String[] args) {
        // values() 以数组的形式返回枚举类型的所有成员
        // 详细看最上面的注释
        TestEnum[] testEnums = TestEnum.values();
        /*for (TestEnum testEnum : testEnums) {
            System.out.print(testEnum + " ");
        }*/
        // 默认序号从 0 开始
        for (int i = 0; i < testEnums.length; i++) {
            // ordinal() 获取枚举成员的索引位置
            System.out.println(testEnums[i] + " ordinal: " + testEnums[i].ordinal());
        }
        TestEnum test = TestEnum.valueOf("BLACK");
        // TestEnum test0 = TestEnum.valueOf("BLACK2");  // 没有会报错
        System.out.println(test);

        System.out.println("比较");
        System.out.println(RED.compareTo(GREEN)); // 0 - 2 = (-2)
    }

    public static void main1(String[] args) {
        TestEnum testEnum = TestEnum.RED;
        switch (testEnum) {
            case BLACK:
                System.out.println("黑色");
                break;
            case RED:
                System.out.println("红色");
                break;
            case GREEN:
                System.out.println("绿色");
                break;
            default:
                System.out.println("其他颜色");
                break;
        }
    }
}
