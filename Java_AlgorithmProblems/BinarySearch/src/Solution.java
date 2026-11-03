public class Solution {
    // 704
    public int search(int[] nums, int target) {
        int n = nums.length;
        int left = 0, right = n - 1;
        int mid;
        while (left <= right) {
            mid = (right - left) / 2 + left; // 这样不会溢出
            if (nums[mid] == target) {
                return mid;
            } else if (nums[mid] > target) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        return -1;
    }

    // 34
    public static int[] searchRange(int[] nums, int target) {
        int[] ret = {-1, -1};
        if (nums == null || nums.length == 0) {
            return ret;
        }
        int left = 0, right = nums.length - 1;
        // 1 2 3 3 3 4 5
        // 找左边的 t
        while (left < right) { // 细节1 如果加了 = 会死循环
            int mid = left + (right - left) / 2; // 偏左
            if (nums[mid] >= target) {
                right = mid;
            } else if (nums[mid] < target) {
                left = mid + 1;
            }
        }
        if (nums[left] == target) {
            ret[0] = left;
        }
        left = 0; // 这一步可以不写 因为此时的 left 已经是最左边的 t 了
        right = nums.length - 1;
        // 找最右边的 t
        // 1 2 3 3 3 4 5
        while (left < right) {
            int mid = left + (right - left + 1) / 2; // 偏右
            if (nums[mid] <= target) {
                left = mid;
            } else if (nums[mid] > target) {
                right = mid - 1;
            }
        }
        if (nums[right] == target) {
            ret[1] = right;
        }
        return ret;
    }

    // 69  左闭右闭 + 右偏 mid
    public static int mySqrt(int x) {
        // 还是有一些细节需要注意的
        if (x == 0) return 0;
        long left = 1, right = x;
        while (left < right) {
            long mid = (right - left + 1) / 2 + left;
            if (mid * mid > x) {
                right = mid - 1;
            } else {
                left = mid;
            }
        }
        return (int) left;
    }

    // 下面这个也是对的 左闭右开 左偏 mid
    public static int mySqrt2(int x) {
        if (x == 0) return 0;
        long left = 1;
        long right = (long) x + 1; // 左闭右开区间 [left, right)
        while (left < right) {
            long mid = left + (right - left) / 2; // 左偏 mid
            if (mid * mid > x) {
                right = mid;        // 答案在 [left, mid) 中
            } else {
                left = mid + 1;     // 答案在 [mid+1, right) 中
            }
        }
        return (int) (left - 1);
    }

    // 35
    public static int searchInsert(int[] nums, int target) {
        int left = 0, right = nums.length - 1, ret = -1; // ret >= target
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] == target) {
                return mid;
            } else if (nums[mid] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        return left;
    }


    public static void main() {
        int[] nums = {1,3,5,6};
        int target = 7;
        int ret = searchInsert(nums,target);
        System.out.println(ret);
    }
}

