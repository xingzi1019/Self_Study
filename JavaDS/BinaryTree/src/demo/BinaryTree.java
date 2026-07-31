package demo;

import java.util.LinkedList;
import java.util.Queue;

public class BinaryTree {
    static class TreeNode {
        public char val;
        public TreeNode left;
        public TreeNode right;

        public TreeNode(char val) {
            this.val = val;
        }
    }

    public TreeNode root;

    public TreeNode createTree() {
        TreeNode A = new TreeNode('A');
        TreeNode B = new TreeNode('B');
        TreeNode C = new TreeNode('C');
        TreeNode D = new TreeNode('D');
        TreeNode E = new TreeNode('E');
        TreeNode F = new TreeNode('F');
        TreeNode G = new TreeNode('G');
        TreeNode H = new TreeNode('H');

        A.left = B;
        A.right = C;
        B.left = D;
        B.right = E;
        E.right = H;
        C.left = F;
        C.right = G;

        return A;
    }

    // 前序遍历
    public void preOrder(TreeNode root) {
        if (root == null) {
            return;
        }
        System.out.print(root.val + " ");
        preOrder(root.left);
        preOrder(root.right);
    }

    // 中序遍历
    public void inOrder(TreeNode root) {
        if (root == null) {
            return;
        }
        inOrder(root.left);
        System.out.print(root.val);
        inOrder(root.right);
    }

    // 后序遍历
    public void postOrder(TreeNode root) {
        if (root == null) {
            return;
        }
        postOrder(root.left);
        postOrder(root.right);
        System.out.print(root.val + " ");
    }

    public static int countSize = 0;

    // 获取树中节点的个数
    public void size(TreeNode root) {
        if (root == null) {
            return;
        }
        countSize++;
        size(root.left);
        size(root.right);
    }

    // 子问题统计节点的个数
    public int nodeSize(TreeNode root) {
        if (root == null) {
            return 0;
        }
        return nodeSize(root.left) + nodeSize(root.right) + 1;
    }

    public static int leftCount = 0;

    // 获取叶⼦节点的个数
    public void getLeafNodeCount(TreeNode root) {
        if (root == null)
            return;
        if (root.left == null && root.right == null) {
            leftCount++;
        }
        getLeafNodeCount(root.left);
        getLeafNodeCount(root.right);
    }

    // ⼦问题思路-求叶⼦结点个数
    public int getLeafNodeCount2(TreeNode root) {
        if (root == null)
            return 0;
        if (root.left == null && root.right == null) {
            return 1;
        }
        return getLeafNodeCount2(root.left)
                + getLeafNodeCount2(root.right);
    }

    // 获取第K层节点的个数
    public int getKLevelNodeCount(TreeNode root, int k) {
        if (root == null) {
            return 0;
        }
        if (k == 1) {
            return 1;
        }
        return getKLevelNodeCount(root.left, k - 1) +
                getKLevelNodeCount(root.right, k - 1);
    }

    // 获取⼆叉树的⾼度
    public int getHeight(TreeNode root) {
        if (root == null) {
            return 0;
        }
        return Math.max(getHeight(root.left), getHeight(root.right)) + 1;
    }

    // 检测值为value的元素是否存在
    public TreeNode find(TreeNode root, char val) {
        if (root == null) {
            return null;
        }
        if (root.val == val) {
            return root;
        }
        TreeNode ret = find(root.left, val);
        if (ret != null) {
            return ret;
        }
        TreeNode ret2 = find(root.right, val);
        if (ret2 != null) {
            return ret2;
        }
        return null;
    }

    //层序遍历
    public void levelOrder(TreeNode root) {
        if (root == null) {
            return;
        }
        Queue<TreeNode> qu = new LinkedList<>();
        qu.offer(root);
        while (!qu.isEmpty()) {
            TreeNode cur = qu.poll();
            System.out.print(cur.val + " ");
            if (cur.left != null) {
                qu.offer(cur.left);
            }
            if (cur.right != null) {
                qu.offer(cur.right);
            }
        }
    }

    // 判断⼀棵树是不是完全⼆叉树
    boolean isCompleteTree(TreeNode root) {
        return true;
    }
}
