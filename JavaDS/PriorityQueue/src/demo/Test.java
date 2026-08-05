package demo;

public class Test {
    // 堆是⼀棵完全⼆叉树 因此可以层序的规则采⽤顺序的⽅式来⾼效存储
    // 小根堆 根小
    // 大根堆 根大
    public static void main(String[] args) {
        TestHeap testHeap = new TestHeap();
        int[] array = {27, 15, 19, 18, 28, 34, 65, 49, 25, 37};
        testHeap.init(array);
        testHeap.createHeap();
    }
}
