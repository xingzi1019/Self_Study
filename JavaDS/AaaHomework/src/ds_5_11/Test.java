package ds_5_11;

import java.util.Comparator;
import java.util.PriorityQueue;

public class Test {
    public static void main(String[] args) {

    }

    // Java 官方默认是小根堆
    public int[] smallestK(int[] arr, int k) {
        if (k == 0) return new int[0];
        PriorityQueue<Integer> q = new PriorityQueue<>(new Comparator<Integer>() {
            @Override
            public int compare(Integer o1, Integer o2) {
                return o2.compareTo(o1); // 大根堆
            }
        });
        // 先将前 k 个元素放入堆中
        for (int i = 0; i < k; i++) {
            q.offer(arr[i]);
        }
        // 遍历剩余元素，如果比堆顶小则替换
        for (int i = k; i < arr.length; i++) {
            int peekVal = q.peek();
            if (peekVal > arr[i]) {
                q.poll();
                q.offer(arr[i]);
            }
        }
        // 取出堆中元素放入结果数组
        int[] result = new int[k];
        for (int i = 0; i < k; i++) {
            result[i] = q.poll();
        }
        return result;
    }
}
