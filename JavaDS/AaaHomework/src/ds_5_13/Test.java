package ds_5_13;

public class Test {
    // 插入排序
    public static void insertSort(int[] array) {
        for (int i = 1; i < array.length; i++) {
            int tmp = array[i];
            int index = i;
            for (int j = i - 1; j >= 0; j--) {
                if (array[j] > tmp) {
                    array[index] = array[j];
                    index--;
                } else {
                    break;
                }
            }
            array[index] = tmp;
        }
    }

    // 希尔排序
    public static void shellSort(int[] array) {

    }

    // 选择排序
    public static void selectSort(int[] array) {
        for (int i = 0; i < array.length - 1; i++) {
            int minIndex = i;
            for (int j = i + 1; j < array.length; j++) {
                if (array[j] < array[minIndex]) {
                    minIndex = j;
                }
            }
            swap(array, i, minIndex);
        }
    }


    // 堆排序
    public static void heapSort(int[] array) {

    }

    private static void swap(int[] array, int f, int l) {
        int tmp = array[f];
        array[f] = array[l];
        array[l] = tmp;
    }
}
