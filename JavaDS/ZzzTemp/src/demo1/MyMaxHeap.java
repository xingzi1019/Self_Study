package demo1;

public class MyMaxHeap {
    private int[] heap;
    private int size;   // 当前元素个数（也是下一个插入位置的下标）

    public MyMaxHeap(int capacity) {
        heap = new int[capacity];
        size = 0;
    }

    /**
     * 插入：放尾部 + 向上调整
     */
    public void offer(int val) {
        heap[size] = val;
        siftUp(heap, size);
        size++;
    }

    /**
     * 看堆顶：O(1)
     */
    public int peek() {
        if (size == 0) throw new RuntimeException("堆是空的");
        return heap[0];
    }

    /**
     * 删堆顶：和尾部交换 + 向下调整
     */
    public int poll() {
        if (size == 0) throw new RuntimeException("堆是空的");
        int top = heap[0];
        heap[0] = heap[size - 1];  // 尾部元素顶上去
        size--;                     // 等价于交换后砍掉尾部
        siftDown(heap, 0, size);
        return top;
    }

    public int size() {
        return size;
    }

    public boolean isEmpty() {
        return size == 0;
    }

    public static void siftUp(int[] heap, int i) {
        // i 是当前要调整的节点下标（一般是 size - 1 刚插入的位置）
        while (i > 0) {
            int parent = (i - 1) / 2;
            if (heap[i] > heap[parent]) {  // 大根堆
                swap(heap, i, parent);
                i = parent;                 // 换到父位置 继续和爷爷比
            } else {
                break;                      // 比父节点小了 堆序性恢复 结束
            }
        }
    }

    public static void siftDown(int[] heap, int i, int heapSize) {
        // heapSize 是当前堆的有效长度（排序时堆会越排越小）
        while (true) {
            int left = 2 * i + 1;
            int right = 2 * i + 2;
            int largest = i;  // 先假设自己最大

            // 在自己和左右孩子三者里找最大的
            if (left < heapSize && heap[left] > heap[largest]) {
                largest = left;
            }
            if (right < heapSize && heap[right] > heap[largest]) {
                largest = right;
            }

            if (largest != i) {
                swap(heap, i, largest);
                i = largest;          // 沉到孩子位置 继续和孙子比
            } else {
                break;                // 自己就是最大的 堆序性恢复
            }
        }
    }

    private static void swap(int[] arr, int a, int b) {
        int t = arr[a];
        arr[a] = arr[b];
        arr[b] = t;
    }
}
