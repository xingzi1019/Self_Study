import java.util.Arrays;

import static java.util.Collections.swap;

public class Test3_3 {
    // 给你一个整数数组 arr，请你判断数组中是否存在连续三个元素都是奇数的情况
    // 如果存在，请返回 true ；否则，返回 false
    public static boolean hasThreeConsecutiveOdds(int[] array) {
        if (array.length < 3) return false;
        for (int i = 0; i <= array.length - 3; i++) {
            if (array[i] % 2 != 0 &&
                    array[i + 1] % 2 != 0 &&
                    array[i + 2] % 2 != 0) {
                return true;
            }
        }
        return false;
    }

    public static void main8() {
        int[] array = {1, 2, 34, 3, 4, 5, 7, 23, 12};
        if (hasThreeConsecutiveOdds(array)) {
            System.out.println("存在");
        } else {
            System.out.println("不存在");
        }
    }

    // 给定一个大小为 n 的数组，找到其中的多数元素
    // 多数元素是指在数组中出现次数 大于 [ n/2 ] 的元素
    //输入：[2,2,1,1,1,2,2]
    //输出：2
    public static int mostNum1(int[] array) { // 投票算法
        // 想象一场选举
        // 每个不同的数字都是 候选人
        // 每两个不同的人碰面 → 互相抵消
        // 多数元素因为人数更多，一定 剩到最后
        int candidate = 0;
        int count = 0;
        for (int num : array) {
            if (count == 0) {
                candidate = num;
            }
            count += (num == candidate) ? 1 : -1;
        }
        return candidate;
    }

    public static int mostNum2(int[] array) {
        int[] count = new int[array.length];
        for (int i = 0; i < array.length; i++) {
            count[array[i]]++;
        }
        int max = 0;
        for (int i = 0; i < array.length; i++) {
            if (count[array[i]] > count[max]) {
                max = i;
            }
        }
        return array[max];
    }
    public static int mostNum3(int[] array) {
        Arrays.sort(array);
        return array[array.length/2];
    }

    public static void main7() {
        int[] array = new int[]{2, 2, 1, 1, 1, 2, 2};
        int ret = mostNum3(array);
        System.out.println(ret);
    }

    //你可以假设数组是非空的，并且给定的数组总是存在多数元素。
    // 给定一个非空整数数组，除了某个元素只出现一次以外，其余每个元素均出现两次。找出那个只出现了一次的元素
    //输入: [4,1,2,1,2]
    //输出: 4
    public static int findOnly1(int[] array) {
        int result = 0;
        for (int num : array) {
            result ^= num;
        }
        return result;
    }

    public static int findOnly2(int[] array) {
        int[] count = new int[array.length];
        for (int i = 0; i < array.length; i++) {
            count[array[i]]++;
        }
        for (int i = 0; i < array.length; i++) {
            if (count[array[i]] == 1) {
                return array[i];
            }
        }
        return 0;
    }

    public static void main6() {
        int[] array = {4, 1, 2, 1, 2};
        int ret = findOnly1(array);
        System.out.println(ret);
    }

    // 两数之和
    public int[] twoSum(int[] nums, int target) {
        for (int i = 0; i < nums.length; i++) {
            for (int j = i + 1; j < nums.length; j++) {
                if (nums[i] + nums[j] == target) {
                    return new int[]{i, j};
                }
            }
        }
        throw new IllegalArgumentException("No two sum solution");
    }

    public static void main5(String[] args) {
        Test3_3 sol = new Test3_3();
        int[] nums = {2, 7, 11, 15};
        int target = 9;
        int[] result = sol.twoSum(nums, target);
        System.out.println("[" + result[0] + ", " + result[1] + "]"); // [0, 1]
    }

    // 给定一个整型数组, 实现冒泡排序(升序排序)
    public static void bubbleSort(int[] array) {
        int n = array.length;
        for (int i = 0; i < n - 1; i++) {
            boolean flag = false; // 这个 flag 的定义位置有讲究的
            for (int j = 0; j < n - 1 - i; j++) {
                if (array[j] > array[j + 1]) {
                    int t = array[j];
                    array[j] = array[j + 1];
                    array[j + 1] = t;
                    flag = true;
                }
            }
            if (!flag) {
                break;
            }
        }
    }

    static void main4() {
        int[] array = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
        System.out.println(Arrays.toString(array));
        bubbleSort(array);
        System.out.println(Arrays.toString(array));
    }

    // 给定一个有序整型数组, 实现二分查找
    public static int myBinarySearch(int[] array, int value) {
        int l = 0;
        int r = array.length - 1;
        while (l <= r) {
            int mid = (l + r) / 2;
            if (array[mid] < value) {
                l = mid + 1;
            } else if (array[mid] == value) {
                return mid;
            } else {
                r = mid - 1;
            }
        }
        return -1;
    }

    static void main3() {
        int[] array = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
        Arrays.sort(array);
        System.out.println(Arrays.toString(array));
        int index = myBinarySearch(array, 8);
        System.out.println(index);
    }

    //调整数组顺序使得奇数位于偶数之前。调整之后，不关心大小顺序。
    //如数组：[1,2,3,4,5,6]
    //调整后可能是：[1, 5, 3, 4, 2, 6]
    public static void fun(int[] array) {
        int l = 0;
        int r = array.length - 1;
        while (l < r) {
            // 找到左边的偶数
            if (l < r && array[l] % 2 != 0) {
                l++;
            }
            // 找到右边的奇数
            if (l < r && array[r] % 2 == 0) {
                r--;
            }
            if (l < r) {
                int temp = array[l];
                array[l] = array[r];
                array[r] = temp;
                r--;
                l++;
            }
        }
    }

    static void main2() {
        int[] array = {1, 2, 3, 4, 5, 6};
        fun(array);
        System.out.println(Arrays.toString(array));
    }

    // 实现一个方法 transform 以数组为参数
    // 循环将数组中的每个元素 乘以 2 , 并设置到对应的数组元素上
    // 例如：原数组为 {1, 2, 3}, 修改之后为 {2, 4, 6}
    public static void transform(int[] array) {
        for (int i = 0; i < array.length; i++) {
            array[i] *= 2;
        }
    }

    public static int[] transform2(int[] array) {
        int[] tmp = new int[array.length];
        for (int i = 0; i < array.length; i++) {
            tmp[i] = array[i] * 2;
        }
        return tmp;
    }

    public static void main1(String[] argc) {
        int[] array = {1, 2, 3, 4, 5, 6};
        System.out.println(Arrays.toString(transform2(array)));
        transform(array);
        String str = Arrays.toString(array);
        System.out.println(str);
    }
}
