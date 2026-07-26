package demo;

public class Test {
    public static void main(String[] args) {
        BinaryTree binaryTree = new BinaryTree();
        BinaryTree.TreeNode root = binaryTree.createTree();
        binaryTree.preOrder(root);
        System.out.println();
    }

    public static void main1(String[] args) {
        // 二叉树时 度为 0 的结点 比度为 2 的结点多一个
        // 推导过程如下:
        // n0 + n1 + n2 = N  结点总数
        // 01 + 2 * n2 = N - 1 边数
        // 联立可得 n0 = n2 + 1
    }
}
