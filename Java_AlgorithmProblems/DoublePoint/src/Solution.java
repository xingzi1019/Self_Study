import java.util.ArrayList;
import java.util.Arrays;
import java.util.LinkedList;
import java.util.List;

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

    //15
    public List<List<Integer>> threeSum(int[] nums) {
        List<List<Integer>> list = new LinkedList<>();
        if (nums == null || nums.length < 3) {
            return list;
        }
        Arrays.sort(nums);
        for (int i = 0; i < nums.length - 2 && nums[i] <= 0; i++) {
            // 跳过重复的第一个数
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }
            int left = i + 1;
            int right = nums.length - 1;
            int target = -nums[i];
            while (left < right) {
                int sum = nums[left] + nums[right];
                if (sum == target) {
                    list.add(Arrays.asList(nums[i], nums[left], nums[right]));
                    // 跳过重复的第二个数
                    while (left < right && nums[left] == nums[left + 1]) {
                        left++;
                    }
                    // 跳过重复的第三个数
                    while (left < right && nums[right] == nums[right - 1]) {
                        right--;
                    }
                    left++;
                    right--;
                } else if (sum < target) {
                    left++;
                } else {
                    right--;
                }
            }
        }
        return list;
    }

    public List<List<Integer>> threeSum2(int[] nums) {
        List<List<Integer>> ret = new ArrayList<>();
        Arrays.sort(nums);
        int n = nums.length;
        for (int i = 0; i < n && nums[i] <= 0; i++) {
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }
            int left = i + 1, right = n - 1, target = -nums[i];
            while (left < right) {
                int sum = nums[left] + nums[right];
                if (sum < target) {
                    left++; // 这里可能会l == r 但是不至于越界
                } else if (sum > target) {
                    right--; // 和上面一样
                } else {
                    List<Integer> hang = new ArrayList<>();
                    hang.add(nums[left]);
                    hang.add(nums[right]);
                    hang.add(nums[i]);
                    ret.add(hang);
                    right--;
                    left++;
                    // 下面这里其实是在去重了
                    while (left < right && nums[left] == nums[left - 1]) {
                        left++;
                    }
                    while (left < right && nums[right] == nums[right + 1]) {
                        right--;
                    }
                }
            }
        }
        return ret;
    }

    // 18
    public List<List<Integer>> fourSum(int[] nums, int target) {
        Arrays.sort(nums);
        List<List<Integer>> ret = new ArrayList<>();
        int n = nums.length;
        for (int i = 0; i <= n - 4; i++) {
            // i 要去重  -----> 自己竟然忘记了
            if(i > 0 && nums[i] == nums[i-1]) {
                continue;
            }
            long need = target - nums[i];
            for (int j = i + 1; j <= n - 3; j++) {
                // j 也去重
                if(j > i + 1 && nums[j] == nums[j-1]) {
                    continue;
                }
                long needSum = need - nums[j];
                int left = j + 1,right = n-1;
                while(left < right) {
                    int sum = nums[left] + nums[right];
                    if(sum < needSum) {
                        left++;
                    } else if(sum > needSum) {
                        right--;
                    } else {
                        List<Integer> temp = new ArrayList<>();
                        temp.add(nums[i]);temp.add(nums[j]);temp.add(nums[left]);temp.add(nums[right]);
                        ret.add(temp);
                        left++;
                        right--;
                        // 同样是去重
                        while(left < right && nums[left] == nums[left-1]) {
                            left++;
                        }
                        while(left < right && nums[right] == nums[right+1]) {
                            right--;
                        }
                    }
                }
            }
        }
        return ret;
        // 因为有下面这种例子 所以 need 和 needSum 要改 long 而不是 int
        // [1000000000,1000000000,1000000000,1000000000]
        // t = -294967296
    }
}