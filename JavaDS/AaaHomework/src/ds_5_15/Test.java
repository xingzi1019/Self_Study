package ds_5_15;

public class Test {
    // 归并排序---递归
    public static void mergeSort(int[] array) {
        mergeSort(array, 0, array.length - 1);
    }

    private static void mergeSort(int[] array, int left, int right) {
        if (left >= right) { // 等号千万记得
            return;
        }
        int mid = left + (right - left) / 2;
        mergeSort(array, left, mid);
        mergeSort(array, mid + 1, right);
        mergeTwoSortedArray(array, left, mid, right);
    }

    private static void mergeTwoSortedArray(int[] array, int left, int mid, int right) {
        int[] tmp = new int[right - left + 1];
        int k = 0;
        int l1 = left, r1 = mid, l2 = mid + 1, r2 = right;
        while (l1 <= r1 && l2 <= r2) {
            if (array[l1] < array[l2]) {
                tmp[k++] = array[l1++];
            } else {
                tmp[k++] = array[l2++];
            }
        }
        while (l1 <= r1) {
            tmp[k++] = array[l1++];
        }
        while (l2 <= r2) {
            tmp[k++] = array[l2++];
        }
        for (int i = 0; i < tmp.length; i++) {
            array[i + left] = tmp[i];
        }
    }


    // 归并排序---非递归
    public static void mergeSort2(int[] array) {
        int gap = 1;
        while (gap < array.length) {
            for (int i = 0; i < array.length; i = i + 2 * gap) {
                int left = i;
                int mid = left + gap - 1;
                if (mid >= array.length) {
                    break;
                }
                int right = Math.min(mid + gap, array.length - 1);
                mergeTwoSortedArray(array, left, mid, right);
            }
            gap *= 2;
        }
    }

    // 计数排序
    public static void countSort(int[] array) {
        int max = Integer.MIN_VALUE, min = Integer.MAX_VALUE;
        int n = array.length;
        for (int i = 0; i < n; i++) {
            if (array[i] > max) {
                max = array[i];
            }
            if (array[i] < min) {
                min = array[i];
            }
        }
        int[] count = new int[max - min + 1];
        for (int i = 0; i < n; i++) {
            count[array[i]-min]++;    // 要 - min 试试 2 3 4 4 5 这个数组就懂了
        }
        int k = 0;
        for (int i = 0; i < count.length; i++) {
            while (count[i] != 0) {
                array[k++] = i + min; // 这里要 + min
                count[i]--;
            }
        }
    }

    // 冒泡排序
    public static void bubbleSort(int[] array) {
        for (int i = 0; i < array.length - 1; i++) {
            boolean isSwap = false;
            for (int j = 0; j < array.length - i - 1; j++) {
                if (array[j] > array[j + 1]) {
                    swap(array, i, j);
                    isSwap = true;
                }
            }
            if (isSwap == false) {
                return;
            }
        }
    }

    // 快速
    public static void quickSort(int[] array) {
        // 优先使用挖坑法
        quickSort(array, 0, array.length - 1);
    }

    private static void quickSort(int[] array, int left, int right) {
        if (left > right) {
            return;
        }
        int pivotIndex = partition(array, left, right);// 根
        quickSort(array, 0, pivotIndex - 1); // 前半部分比基准值小    --- 左
        quickSort(array, pivotIndex, right);           // 后半部分比基准值大    --- 右
    }

    // 把基准值放到正确的位置 同时让左边都小于基准值 右边都大于基准值
    private static int partition(int[] array, int left, int right) {
        int pivot = array[left]; // 基准值
        int hole = left;
        while (left < right) {
            while (left < right && array[right] >= pivot) {
                right--;
            }
            if (left < right) {
                array[hole] = array[right];
                hole = right;
                left++;
            }
            while (left < right && array[left] <= pivot) {
                left++;
            }
            if (left < hole) {
                array[hole] = array[left];
                hole = left;
                right--;
            }
        }
        array[hole] = pivot;
        return hole; // 返回基准值的位置
    }

    private static void swap(int[] array, int i, int j) {
        int t = array[i];
        array[i] = array[j];
        array[j] = t;
    }
}
