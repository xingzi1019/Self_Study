public class Solution {
    // 滑动窗口其实是同向双指针

    // 209
    public static int minSubArrayLen(int target, int[] nums) {
        // 这才是牛逼哄哄的代码
        int n = nums.length;
        if (n == 0) {
            return 0;
        }
        int left = 0, right = 0;
        int minLen = Integer.MAX_VALUE;
        int sum = 0;
        while (right < n) {
            sum += nums[right];  // 扩大窗口
            while (sum >= target) {  // 满足条件时收缩窗口
                minLen = Math.min(minLen, right - left + 1);
                sum -= nums[left];
                left++;
            }
            right++;  // 继续扩大窗口
        }
        return minLen == Integer.MAX_VALUE ? 0 : minLen;
    }

}
