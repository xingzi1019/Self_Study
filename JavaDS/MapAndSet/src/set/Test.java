package set;

public class Test {
    // TreeSet 和 TreeMap 是搜索树 红黑树
    // HashSet 和 HashMap 是哈希表

    /*
    ⼆叉搜索树⼜称⼆叉排序树，它或者是⼀棵空树，或者是具有以下性质的⼆叉树:
    • 若它的左⼦树不为空，则左⼦树上所有节点的值都⼩于根节点的值
    • 若它的右⼦树不为空，则右⼦树上所有节点的值都⼤于根节点的值
    • 它的左右⼦树也分别为⼆叉搜索树
     */
    //
    public static void main(String[] args) {
        BinarySearchTree binarySearchTree = new BinarySearchTree();
        int[] array = {30, 20, 50, 40, 60};
        for (int i = 0; i < array.length; i++) {
            binarySearchTree.insert(array[i]);
        }
        BinarySearchTree.TreeNode treeNode = binarySearchTree.search(30);
        System.out.println(treeNode.val); // 30
    }
}
