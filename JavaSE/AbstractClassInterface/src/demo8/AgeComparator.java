package demo8;

import java.util.Comparator;

public class AgeComparator implements Comparator<Student> {

    @Override
    public int compare(Student o1, Student o2) {
        // 思考：为什么 Comparator 里面那么多抽象方法 我现在只写一个就可以不报错正常使用呢
        return o1.age - o2.age;
    }
}
