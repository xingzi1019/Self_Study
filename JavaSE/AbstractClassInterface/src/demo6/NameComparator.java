package demo6;

import java.util.Comparator;

public class NameComparator implements Comparator<Student> {
    @Override
    public int compare(Student o1, Student o2) {
        return o1.name.compareTo(o2.name);
        // 本质是 String 类型的比较 但是 Java 官方帮我们实现好了
        // 我们可以去看一下源码理解一下 按照字典序排序 和 C语言一样
    }
}
