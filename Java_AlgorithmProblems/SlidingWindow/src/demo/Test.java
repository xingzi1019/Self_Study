package demo;

public class Test {
    public static void main() {
        int[] nums = {1,1,1,0,0,0,1,1,1,1,0};
        int ret = Solution.longestOnes(nums,2);
        System.out.println(ret);
    }
}
