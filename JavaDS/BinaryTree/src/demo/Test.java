package demo;

import java.util.Queue;

public class Test {
    // 110 判断平衡二叉树优化版 O(N)
    public boolean isBalanced(BinaryTree.TreeNode root) {
        if (root == null) {
            return true;
        }
        return getHeight(root) >= 0;
    }

    private int getHeight(BinaryTree.TreeNode root) {
        if (root == null) {
            return 0;
        }
        int leftH = getHeight(root.left);
        if (leftH < 0) {
            return -1;
        }
        int rightH = getHeight(root.right);
        if (leftH >= 0 && rightH >= 0 && Math.abs(leftH - rightH) <= 1) {
            return leftH > rightH ? leftH + 1 : rightH + 1;
        } else {
            return -1;
        }
    }

    // 110判断平衡二叉树 O(N ^ 2)
    /*public boolean isBalanced(BinaryTree.TreeNode root) {
        if(root == null) {
            return true;
        }
        int leftH = getHeight(root.left);
        int rightH = getHeight(root.right);
        return Math.abs(leftH - rightH) <= 1 && isBalanced(root.left) && isBalanced(root.right);
    }

    private int getHeight(BinaryTree.TreeNode root) {
        if (root == null) {
            return 0;
        }
        return Math.max(getHeight(root.left), getHeight(root.right)) + 1;
    }*/

    // 101 判断是否是对称二叉树
    public boolean isSymmetric(BinaryTree.TreeNode root) {
        if (root == null) {
            return true;
        }
        return isSymmetricChild(root.left, root.right);
    }

    public boolean isSymmetricChild(BinaryTree.TreeNode leftTree, BinaryTree.TreeNode rightTree) {
        if (leftTree == null && rightTree != null || leftTree != null && rightTree == null) {
            return false;
        }
        if (leftTree == null && rightTree == null) {
            return true;
        }
        if (leftTree.val != rightTree.val) {
            return false;
        }
        return isSymmetricChild(leftTree.left, rightTree.right) && isSymmetricChild(leftTree.right, rightTree.left);
    }

    // 226 翻转二叉树
    public BinaryTree.TreeNode invertTree(BinaryTree.TreeNode root) {
        if (root == null) {
            return null;
        }
        // 这样左右子树都为空的时候可以不交换
        if (root.left == null && root.right == null) {
            return root;
        }
        BinaryTree.TreeNode temp = root.left;
        root.left = root.right;
        root.right = temp;
        if (root.left != null) {
            invertTree(root.left);
        }
        if (root.right != null) {
            invertTree(root.right);
        }
        return root;
    }

    // 剪枝优化
    public boolean isSubtree2(BinaryTree.TreeNode root, BinaryTree.TreeNode subRoot) {
        if (root == null) {
            return false;
        }
        // 只有当值相等时，才判断是否为相同的树
        if (root.val == subRoot.val) {
            if (isSameTree(root, subRoot)) {
                return true;
            }
        }
        // 继续递归查找
        return isSubtree(root.left, subRoot) || isSubtree(root.right, subRoot);
    }

    public boolean isSubtree(BinaryTree.TreeNode root, BinaryTree.TreeNode subRoot) {
        if (root == null) {
            return false;
        }
        if (isSameTree(root, subRoot)) {
            return true;
        }
        if (isSubtree(root.left, subRoot)) {
            return true;
        }
        if (isSubtree(root.right, subRoot)) {
            return true;
        }
        return false;
    }

    public boolean isSameTree(BinaryTree.TreeNode p, BinaryTree.TreeNode q) {
        if ((p != null && q == null) || (p == null && q != null)) {
            return false;
        }
        if (p == null && q == null) {
            return true;
        }
        if (p.val != q.val) {
            return false;
        }
        return isSameTree(p.left, q.left) && isSameTree(p.right, q.right);
    }

    public static void main(String[] args) {
        /*
                A
               / \
              B   C
             / \ / \
            D  E F  G
                \
                 H
         */
        BinaryTree binaryTree = new BinaryTree();
        BinaryTree.TreeNode root = binaryTree.createTree();
        binaryTree.preOrder(root);
        System.out.println();
        binaryTree.inOrder(root);
        System.out.println();
        binaryTree.postOrder(root);
        System.out.println();
        System.out.println("=====================");
        System.out.println("节点个数: ");
        binaryTree.size(root);
        System.out.println(BinaryTree.countSize);

        int nodeCount = binaryTree.nodeSize(root);
        System.out.println("节点个数: " + nodeCount); // 8

        binaryTree.getLeafNodeCount(root);
        System.out.println("叶子节点个数: " + BinaryTree.leftCount); // 4

        int kCount = binaryTree.getKLevelNodeCount(root, 3);
        System.out.println("第k层的节点数: " + kCount); // 4

        int height = binaryTree.getHeight(root);
        System.out.println("树的高度为: " + height); // 4

        BinaryTree.TreeNode e = binaryTree.find(root, 'E');
        System.out.println(e.val);

        System.out.println("层序遍历: ");
        binaryTree.levelOrder(root);
    }

    public static void main1(String[] args) {
        // 二叉树时 度为 0 的结点 比度为 2 的结点多一个
        // 推导过程如下:
        // n0 + n1 + n2 = N  结点总数
        // 01 + 2 * n2 = N - 1 边数
        // 联立可得 n0 = n2 + 1
    }
}
