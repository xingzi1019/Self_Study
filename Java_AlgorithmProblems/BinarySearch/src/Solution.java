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

    // 35
    public int searchInsert(int[] nums, int target) {

    }

    public static void main() {
        int[] nums = {5, 7, 7, 8, 8, 10};
        int target = 8;
        int[] ret = searchRange(nums, target);
        for (int i : ret) {
            System.out.println(i);
        }
    }
}

