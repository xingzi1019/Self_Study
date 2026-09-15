package demo;

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
}
