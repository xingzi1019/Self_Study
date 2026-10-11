package ds_5_27;

import java.util.*;

public class Solution {
    // 692
    public List<String> topKFrequent(String[] words, int k) {
        Map<String, Integer> map = new HashMap<>();
        for (int i = 0; i < words.length; i++) {
            map.put(words[i], map.getOrDefault(words[i], 0) + 1);
        }
        List<String> list = new ArrayList<>(map.keySet());
        list.sort(new Comparator<String>() {
            @Override
            public int compare(String a, String b) {
                Integer va = map.get(a);
                Integer vb = map.get(b);
                if (va == vb) {
                    return a.compareTo(b);
                } else {
                    return vb.compareTo(va);
                }
            }
        });
        return list.subList(0, k);
    }

    // 611
    public int triangleNumber(int[] nums) {
        Arrays.sort(nums);
        int count = 0;
        int n = nums.length;
        for (int c = n - 1; c >= 2; c--) {
            int left = 0, right = c - 1;
            while (left < right) {
                // [1 2 3 4 5 6 7 9]
                if (nums[left] + nums[right] > nums[c]) {
                    count += right - left;
                    right--;
                } else {
                    left++;
                }
            }
        }
        return count;
    }

    // LCR 179
    public int[] twoSum(int[] price, int target) {
        int n = price.length;
        int left = 0, right = n - 1;
        while (left < right) {
            int sum = price[left] + price[right];
            if (sum > target) {
                right--;
            } else if (sum < target) {
                left++;
            } else {
                return new int[]{price[left], price[right]};
            }
        }
        return new int[]{0};
    }
}
