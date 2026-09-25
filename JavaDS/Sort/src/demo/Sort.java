package demo;

import java.util.Deque;
import java.util.LinkedList;

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
     * @param array 待排序数组 一般快排的时空复杂度说的是好情况
     *              时间复杂度 O(N*logN)~O(N^2)
     *              空间复杂度 O(logN)~O(N)
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
        if (end - start + 1 <= 10) {
            insertSortRange(array, start, end);
            return;
        }
        // 进行三数取中 如果斜树会退化为 O(N*2)
        int index = threeMid(array, start, end); // 这两行可以删不影响
        swap(array, start, index);               // 这两行可以删不影响
        int par = partition(array, start, end);
        quick(array, start, par - 1);
        quick(array, par + 1, end);
    }

    private static void insertSortRange(int[] array, int low, int high) {
        for (int i = low + 1; i <= high; i++) {
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

    // 三数取中
    private static int threeMid(int[] array, int low, int high) {
        int mid = (low + high) / 2;
        if (array[low] < array[high]) {
            if (array[mid] < array[low]) {
                return low;
            } else if (array[high] < array[mid]) {
                return high;
            } else {
                return mid;
            }
        } else {
            if (array[high] > array[mid]) {
                return high;
            } else if (array[mid] > array[low]) {
                return low;
            } else {
                return mid;
            }
        }
    }

    private static int partition(int[] array, int low, int high) {
        int pivot = array[low];  // 挖坑：保存基准值，low位置成为"坑"
        while (low < high) {
            // 从右向左找小于pivot的元素
            while (low < high && array[high] >= pivot) {
                high--;
            }
            array[low] = array[high];  // 填坑：将找到的元素填入low位置的坑
            // 从左向右找大于pivot的元素
            while (low < high && array[low] <= pivot) {
                low++;
            }
            array[high] = array[low];  // 填坑：将找到的元素填入high位置的坑
        }
        array[low] = pivot;  // 将基准值放入最终位置
        return low;
    }

    private static int partitionHoare(int[] array, int low, int high) {
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

    // 用栈不用递归
    public static void quickSorNor(int[] array) {
        int start = 0;
        int end = array.length - 1;
        int par = partition(array, start, end);
        Deque<Integer> stack = new LinkedList<>();
        if (start + 1 < par) {
            stack.push(start);
            stack.push(par - 1);
        }
        if (par + 1 < end) {
            stack.push(par + 1);
            stack.push(end);
        }
        while (!stack.isEmpty()) {
            start = stack.pop();
            end = stack.pop();
            par = partition(array, start, end);
            if (start + 1 < par) {
                stack.push(start);
                stack.push(par - 1);
            }
            if (par + 1 < end) {
                stack.push(par + 1);
                stack.push(end);
            }
        }
    }

    /**
     * 归并排序
     *
     * @param array 待排序数组
     *              时间复杂度：O(N*logN)
     *              空间复杂度：O(N)
     *              稳定的排序
     */
    public static void mergeSort(int[] array) {
        mergeSortChild(array, 0, array.length - 1);
    }

    private static void mergeSortChild(int[] array, int left, int right) {
        if (left >= right) {
            return;
        }
        int mid = (left + right) / 2;
        mergeSortChild(array, left, mid); // 不要写成mid-1
        mergeSortChild(array, mid + 1, right);
        merge(array, left, mid, right);
    }

    // 这个合并两个有序数组写过几万遍 递归实现
    private static void merge(int[] array, int left, int mid, int right) {
        int[] tmp = new int[right - left + 1];
        int k = 0;
        int s1 = left;
        int e1 = mid;
        int s2 = mid + 1;
        int e2 = right;
        while (s1 <= e1 && s2 <= e2) {
            if (array[s1] <= array[s2]) {
                tmp[k++] = array[s1++];
            } else {
                tmp[k++] = array[s2++];
            }
        }
        // 这两个只会进去一个
        while (s1 <= e1) {
            tmp[k++] = array[s1++];
        }
        while (s2 <= e2) {
            tmp[k++] = array[s2++];
        }
        for (int i = 0; i < tmp.length; i++) {
            array[i + left] = tmp[i];
        }
    }

    // 归并排序非递归实现
    public static void mergeSort2(int[] array) {
        int gap = 1;
        while (gap < array.length) {
            for (int i = 0; i < array.length; i = i + 2 * gap) {
                int left = i;
                int mid = left + gap - 1;
                if (mid >= array.length) {
                    mid = array.length - 1;
                }
                int right = mid + gap - 1;
                if (right >= array.length) {
                    right = array.length - 1;
                }
                merge(array, left, mid, right);
            }
            gap *= 2;
        }
    }

    // 计数排序⼜称为鸽巢原理，是对哈希直接定址法的变形应⽤
}
