package demo6;

import java.util.Arrays;

public class Test {
    public static void main() {
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
