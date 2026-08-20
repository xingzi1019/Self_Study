package demo;

public class TestHeap {
    public int[] elem;
    public int usedSize;

    public TestHeap() {
        this.elem = new int[10];
    }

    public void init(int[] array) {
        for (int i = 0; i < array.length; i++) {
            elem[i] = array[i];
            usedSize++;
        }
    }

    /**
     * 创建堆
     * 时间复杂度: O(N) 这里比较难
     * 最坏的情况即，从根⼀路⽐较到叶⼦，⽐较的次数为完全⼆叉树的⾼度
     */
    public void createHeap() {
        // 这里根节点的下标为 0 (有些老师会弄成1)
        for (int parent = (usedSize - 1 - 1) / 2; parent >= 0; parent--) {
            siftDown(parent, usedSize);
        }
    }

    /**
     * 向下调整算法
     *
     * @param parent   父
     * @param usedSize 有效长度
     */
    private void siftDown(int parent, int usedSize) {
        // 先得到左孩子的下标
        int child = parent * 2 + 1;
        while (child < usedSize) {
            // 比较两个孩子哪个比较大
            if ((child + 1 < usedSize) && (elem[child] < elem[child + 1])) {
                child++;
            }
            // 左右孩子和根节点比较 如果大于根节点就进行交换
            if (elem[child] > elem[parent]) {
                swap(elem, child, parent);
                // 下面这两行代码非常关键
                parent = child;
                child = 2 * parent + 1;
            } else {
                // 如果不大于就直接结束
                break;
            }
        }
    }

    // 交换元素
    private void swap(int[] elem, int child, int parent) {
        int tmp = elem[child];
        elem[child] = elem[parent];
        elem[parent] = tmp;
    }

    // 向上调整算法
    private void siftUp(int parent,int usedSize) {

    }
}
