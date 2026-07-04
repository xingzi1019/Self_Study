package mnnujava;

import java.util.Arrays;

public class Test {
    public static void main(String[] args) {
        int[]a = new int[]{3, 1, 64, 46, 59, 92};
        int[] b = Arrays.copyOfRange(a, 3, 5);
        System.out.println(Arrays.binarySearch(a, 46)); // -3
        Arrays.sort(a);
        System.out.println(Arrays.binarySearch(a, 46)); // 2
        System.out.println(Arrays.binarySearch(a, 100)); // -7
        System.out.println(b[0]); // 46
        System.out.println(b.length); // 2
        Arrays.fill(b, 100);
        System.out.println(b[0]); // 100
    }
}
