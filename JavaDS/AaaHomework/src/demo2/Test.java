package demo2;

public class Test {
    public Test(int a) {

    }

    public Test() {
        this(1);
    }

    public Test(int a, int b) {
        //this.Test(); // error
        this();
    }

    public static int fun() {
        try {
            return 1;
        } catch (Exception e) {
            e.printStackTrace();
            return 2;
        } finally {
            return 3;
        }
    }
    public static void main(String[] args) {
        int a = fun();
        System.out.println(a);
    }

    public static void main1(String[] args) {
        try {
            System.out.println("a");
        } catch (Exception e) {
            e.printStackTrace();
        } finally {
            System.out.println("finally");
        }
        try {
            System.out.println('b');
        } catch (Exception e) {

        }
        try {
            System.out.println();
        } finally {
            System.out.println();
        }
        /*try {

        }*/
        // error try 后面必须至少有 catch 或者 finally
    }
}
