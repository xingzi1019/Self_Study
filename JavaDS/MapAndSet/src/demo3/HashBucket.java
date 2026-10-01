package demo3;

// 哈希桶
// 发现只是适用于 int 类型
public class HashBucket {
    // 静态内部类
    static class Node {
        public int key;
        public int val;
        public Node next;

        public Node(int key, int val) {
            this.val = val;
            this.key = key;
        }
    }

    public Node[] array;
    public int usedSize;

    public HashBucket() {
        array = new Node[10];
    }

    // 定义负载因子极限值
    public static final double LOAD_FACTOR = 0.75F;

    public void push(int key, int val) {
        int index = key % array.length; // 除留余数法
        Node cur = array[index];
        while (cur != null) {
            if (cur.key == key) {
                cur.val = val;
                return;
            }
            cur = cur.next;
        }
        // 这里我们用头插
        Node node = new Node(key, val);
        // 单向链表
        node.next = array[index];
        array[index] = node;
        usedSize++;
        if (calcLoadFactor() >= LOAD_FACTOR) {
            // 扩容 : 需要把原本的每个结点都重新哈希计算一遍
            reSize();
        }
    }

    private void reSize() {
        Node[] newArray = new Node[array.length * 2];
        // 重新哈希
        for (int i = 0; i < array.length; i++) {
            Node cur = array[i];
            while (cur != null) {
                int newIndex = cur.key % newArray.length;
                // 开始头插
                // 这里不是 new 新节点，而是把旧链上的节点“摘下来、搬过去
                Node curN = cur.next;
                cur.next = newArray[newIndex];
                newArray[newIndex] = cur;
                cur = curN;
            }
        }
        array = newArray;
    }

    private double calcLoadFactor() {
        // 计算当前的负载因子
        return usedSize * 1.0 / array.length;
    }

    public int get(int key) {
        int index = key % array.length;
        Node cur = array[index];
        while (cur != null) {
            if (cur.key == key) {
                return cur.val;
            }
            cur = cur.next;
        }
        return -1;
    }
}
