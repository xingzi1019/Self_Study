package demo;

import java.util.HashSet;

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

    // 3
    public static int lengthOfLongestSubstring1(String s) {
        // 本质暴力 O(N^2)
        int n = s.length();
        if (n == 0) return 0;
        if (n == 1) return 1;
        HashSet<Character> set = new HashSet<>();
        int left = 0, right = 0, maxLen = Integer.MIN_VALUE;
        while (left <= n - 1 && right <= n - 1) {
            char t = s.charAt(right);
            if (!set.contains(t)) {
                set.add(t);
                maxLen = Math.max(maxLen, right - left + 1);
                right++;
            } else {
                while (s.charAt(left) != s.charAt(right)) {
                    left++;
                }
                left++;
                right = left;
                set.clear();
            }
        }
        return maxLen;
    }

    public static int lengthOfLongestSubstring(String s) {
        HashSet<Character> set = new HashSet<>();
        int left = 0, right = 0, maxLen = 0;
        while (right < s.length()) {
            char t = s.charAt(right);
            if (!set.contains(t)) {
                set.add(t);
                maxLen = Math.max(maxLen, right - left + 1);
                right++;
            } else {
                set.remove(s.charAt(left));
                left++;
            }
        }
        return maxLen;
    }

    /**
     * 1004
     *
     * @param nums 0 1 数组
     * @param k    可 0 - > 1 的个数
     * @return 最长连续1的个数
     */
    public static int longestOnes(int[] nums, int k) {
        int count = 0, n = nums.length;
        int maxLen = Integer.MIN_VALUE;
        int left = 0, right = 1;
        if (nums[left] == 0) count++;
        while (left < right && right < n) {
            if (nums[right] == 0) {
                count++;
            }
            if (count <= k) {
                maxLen = Math.max(maxLen, right - left + 1);
                right++;
            } else {
                if (nums[left] == 0) {
                } else {
                    while (left < right && nums[left] != 0) {
                        left++;
                    }
                }
                left++;right++;count--;
            }
        }
        return maxLen;
    }

    public static void main() {
        // int[] nums = {1,1,1,0,0,0,1,1,1,1,0};
        int[] nums = {0, 0, 1, 1, 0, 0, 1, 1, 1, 0, 1, 1, 0, 0, 0, 1, 1, 1, 1};
        int ret = longestOnes(nums, 3);
        System.out.println(ret);
    }
}
