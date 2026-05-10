package demo6;

import java.util.Arrays;
// 接口可以包含静态方法
// 接口的成员变量默认是静态 static 的
// 接口方法默认是抽象的
// 抽象类可以有构造方法 但是接口不能有构造方法
// 抽象类和接口都不能被实例化对象
// 抽象类可以有 private protected
// 抽象类的方法要么用 abstract 修饰要么有函数体
// abstract 和 private不能同时修饰同一个方法
// 接口的方法必须是 public
// 接口方法是默认抽象的必须得被重写
// 接口变量本质是 public static final 不可重写
// 接口不能用 abstract 修饰 原因: 接口本身就是隐式的 abstract 再加 abstract 属于冗余且不合法
// 接口不能有函数体
// 接口不能有静态代码块 不能有构造方法
public class Test {
    public static void bubbleSort(Comparable[] comparables) {
        for (int i = 0; i < comparables.length - 1; i++) {
            for (int j = 0; j < comparables.length - 1 - i; j++) {
                if (comparables[j].compareTo(comparables[j + 1]) > 0) {
                    Comparable tmp = comparables[j];
                    comparables[j] = comparables[j + 1];
                    comparables[j + 1] = tmp;
                }
            }
        }
    }

    public static void main() {
        Student[] students = new Student[3];
        students[0] = new Student("zhangsan", 10, 89.3);
        students[1] = new Student("lisi", 5, 99.99);
        students[2] = new Student("abc", 15, 10.29);
        ScoreComparator scoreComparator = new ScoreComparator();
        // Arrays.sort(students, scoreComparator); // 说明有被重载
        // 上面这行不是很好理解
        bubbleSort(students);
        System.out.println(Arrays.toString(students));
    }

    public static void main2() {
        Person[] people = new Person[3];
        people[0] = new Person("zhangsan",
                10, 89.3);
        people[1] = new Person("lisi",
                5, 99.99);
        people[2] = new Person("abc",
                15, 10.29);
        Arrays.sort(people);
        System.out.println(Arrays.toString(people));

        System.out.println("==============");
        int[] array = {1, 12, 31, 14, 5};
        Arrays.sort(array);
        System.out.println(Arrays.toString(array));
        // [1, 5, 12, 14, 31]
        /*for (int arr : array) {
            System.out.println(arr);
        }*/
    }

    public static void main1() {
        Student student1 = new Student("zhangsan",
                10, 89.3);
        Student student2 = new Student("lisi",
                5, 99.99);

        AgeComparator ageComparator = new AgeComparator();
        int ret = ageComparator.compare(student1, student2);
        if (ret > 0) {
            System.out.println("年龄关系：s1 > s2");
        }

        ScoreComparator scoreComparator = new ScoreComparator();
        ret = scoreComparator.compare(student1, student2);
        if (ret > 0) {
            System.out.println("分数关系：s1 > s2");
        } else {
            System.out.println("分数关系：s1 < s2");
        }

        NameComparator nameComparator = new NameComparator();
        ret = nameComparator.compare(student1, student2);
        if (ret > 0) {
            System.out.println("姓名关系：s1 > s2");
        } else {
            System.out.println("姓名关系：s1 < s2");
        }

        // comparable 接口
        /*if (student1.compareTo(student2) > 0) {
            System.out.println("s1 > s2");
        }*/
    }
}
