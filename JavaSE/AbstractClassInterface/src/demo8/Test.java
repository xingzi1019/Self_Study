package demo8;

import java.util.Arrays;
import java.util.Comparator;

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
    // 重载一下冒泡比较的方法
    public static void bubbleSort(Student[] students, Comparator<Student> comparator) {
        for (int i = 0; i < students.length - 1; i++) {
            for (int j = 0; j < students.length - 1 - i; j++) {
                // if (students[j].compareTo(students[j + 1]) > 0) { }
                if (comparator.compare(students[j], students[j + 1]) > 0) {
                    Student temp = students[j];
                    students[j] = students[j + 1];
                    students[j + 1] = temp;
                }
            }
        }
    }

    public static void main() {
        Student[] students = new Student[3];
        students[0] = new Student("zhangsan", 10);
        students[1] = new Student("lisi", 5);
        students[2] = new Student("abc", 15);
        AgeComparator ageComparator = new AgeComparator();
        // Arrays.sort(students, ageComparator);
        // bubbleSort(students);
        bubbleSort(students, ageComparator);
        System.out.println(Arrays.toString(students));
        bubbleSort(students);
        System.out.println(Arrays.toString(students));
    }
}
