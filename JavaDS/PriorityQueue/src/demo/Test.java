package demo;
 /**
 * 关于PriorityQueue的使⽤要注意：
 * 1. 使⽤时必须导⼊ PriorityQueue 所在的包，即：
 *    import java.util.PriorityQueue;
 * 2. PriorityQueue 中放置的元素必须要能够⽐较⼤⼩，不能插⼊⽆法⽐较⼤⼩的对象，否则会抛出 ClassCastException 异常
 * 3. 不能插⼊ null 对象，否则会抛出 NullPointerException
 * 4. 没有容量限制，可以插⼊任意多个元素，其内部可以⾃动扩容
 * 5. 插⼊和删除元素的时间复杂度为 O(log n)
 * 6. PriorityQueue底层使⽤了 堆 数据结构
 * 7. PriorityQueue默认情况下是⼩堆---即每次获取到的元素都是最⼩的元素
 */

import java.util.PriorityQueue;
// PriorityQueue是线程不安全的，PriorityBlockingQueue是线程安全的
public class Test {
    public static void main() {
        PriorityQueue<Integer> priorityQueue = new PriorityQueue<>();
        priorityQueue.offer(10);
        priorityQueue.offer(3);
        priorityQueue.offer(1);
        priorityQueue.offer(9);
    }
    // 堆是⼀棵完全⼆叉树 因此可以层序的规则采⽤顺序的⽅式来⾼效存储
    // 小根堆 根小
    // 大根堆 根大
    public static void main1(String[] args) {
        TestHeap testHeap = new TestHeap();
        int[] array = {27, 15, 19, 18, 28, 34, 65, 49, 25, 37};
        testHeap.init(array);
        testHeap.createHeap();
        System.out.println(testHeap.poll());
    }
}
