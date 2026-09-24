package demo;

public class Solution {
    // 283
    public void moveZeroes(int[] nums) {
        int slow = 0;
        // 先把非0移动到最前面
        for (int i = 0; i < nums.length; i++) {
            if (nums[i] != 0) {
                nums[slow++] = nums[i];
            }
        }
        // 后面补0就行
        for (int j = slow; j < nums.length; j++) {
            nums[j] = 0;
        }
    }

    // 1089
    public void duplicateZeros(int[] arr) {
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] == 0) {
                if (i == arr.length - 1) { // 不要越界
                    return;
                }
                moveToRightOneStep(arr, i + 1, arr.length - 1);
                arr[i + 1] = 0;
                i++;
            }
        }
    }

    private void moveToRightOneStep(int[] arr, int i, int j) {
        for (; j > i; j--) {
            arr[j] = arr[j - 1];
        }
    }

    public void duplicateZeros2(int[] arr) { // 这个快一点
        int cur = 0;
        int dest = -1;
        // 先找到最后一个复写元素
        while (cur <= arr.length - 1) {
            if (arr[cur] != 0) {
                dest++;
            } else {
                dest += 2;
            }
            if (dest < arr.length - 1) {
                cur++;
            } else {
                break;
            }
        }
        // 处理边界情况
        if (dest == arr.length) {
            arr[arr.length - 1] = 0;
            cur--;
            dest -= 2;
        }
        // 从后往前
        while (cur >= 0 && dest >= 0) {
            if (arr[cur] != 0) {
                arr[dest--] = arr[cur--];
            } else {
                arr[dest--] = 0;
                if (dest >= 0) {
                    arr[dest--] = 0;
                }
                cur--;
            }
        }
    }

    // 202 要想到链表成环 快慢双指针
    public boolean isHappy(int n) {
        int slow = n;
        int fast = bitSum(n);
        while (slow != fast) {
            slow = bitSum(slow);
            fast = bitSum(fast);
            fast = bitSum(fast);
        }
        if (slow == 1) {
            return true;
        } else {
            return false;
        }
    }

    // 返回这个数的各数位的平方和
    private int bitSum(int n) {
        int sum = 0;
        while (n > 0) {
            int tmp = n % 10;
            sum += tmp * tmp;
            n /= 10;
        }
        return sum;
    }

    // 11
    public int maxArea(int[] height) {
        int left = 0;
        int right = height.length - 1;
        int max = -1;
        int index = 0;
        while (left <= right) {
            int width = right - left;
            int v = width * Math.min(height[left], height[right]);
            max = Math.max(max, v);
            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }
        return max;
    }
}
