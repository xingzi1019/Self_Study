package demo;

import java.util.Arrays;
import java.util.Random;

// 归并 冒泡 插入是稳定的排序
public class Test {
    // 从小到大
    public static void order(int[] array) {
        for (int i = 0; i < array.length; i++) {
            array[i] = i;
        }
    }

    // 从大到小
    public static void notOrder(int[] array) {
        for (int i = 0; i < array.length; i++) {
            array[i] = array.length - i;
            // 1_0000 等价于 10000，下划线只是视觉上的分隔符，不影响数值本身
        }
    }

    // 随机数组
    public static void randomOrder(int[] array) {
        Random random = new Random();
        for (int i = 0; i < array.length; i++) {
            array[i] = random.nextInt(10_0000);
            // 1_0000 等价于 10000，下划线只是视觉上的分隔符，不影响数值本身
        }
    }

    public static void testInsertSort(int[] array) {
        int[] array2 = Arrays.copyOf(array, array.length);
        // 拷贝一份 这样不会影响原来的数组
        long startTime = System.currentTimeMillis();
        Sort.insertSort(array2);
        long endTime = System.currentTimeMillis();
        System.out.println("直接插入排序耗时:" + (endTime - startTime));
    }

    public static void testShellSort(int[] array) {
        int[] array2 = Arrays.copyOf(array, array.length);
        // 拷贝一份 这样不会影响原来的数组
        long startTime = System.currentTimeMillis();
        Sort.shellSort(array2);
        long endTime = System.currentTimeMillis();
        System.out.println("希尔排序耗时:" + (endTime - startTime));
    }

    public static void testHeapSort(int[] array) {
        int[] array2 = Arrays.copyOf(array, array.length);
        // 拷贝一份 这样不会影响原来的数组
        long startTime = System.currentTimeMillis();
        Sort.heapSort(array2);
        long endTime = System.currentTimeMillis();
        System.out.println("堆排序耗时:" + (endTime - startTime));
    }

    public static void testSelectSort(int[] array) {
        int[] array2 = Arrays.copyOf(array, array.length);
        // 拷贝一份 这样不会影响原来的数组
        long startTime = System.currentTimeMillis();
        Sort.selectSort(array2);
        long endTime = System.currentTimeMillis();
        System.out.println("选择排序耗时:" + (endTime - startTime));
    }

    public static void testQuickSort(int[] array) {
        int[] array2 = Arrays.copyOf(array, array.length);
        // 拷贝一份 这样不会影响原来的数组
        long startTime = System.currentTimeMillis();
        Sort.quickSort(array2);
        long endTime = System.currentTimeMillis();
        System.out.println("快速排序耗时:" + (endTime - startTime));
    }

    public static void main1(String[] args) {
        int[] array = new int[10_0000];
        // order(array);
        notOrder(array);
        //randomOrder(array);
        testInsertSort(array);
        testShellSort(array);
        testHeapSort(array);
        testSelectSort(array);
        // System.out.println(Arrays.toString(array));
    }

    public static void main(String[] args) {
        int[] array = {31, 12, 13, 41, 54, 66, 27, 18};
        Sort.quickSort(array);
        System.out.println(Arrays.toString(array));
        // [12, 13, 18, 27, 31, 41, 54, 66]
    }
}
