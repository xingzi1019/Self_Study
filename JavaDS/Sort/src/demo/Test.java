package demo;

import java.util.Arrays;

public class Test {
    public static void main(String[] args) {
        int[] array = {31, 12, 13, 41, 54, 66, 27, 18};
        Sort.insertSort(array);
        System.out.println(Arrays.toString(array));
        // [12, 13, 18, 27, 31, 41, 54, 66]
    }
}
