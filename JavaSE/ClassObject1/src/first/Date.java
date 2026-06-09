package first;
// 包名必须是小写

public class Date {
    // 成员变量
    public int year;
    public int month;
    public int day;

    // 成员方法
    // 构造方法 ----> 相当于出生证明
    // 没有返回值
    // 方法名和类名一样
    /*public void setDay(int y, int m, int d) {
        year = y;
        month = m;
        day = d;
    }*/
    /*public void setDay(int year, int month, int day) {
        year = year; // 相当于是自己给自己赋值 并没有给变量赋值
        month = month;
        day = day;
    }*/
    /*public void setDay(int year, int month, int day) {
        this.year = year; // this代表当前对象的引用
        this.month = month;
        this.day = day;
    }*/
    //                 这个是隐式参数
    public void setDay(Date this, int year, int month, int day) { // 神奇吧 同样可以使用
        this.year = year; // this代表当前对象的引用
        this.month = month;
        this.day = day; // 习惯使用this 存在即合理
    }

    /*public void printDate() {
        System.out.println(year + "/" + month + "/" + day);
    }*/
    public void printDate(Date this) { // 一般来说这个隐式参数我们是不写的
        System.out.println(this.year + "/" + this.month + "/" + this.day);
    }
    // this引用的特性
    // 1. this的类型：对应类类型引用，即哪个对象调用就是哪个对象的引用类型
    // 2. this只能在"成员方法"中使用
    // 3. 在"成员方法"中，this只能引用当前对象，不能再引用其他对象
    // 4. this是“成员方法”第一个隐藏的参数，编译器会自动传递，在成员方法执行时
    // 编译器会负责将调用成员方法对象的引用传递给该成员方法this负责来接收
    public void func() {
        this.printDate();
    }
    // 1.this通过 . 访问成员变量
    // 2.this.func(); 调用"成员方法"
    // this(参数列表) 访问当前对象的构造方法
    // 不能通过点号访问构造方法
    public static void main() {
        Date date1 = new Date();
        date1.setDay(2026, 4, 24);
        date1.printDate();

        Date date2 = new Date();
        date2.setDay(2025, 4, 24);
        date2.printDate();
    }
}
