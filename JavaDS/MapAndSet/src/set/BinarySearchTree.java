package set;

// 二叉搜索树
public class BinarySearchTree {
    // 静态内部类
    static class TreeNode {
        public int val;
        public TreeNode left;
        public TreeNode right;

        public TreeNode(int val) {
            this.val = val;
        }
    }

    public TreeNode root;

    // 查找节点 效率还是蛮高的 但如果是斜树就 O(N) 最好情况是满二叉树或者完全二叉树
    public TreeNode search(int key) {
        if (root == null) {
            return null;
        }
        TreeNode cur = root;
        while (cur != null) {
            if (cur.val < key) cur = cur.right;
            else if (cur.val == key) return cur;
            else cur = cur.left;
        }
        return null;
    }

    // 普通搜索树可以通过旋转操作来平衡二叉树 使其变成AVL 平衡树
    // 如果不考虑平衡像斜树就会退化成链表

    public boolean insert(int val) {
        if (root == null) {
            root = new TreeNode(val);
            return true;
        }
        TreeNode cur = root;
        TreeNode parent = null;
        TreeNode node = new TreeNode(val);
        // 找到父亲节点
        while (cur != null) {
            if (cur.val < val) {
                parent = cur;
                cur = cur.right;
            } else if (cur.val > val) {
                parent = cur;
                cur = cur.left;
            } else {
                return false;// 相同的值不能插入
            }
        }
        // 插入节点
        if (parent.val > val) {
            parent.left = node;
        } else {
            parent.right = node;
        }
        return true;
    }
}
