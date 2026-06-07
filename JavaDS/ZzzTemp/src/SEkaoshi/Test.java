package SEkaoshi;

public class Test {
    public static String func(String str1, String str2) {
        StringBuilder ret = new StringBuilder();
        StringBuilder stringBuilderA = new StringBuilder(str1).reverse(); // 非常好用的字符串逆置方法
        // StringBuilder的构造方法允许传参 str1
        /*public StringBuilder(String str) {
            super(str);
        }*/
        return ret.toString();
    }

    public static void main(String[] args) {
        func("10110", "1101");
    }
}
