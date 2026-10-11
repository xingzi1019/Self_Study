package ds_5_27;

// key-value 模型
public class HashBucket {
    private static class Node {
        private int key;
        private int value;
        Node next;

        public Node(int key, int value) {
            this.key = key;
            this.value = value;
        }
    }

    private Node[] array;
    private int size;   // 当前的数据个数
    private static final double LOAD_FACTOR = 0.75;
    private static final int DEFAULT_SIZE = 8;//默认桶的大小

    public int put(int key, int value) {
        int index = Math.abs(key) % array.length;
        Node cur = array[index];
        while (cur != null) {
            if (cur.key == key) {
                cur.value = value;
                return 0;
            }
            cur = cur.next;
        }
        Node node = new Node(key, value);
        node.next = array[index];
        array[index] = node;
        size++;
        if (loadFactor() >= LOAD_FACTOR) {
            resize();
        }
        return 1;
    }

    private void resize() {
        Node[] nodes = new Node[array.length * 2];
        for(int i = 0;i < array.length;i++) {
            Node cur = array[i];
            while (cur != null) {
                int newIndex = cur.key % nodes.length;
                Node curN = cur.next;
                cur.next = nodes[newIndex];
                nodes[newIndex] = cur;
                cur = curN;
            }
        }
        array = nodes;
    }

    private double loadFactor() {
        return size * 1.0 / array.length;
    }

    public HashBucket() {
        array = new Node[DEFAULT_SIZE];
        size = 0;
    }

    public int get(int key) {
        int index = Math.abs(key) % array.length;
        Node cur = array[index];
        while (cur != null) {
            if (cur.key == key) {
                return cur.value;
            }
            cur = cur.next;
        }
        return -1;
    }
}
