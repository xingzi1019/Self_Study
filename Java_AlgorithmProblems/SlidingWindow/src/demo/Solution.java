package demo;

import java.util.*;

// 一切都是从暴力想出来的 再优化 怎么想到使用滑动窗口才是最值得锻炼的 当然代码能力一定要有
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
     * 转化为找出最长的子数组 其中0的个数不超过 k
     *
     * @param nums 0 1 数组
     * @param k    可 0 - > 1 的个数
     * @return 最长连续1的个数
     */
    public static int longestOnes(int[] nums, int k) {
        /*int count = 0, n = nums.length;
        int maxLen = 0;
        int left = 0, right = 1;
        if(n == 0) {
            return 0;
        }
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
        return maxLen;*/
        int n = nums.length;
        int count = 0, maxLen = 0, left = 0;
        for (int right = 0; right < n; right++) {
            if (nums[right] == 0) count++;
            while (count > k) {
                if (nums[left] == 0) count--;
                left++;
            }
            maxLen = Math.max(maxLen, right - left + 1);
        }
        return maxLen;
    }

    // 1658
    public static int minOperations(int[] nums, int x) {
        // 转换成和为定值的最长子数组
        int n = nums.length;
        int numsSum = 0;
        for (int num : nums) {
            numsSum += num;
        }
        if (numsSum < x) {
            return -1;
        }
        int need = numsSum - x;
        int left = 0, right = 0;
        int sum = 0;
        int maxLen = -1;
        while (right < n) {
            sum += nums[right];
            while (sum > need && left <= right) {
                sum -= nums[left];
                left++;
            }
            if (sum == need) {
                maxLen = Math.max(maxLen, right - left + 1);
            }
            right++;
        }
        return maxLen == -1 ? -1 : n - maxLen;
    }

    // 904
    public int totalFruit(int[] fruits) {
        // 找出一个最长的子数组 其中子数组中不超过两种类型
        // 出窗口比较难 需要移动到减少了一个种类的下标位置
        Map<Integer, Integer> map = new HashMap<>(); // 想不到用两个关键字 一直想的是用一个关键字
        int n = fruits.length, ret = 1;
        for (int left = 0, right = 0; right < n; right++) {
            int in = fruits[right];
            map.put(in, map.getOrDefault(in, 0) + 1);
            while (map.size() > 2) {
                int out = fruits[left];
                map.put(out, map.get(out) - 1);
                if (map.get(out) == 0) {
                    map.remove(out);
                }
                left++;
            }
            ret = Math.max(ret, right - left + 1);
        }
        return ret;
    }

    public int totalFruit2(int[] f) {
        int n = f.length;
        int[] hash = new int[n + 1]; // 统计窗⼝内⽔果的种类
        int ret = 0;
        for (int left = 0, right = 0, kinds = 0; right < n; right++) {
            int in = f[right];
            if (hash[in] == 0) kinds++;
            while (kinds > 2) {
                int out = f[left];
                hash[out]--;
                if (hash[out] == 0) kinds--;
                left++;
            }
            ret = Math.max(ret, right - left + 1);
        }
        return ret;
    }

    // 438
    public List<Integer> findAnagrams1(String s, String p) {
        HashMap<Character, Integer> map1 = new HashMap<>();
        HashMap<Character, Integer> map2 = new HashMap<>();
        List<Integer> list = new ArrayList<>();
        char[] arrP = p.toCharArray();
        int pLen = p.length();
        for (int i = 0; i < pLen; i++) {
            map1.put(arrP[i], map1.getOrDefault(arrP[i], 0) + 1);
        }
        int left = 0, right = 0;
        int sLen = s.length();
        char[] arrS = s.toCharArray();
        while (right < sLen) {
            map2.put(arrS[right], map2.getOrDefault(arrS[right], 0) + 1);
            if (right - left + 1 > pLen) {
                map2.put(arrS[left], map2.get(arrS[left]) - 1);
                if (map2.get(arrS[left]) == 0) {
                    map2.remove(arrS[left]);
                }
                left++;
            }
            if (right - left + 1 == pLen) {
                if (map1.equals(map2)) {
                    list.add(left);
                }
            }
            right++;
        }
        return list;
    }

    public List<Integer> findAnagrams(String ss, String pp) {
        List<Integer> list = new ArrayList<>();
        char[] s = ss.toCharArray();
        char[] p = pp.toCharArray();
        int[] hash1 = new int[26];
        int[] hash2 = new int[26];
        int count1 = 0;
        for (char ch : p) {
            hash1[ch - 'a']++;
            if (hash1[ch - 'a'] == 1) {
                count1++;
            }
        }
        for (int left = 0, right = 0, count = 0; right < s.length; right++) {
            int in = s[right] - 'a';
            hash2[in]++;
            if (hash2[in] == hash1[in]) {
                count++;
            }
            if (right - left + 1 > p.length) {
                int out = s[left] - 'a';
                if (hash2[out] == hash1[out]) {
                    count--;
                }
                hash2[out]--;
                left++;
            }
            if (right - left + 1 == p.length && count == count1) {
                list.add(left);
            }
        }
        return list;
    }

//    // 30
//    public List<Integer> findSubstring(String s, String[] words) {
//
//    }
//
//    // 76

    // 704
    public int search(int[] nums, int target) {
        int n = nums.length;
        int left = 0, right = n - 1;
        int mid;
        while (left < right) {
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

    public static void main() {
        int[] nums = {3, 2, 20, 1, 1, 3};
        int ret = minOperations(nums, 10);
        System.out.println(ret);
    }
}
