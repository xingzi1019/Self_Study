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

    // 30
    public static List<Integer> findSubstring1(String s, String[] words) {
        // 把步长的字符串当做是一个元素的话 简直就是上一题的异位词 哈希表 + 滑动窗口
        List<Integer> list = new ArrayList<>();
        HashMap<String, Integer> hashMap1 = new HashMap<>();
        int len = words[0].length(); // 步长
        int count = 0;
        for (String str : words) {
            hashMap1.put(str, hashMap1.getOrDefault(str, 0) + 1);
            count++;
        }
        int wordLen = count * len;
        for (int i = 0; i < len; i++) {
            HashMap<String, Integer> hashMap2 = new HashMap<>();
            for (int left = 0 + i, right = left; right + len <= s.length(); ) {
                String t = s.substring(right, right + len);
                hashMap2.put(t, hashMap2.getOrDefault(t, 0) + 1);
                if (right - left >= wordLen) { // 有 + 1 就不用 = 没 + 1 才需要 =
                    String tmp = s.substring(left, left + len);
                    hashMap2.put(tmp, hashMap2.get(tmp) - 1);
                    if (hashMap2.get(tmp) == 0) {
                        hashMap2.remove(tmp);
                    }
                    left += len;
                }
                if (hashMap2.equals(hashMap1)) {
                    list.add(left);
                    String tmp = s.substring(left, left + len);
                    hashMap2.put(tmp, hashMap2.get(tmp) - 1);
                    if (hashMap2.get(tmp) == 0) {
                        hashMap2.remove(tmp);
                    }
                    left += len;
                }
                right += len;
            }
        }
        return list;
    }

    public static List<Integer> findSubstring(String s, String[] words) {
        // 更加漂亮的代码
        List<Integer> list = new ArrayList<>();
        Map<String, Integer> hash1 = new HashMap<>();
        for (String str : words) {
            hash1.put(str, hash1.getOrDefault(str, 0) + 1);
        }
        int len = words[0].length(), m = words.length;
        for (int i = 0; i < len; i++) {
            Map<String, Integer> hash2 = new HashMap<String, Integer>();
            for (int left = i, right = i, count = 0; right + len <= s.length(); right += len) {
                String in = s.substring(right, right + len);
                hash2.put(in, hash2.getOrDefault(in, 0) + 1);
                if (hash2.get(in) <= hash1.getOrDefault(in, 0)) {
                    count++;
                }
                if (right - left + 1 > len * m) {
                    String out = s.substring(left, left + len);
                    if (hash2.get(out) <= hash1.getOrDefault(out, 0)) {
                        count--;
                    }
                    hash2.put(out, hash2.get(out) - 1);
                    left += len;
                }
                if (count == m) {
                    list.add(left);
                }
            }
        }
        return list;
    }

    // 76
    public static String minWindow1(String ss, String tt) {
        // 使用已有容器
        if (ss == null || tt == null || ss.length() < tt.length()) {
            return "";
        }
        char[] s = ss.toCharArray(), t = tt.toCharArray();
        HashMap<Character, Integer> need = new HashMap<>();
        HashMap<Character, Integer> window = new HashMap<>();
        for (char c : t) {
            need.put(c, need.getOrDefault(c, 0) + 1);
        }
        int left = 0, right = 0, count = 0;
        int minLen = Integer.MAX_VALUE;
        int start = 0;
        while (right < s.length) {
            char c = s[right++];
            if (need.containsKey(c)) { // 代码能力 学会这么处理
                window.put(c, window.getOrDefault(c, 0) + 1);
                if (window.get(c).intValue() == need.get(c).intValue()) {
                    count++;
                }
            }
            while (count == need.size()) {
                if (right - left + 1 <= minLen) {
                    minLen = right - left;
                    start = left;
                }
                char d = s[left++];
                if (need.containsKey(d)) {
                    if (window.get(d).intValue() == need.get(d).intValue()) {
                        count--;
                    }
                    window.put(d, window.get(d) - 1);
                }
            }
        }
        return minLen == Integer.MAX_VALUE ? "" : ss.substring(start, start + minLen);
    }

    public static String minWindow(String ss, String tt) {
        char[] s = ss.toCharArray();
        char[] t = tt.toCharArray();
        int[] hash1 = new int[128]; // 统计字符串 t 中每⼀个字符的频次
        int kinds = 0; // 统计有效字符有多少种
        for (char ch : t) {
            if (hash1[ch]++ == 0) {
                kinds++;
            }
        }
        int[] hash2 = new int[128]; // 统计窗⼝内每个字符的频次
        int minlen = Integer.MAX_VALUE, begin = -1;
        for (int left = 0, right = 0, count = 0; right < s.length; right++) {
            char in = s[right];
            if (++hash2[in] == hash1[in]) {
                count++; // 进窗⼝ + 维护 count
            }
            while (count == kinds) {
                if (right - left + 1 < minlen) {
                    minlen = right - left + 1;
                    begin = left;
                }
                char out = s[left++];
                if (hash2[out]-- == hash1[out]) count--; // 出窗⼝ + 维护 count
            }
        }
        if (begin == -1) {
            return new String();
        } else {
            return ss.substring(begin, begin + minlen);
        }
    }

    public static void main() {
        String s = "ADOBECODEBANC";
        String t = "ABC";
        String ret = minWindow(s, t);
        System.out.println(ret);
    }
}
