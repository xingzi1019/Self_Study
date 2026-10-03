package reflectdemo;

import java.lang.reflect.Constructor;
import java.lang.reflect.Field;
import java.lang.reflect.InvocationTargetException;
import java.lang.reflect.Method;

public class ReflectDemo {
    // 创建对象
    public static void reflectNewInstance() {
        Class<?> aClass;
        try {
            aClass = Class.forName("reflectdemo.Student");
            Student student = (Student) aClass.newInstance(); // 过时的方法
            System.out.println(student);
        } catch (ClassNotFoundException e) {
            throw new RuntimeException(e);
        } catch (InstantiationException e) {
            throw new RuntimeException(e);
        } catch (IllegalAccessException e) {
            throw new RuntimeException(e);
        }
    }

    // 反射私有的构造⽅法 屏蔽内容为获得公有的构造⽅法
    public static void reflectPrivateConstructor() {
        Class<?> aClass;
        try {
            aClass = Class.forName("reflectdemo.Student");
            //                              注意这个Declared
            Constructor<?> constructor = aClass.getDeclaredConstructor(String.class, int.class);
            // String.class 里的 . 稍特殊：*String 是类型名，.class 是一种特殊语法*，读作"String 这个类的 Class 对象"
            // 你想访问私有方法? 要确认一下 就有了下面这一行代码
            constructor.setAccessible(true); // 确认之后就不会报错 通过反射访问了私有 private 方法
            Student student = (Student) constructor.newInstance("海绵宝宝", 10);
            System.out.println(student);
        } catch (ClassNotFoundException e) {
            throw new RuntimeException(e);
        } catch (NoSuchMethodException e) {
            throw new RuntimeException(e);
        } catch (InvocationTargetException e) {
            throw new RuntimeException(e);
        } catch (InstantiationException e) {
            throw new RuntimeException(e);
        } catch (IllegalAccessException e) {
            throw new RuntimeException(e);
        }
    }

    // 反射私有属性
    public static void reflectPrivateField() {
        Class<?> aClass;
        try {
            aClass = Class.forName("reflectdemo.Student");
            // 获取 Student 类中声明的 name 字段（包括 private 字段，不需要先有对象）
            Field field = aClass.getDeclaredField("name");
            // 通过反射创建 Student 实例（相当于 new Student()）
            // 注意：newInstance() 已过时 推荐用 getDeclaredConstructor().newInstance()
            Student student = (Student) aClass.newInstance();
            // 如果是 private 字段，必须先设置可访问，否则会抛 IllegalAccessException
            field.setAccessible(true);
            // 修改 student 的字段为 "小明"
            field.set(student, "小明");
            System.out.println(student);
            /*
            为什么 new Student() 能调用 public 构造方法，但 field.set() 却要 setAccessible(true)？
            1. 构造方法 vs 字段访问是两回事
            newInstance() 调用的是 public Student() 构造方法，这是 public 的，所以可以直接调用 ✅
            field.set()   访问的是 private String name 字段，这是 private 的，所以必须 setAccessible(true) 才能访问 ❌
            这两个操作访问的是不同的成员：
            newInstance() → 访问构造方法（public）
            field.set() → 访问字段（private）
             */
        } catch (ClassNotFoundException e) {
            throw new RuntimeException(e);
        } catch (NoSuchFieldException e) {
            throw new RuntimeException(e);
        } catch (InstantiationException e) {
            throw new RuntimeException(e);
        } catch (IllegalAccessException e) {
            throw new RuntimeException(e);
        }
    }

    // 反射私有⽅法
    public static void reflectPrivateMethod() {
        Class<?> aClass;
        try {
            aClass = Class.forName("reflectdemo.Student");
            Method method = aClass.getDeclaredMethod("function", String.class);
            method.setAccessible(true);
            Student student = (Student) aClass.newInstance();
            method.invoke(student, "我是方法的参数！");
        } catch (ClassNotFoundException e) {
            throw new RuntimeException(e);
        } catch (NoSuchMethodException e) {
            throw new RuntimeException(e);
        } catch (InstantiationException e) {
            throw new RuntimeException(e);
        } catch (IllegalAccessException e) {
            throw new RuntimeException(e);
        } catch (InvocationTargetException e) {
            throw new RuntimeException(e);
        }
    }

    public static void main(String[] args) {
        // reflectNewInstance();
        // reflectPrivateConstructor();
        // reflectPrivateField();
        reflectPrivateMethod();
    }
}
