package enumdemo;

import java.lang.reflect.Constructor;
import java.lang.reflect.InvocationTargetException;

public class Test {
    public static void main(String[] args) {
        Class<?> c1;
        try {
            c1 = Class.forName("enumdemo.TestEnum");
            Constructor<?>[] declaredConstructors = c1.getDeclaredConstructors();
            for (Constructor<?> constructor : declaredConstructors) {
                System.out.println(constructor);
                // private enumdemo.TestEnum(java.lang.String,int,java.lang.String,int)
                // 发现竟然需要四个参数
            }
            System.out.println("--------------------------------------------------------");
            // Constructor<?> constructor = c1.getDeclaredConstructor(int.class, String.class);
            Constructor<?> constructor =
                    c1.getDeclaredConstructor(String.class, int.class, int.class, String.class);
            // String 和 int 交换顺序之后发现输出变成这样 说明后两个参数才是我们修改掉的
            // private enumdemo.TestEnum(java.lang.String,int,int,java.lang.String)
            constructor.setAccessible(true);
            TestEnum testEnum = (TestEnum) constructor.newInstance("xz", 2, 1, "红色");
            // 上面这行代码就是通过反射来创建对象
            // 但是枚举没法通过反射来创建对象 所以枚举很安全
            System.out.println(testEnum);
            /*
            回顾之前单例模式:
                1.普通单例的私有构造方法确实不安全，可以被反射和序列化攻击
                2.枚举单例是最安全的单例实现方式
                3.因为：
                    JVM 层面禁止反射创建枚举实例
                    枚举的序列化机制特殊，反序列化不会创建新实例
                    枚举天然线程安全
                    代码简洁，不需要手动防御
             后面在 多线程部分 会重新认识单例模式
             */
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
}
