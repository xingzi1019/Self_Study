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
        int gap = array.length / 2;
        while (gap >= 1) {
            shell(array, gap);
            gap /= 2;
        }
    }

    public static void shell(int[] array, int gap) {
        for (int i = gap; i < array.length; i++) {
            int tmp = array[i];
            int j = i - gap;
            for (; j >= 0; j -= gap) { // 这里感觉比较难想到
                if (array[j] > tmp) {
                    array[j + gap] = array[j];
                } else {
                    break;
                }
            }
            array[j + gap] = tmp;
        }
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
        createHeap(array);// 升序大根堆
        int end = array.length - 1;
        while (end > 0) {
            swap(array, 0, end);
            siftDown(array, 0, array.length);
            end--;
        }
    }

    private static void createHeap(int[] array) {
        for (int parent = (array.length - 1 - 1) / 2; parent >= 0; parent--) {
            siftDown(array, parent, array.length);
        }
    }

    private static void siftDown(int[] array, int parent, int len) {
        int child = parent * 2 + 1;
        while (child < len) {
            if (child + 1 < len && array[child] < array[child + 1]) {
                child++;
            }
            if (array[child] > array[parent]) {
                swap(array, child, parent);
                parent = child;
                child = parent * 2 + 1;
            } else {
                break;
            }
        }
    }

    private static void swap(int[] array, int f, int l) {
        int tmp = array[f];
        array[f] = array[l];
        array[l] = tmp;
    }
}
