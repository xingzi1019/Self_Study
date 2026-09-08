package demo;

import java.util.Arrays;

// 不理解或者有啥疑问就回去看算法竞赛课程的讲解
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

    // 堆的插⼊总共需要两个步骤：
    // 1. 先将元素放⼊到底层空间中(注意：空间不够时需要扩容)
    // 2. 将最后新插⼊的节点向上调整，直到满⾜堆的性质

    private void offer(int val) {
        if (isFull()) {
            elem = Arrays.copyOf(elem, 2 * elem.length);
        }
        elem[usedSize] = val;
        siftUp(usedSize);
        usedSize++;
    }

    public void siftUp(int child) {
        // 当 child = 0 时：
        // parent = (0 - 1) / 2 = 0（Java 中 -1/2 = 0）
        while (child > 0) {
            int parent = (child - 1) / 2;
            if (elem[child] > elem[parent]) {
                swap(elem, child, parent);
                child = parent;
            } else {
                break;
            }
        }
        // 时间复杂度(log N)
    }

    public boolean isFull() {
        return usedSize == elem.length;
    }

    // 注意：堆的删除⼀定删除的是堆顶元素
    public int poll() {
        if(isEmpty()) {
            return -1;
        }
        int ret = elem[0];
        swap(elem,0,usedSize-1);
        usedSize--;
        siftDown(0,usedSize);
        return ret;
    }

    public boolean isEmpty() {
        return usedSize == 0;
    }
}
