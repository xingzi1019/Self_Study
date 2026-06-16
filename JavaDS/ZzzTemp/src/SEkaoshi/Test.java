package SEkaoshi;

//
//public class Test {
//    public static String func(String str1, String str2) {
//        StringBuilder ret = new StringBuilder();
//        StringBuilder stringBuilderA = new StringBuilder(str1).reverse(); // 非常好用的字符串逆置方法
//        // StringBuilder的构造方法允许传参 str1
//        /*public StringBuilder(String str) {
//            super(str);
//        }*/
//        return ret.toString();
//    }
//
//    public static void main(String[] args) {
//        func("10110", "1101");
//    }
//}
//public class Test {
//    public static void main(String[] args) {
//        MyArray myArray = new MyArray();
//        myArray.setVal(0, "xz");
//        myArray.setVal(1, 99);
//        // String str = myArray.getPos(0); // 报错  父类类型 Object 给到子类必然有问题
//        // int i = myArray.getPos(1);      // 报错
//        // 只能用 Object 类接收
//        // 方法一    强制类型转换成赋值时的类型
//        String str1 = (String) myArray.getPos(0);
//        int i1 = (int) myArray.getPos(1);
//        // 方法二    用返回的类型来对应接收
//        Object str2 = myArray.getPos(0);
//        Object i2 = myArray.getPos(1);
//    }
//}
class MyArray {
    public Object[] array = new Object[10];

    public Object getPos(int pos) {
        return this.array[pos];
    }

    public void setVal(int pos, Object val) {
        this.array[pos] = val;
    }
}

public class Test {
    public static void main(String[] args) {
        MyArray myArray = new MyArray();
        myArray.setVal(0, 10);
        myArray.setVal(1, "hello");//字符串也可以存放
        // String ret = myArray.getPos(1);//编译报错
        // System.out.println(ret);
    }
}
