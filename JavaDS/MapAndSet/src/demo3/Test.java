package demo3;

import java.util.Objects;

// hashCode() 是 Java 中 Object 类的一个方法，主要作用是
// 为对象生成一个整数哈希值，用于支持基于哈希的数据结构
// (如 HashMap、HashSet、Hashtable 等)
class Student {
    public String id;

    public Student(String id) {
        this.id = id;
    }

    @Override
    public boolean equals(Object o) {
        if (o == null || getClass() != o.getClass()) return false;
        Student student = (Student) o;
        return Objects.equals(id, student.id);
    }

    @Override
    public int hashCode() {
        return Objects.hashCode(id);
    }
}

public class Test {
    public static void main(String[] args) {
        Student student1 = new Student("123456");
        int hashCode = student1.hashCode();
        System.out.println(hashCode);
        // 603742814
        Student student2 = new Student("123456");
        int hashCode2 = student2.hashCode();
        System.out.println(hashCode2);
        // 1067040082
        // 两者的哈希值不一致

        // 重写了 equals 和 hashCode 就一样了
        // 都是 1450575459
        // 再注释回去就是原本的数值了
        HashBucket2<Student, String> hashBucket2 = new HashBucket2<>();
        hashBucket2.push(student1, "守岸人");
        hashBucket2.push(student2, "朽叶千咲");

        String name1 = hashBucket2.get(student1);
        System.out.println(name1);
        String name2 = hashBucket2.get(student2);
        System.out.println(name2);
        // 同样的 如果注释了 equals 和 hashCode 那么就会输出"守岸人" "朽叶千咲"
        // 如果没注释就是输出 "朽叶千咲" // 键值相同 后者覆盖前者
    }

    // 哈希冲突: 不同的关键字 经过相同的哈希函数进行计算 找到了同一个位置 我们把这个现象叫做 哈希冲突
    /*
       如何避免:
               1.设计合理的哈希函数
                    1) 直接定制法
                    2) 除留余数法
                    其他不常用 暂不介绍
               2.调节负载因子
                    负载因子定义为: a = 填入表中的元素个数 / 散列表的长度
                    如果超过负载因子就扩容
     */
    /*
        哈希冲突的解决:
            1)闭散列
                线性探测 : 略
                二次探测 : 找下⼀个空位置的⽅法为：Hi = (H0 + i^2) % m
                                          或者：Hi = (H0 - i^2) % m 其中：i = 1,2,3…
            2)开散列(链地址法)
                ⽤散列函数计算散列地址 具有相同地址的关键码归于同⼀⼦集合 每⼀个⼦集合称为⼀个桶
                各个桶中的元素通过⼀个单链表链接起来
                各链表的头结点存储在哈希表中
                把链表的长度默认成 常数
     */
    // Java HashMap 底层：数组 + 链表 + 红黑树

    public static void main1(String[] args) {
        HashBucket hashBucket = new HashBucket();
        hashBucket.push(3, 999);
        hashBucket.push(6, 999);
        hashBucket.push(13, 999);
        hashBucket.push(4, 999);
        hashBucket.push(5, 999);
        hashBucket.push(9, 999);
        hashBucket.push(7, 999);
        hashBucket.push(8, 999);
        int val = hashBucket.get(13);
        System.out.println(val);
    }
    // 顺便复习一下 static 和 final
    // static 表示“静态的” 它修饰的成员属于类 而不是某个具体的对象
    // 也就是说 静态成员在内存中只有一份 被所有对象共享

    // final 表示“不可变的”、“最终的”，可以修饰类、方法、变量
    // 修饰的变量不能被更改
    // 修饰的方法不能被重写
    // 修饰的类不能被继承
    // 修饰的方法参数 在方法内部不能被重新赋值
    // static final 组合在一起，表示“全局常量”
}
