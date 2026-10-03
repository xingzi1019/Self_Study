package reflectdemo;

public class Test {
    /*
        Java的反射（reflection）机制是在运⾏时检查、访问和修改类、接⼝、字段和⽅法的机制；
        这种动态获取信息以及动态调⽤对象⽅法的功能称为java语⾔的反射（reflection）机制
     */
    /*
        Java⽂件被编译后 ⽣成了.class⽂件 JVM 此时就要去解读.class⽂件  被编译后的Java⽂件.class也被JVM解析为⼀个对象
        这个对象就是 java.lang.Class 这样当程序在运⾏时，每个java⽂件就最终变成了Class类对象的⼀个实例
        我们通过Java的反射机制应⽤到这个实例，就可以去获得甚⾄去添加改变这个类的属性和动作，使得这个类成为⼀个动态的类
     */
    public static void main(String[] args) {
        Class<?> c1;
        try {
            c1 = Class.forName("reflectdemo.Student");
        } catch (ClassNotFoundException e) {
            throw new RuntimeException(e);
        }
        Class<?> c2 = Student.class;

        Student student = new Student();
        // 构造方法里面有输出 Student()
        Class<?> c3 = student.getClass(); // 这个方法来源于 Object
        System.out.println(c1 == c2); // true
        System.out.println(c1 == c3); // true
        System.out.println(c2 == c3); // true
    }
}
