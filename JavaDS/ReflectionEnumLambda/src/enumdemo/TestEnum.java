package enumdemo;

// 默认继承了 Java 原生的枚举类
public enum TestEnum {

    RED("红色", 1),   // 0
    BLACK("黑色", 2), // 1
    GREEN("绿色", 3); // 2

    public String color;
    public int ordinal;

    // 枚举的构造方法默认是私有的
    private TestEnum(String color, int ordinal) {
        this.ordinal = ordinal;
        this.color = color;
    }

    public static void main(String[] args) {
        // values() 以数组的形式返回枚举类型的所有成员
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
