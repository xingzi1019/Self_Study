package demo;

import static java.util.Collections.swap;

public class Sort {
    /**
     * 直接插入排序
     *
     * @param array 待排序数组
     *              最坏：O(N ^ 2)  最好：O(N)
     *              稳定的排序
     *              扑克牌插入
     */
    public static void insertSort(int[] array) {
        for (int i = 0; i < array.length; i++) {
            int tmp = array[i];
            int j = i - 1;
            for (j = i - 1; j >= 0; j--) {
                if (array[j] > tmp) { // 不加等号就稳定 加了不稳定
                    array[j + 1] = array[j];
                } else {
                    // array[j + 1] = tmp;
                    break;
                }
            }
            array[j + 1] = tmp;
        }
    }

    /**
     * 希尔排序 (缩小增量排序)
     *
     * @param array 待排序数组
     *              时间复杂度 统一理解为 O(N^1.3) ~ O(N^1.5) 暂时无法...精准算出
     *              不稳定的排序
     *              先让数组“大致有序”，再做最后的精细排序
     */
    public static void shellSort(int[] array) {
        int gap = array.length;
        while (gap > 1) {
            gap = gap / 2; // 这个不一定 比较难
            Shell(array, gap);
        }
    }

    private static void Shell(int[] array, int gap) {
        // 一定要i++ 交替进行插入排序
        for (int i = gap; i < array.length; i++) {

            int tmp = array[i];
            int j = i - gap;

            for (; j >= 0; j -= gap) {
                if (array[j] > tmp) { // 不加等号就稳定 加了不稳定
                    array[j + gap] = array[j];
                } else {
                    // array[j + 1] = tmp;
                    break;
                }
            }
            array[j + gap] = tmp;
        }
    }

    // 希尔排序剪枝优化版
    public static void shellSort2(int[] array) {
        int n = array.length;
        int gap = 1;
        while (gap < n / 2) {
            gap = gap * 2 + 1;
        }

        boolean swapped = true;
        while (gap > 0) {
            swapped = Shell2(array, gap);
            if (!swapped && gap == 1) break;
            gap = (gap - 1) / 2;
        }
    }

    private static boolean Shell2(int[] array, int gap) {
        boolean swapped = false;
        for (int i = gap; i < array.length; i++) {
            int tmp = array[i];
            int j = i - gap;
            if (j >= 0 && array[j] <= tmp) continue;
            for (; j >= 0 && array[j] > tmp; j -= gap) {
                array[j + gap] = array[j];
                swapped = true;
            }
            array[j + gap] = tmp;
        }
        return swapped;
    }

    /**
     * 堆排序
     *
     * @param array 待排序数组
     *              时间复杂度 O(N*logN)
     *              空间复杂度 O(1)
     *              不稳定的排序
     *              不懂去看算法竞赛的比较快
     */
    public static void heapSort(int[] array) {
        // 创建大根堆
        createHeap(array);
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

    private static void swap(int[] array, int i, int j) {
        int tmp = array[i];
        array[i] = array[j];
        array[j] = tmp;
    }

    /**
     * 选择排序
     *
     * @param array 待排序数组
     *              时间复杂度 O(N*2)
     *              空间复杂度 O(1)
     *              不稳定的排序 e.g. 5 5 3 1 2 2
     *              每一次从待排序的数据元素中选出最小（或最大）的一个元素存放在序列的起始位置
     *              直到全部待排序的数据元素排完
     */
    public static void selectSort(int[] array) {
        for (int j = 0; j < array.length - 1; j++) {
            int minIndex = j;  // 假设当前 j 位置是最小值
            for (int i = j + 1; i < array.length; i++) {
                if (array[i] < array[minIndex]) {
                    minIndex = i;
                }
            }
            swap(array, j, minIndex); // j == minIndex相等的时候会无效交换
        }
    }

    /**
     * 冒泡排序
     *
     * @param array 待排序数组
     *              时间复杂度 最好O(N) 最差O(N*2)
     *              空间复杂度 O(1)
     *              稳定的排序
     */
    public static void bubbleSort(int[] array) {
        for (int i = 0; i < array.length - 1; i++) {
            boolean flag = false;
            for (int j = i; j < array.length - 1 - i; j++) {
                if (array[j] > array[j + 1]) {
                    swap(array, j, j + 1);
                    flag = true;
                }
            }
            if (!flag) {
                return;
            }
        }
    }

    /**
     * 快速排序
     *
     * @param array 待排序数组
     *              时间复杂度 O()
     *              空间复杂度 O()
     *              不稳定的排序
     *              任取待排序元素
     *              序列中的某元素作为基准值 按照该排序码将待排序集合分割成两⼦序列
     *              左⼦序列中所有元素均⼩于基准值 右⼦序列中所有元素均⼤于基准值
     *              然后最左右⼦序列重复该过程
     *              直到所有元素都排列在相应位置上为⽌
     *              类似前序遍历
     */
    public static void quickSort(int[] array) {
        quick(array, 0, array.length - 1);
    }

    private static void quick(int[] array, int start, int end) {
        if (start >= end) {
            return;
        }
        int par = partition(array, start, end);
        quick(array, start, par - 1);
        quick(array, par + 1, end);
    }

    private static int partition(int[] array, int low, int high) {
        int pivot = array[low];
        int save = low;
        while (low < high) {
            while (array[high] >= pivot && low < high) { // 注意这里的等号
                high--;
            }
            while (low < high && array[low] <= pivot) {
                low++;
            }
            swap(array, low, high);
        }
        swap(array, save, low);
        return low;
    }

    // 归并
}
