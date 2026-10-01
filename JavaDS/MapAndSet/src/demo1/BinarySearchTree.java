package demo1;

// 二叉搜索树
// 左 < 根 < 右
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

    // 插入
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

    // 删除 分很多种情况来讨论在 removeNode() 这个函数里面
    public void remove(int val) {
        // 先把val找出来
        if (root == null) {
            return;
        }
        TreeNode cur = root;
        TreeNode parent = null;
        while (cur != null) {
            if (cur.val < val) {
                parent = cur;
                cur = cur.right;
            } else if (cur.val > val) {
                parent = cur;
                cur = cur.left;
            } else {
                removeNode(parent, cur);
                return;
            }
        }
    }

    // 删除节点 难点
    private void removeNode(TreeNode parent, TreeNode cur) {
        if (cur.left == null) {
            if (cur == root) {
                root = cur.right;
            } else if (cur == parent.left) {
                parent.left = cur.right;
            } else {
                parent.right = cur.right;
            }
        } else if (cur.right == null) {
            if (cur == root) {
                root = cur.left;
            } else if (cur == parent.left) {
                parent.left = cur.left;
            } else {
                parent.right = cur.left;
            }
        } else {
            // 左右都不为空 替换删除
            // 找cur左树最右边的节点 或者cur右树最左边的节点来交换
            TreeNode target = cur.right;
            TreeNode targetParent = cur;
            while (target.left != null) {
                targetParent = target;
                target = target.left;
            }
            cur.val = target.val;
            // 这样子分类是非常好理解的
            if (target == targetParent.left) {
                targetParent.left = target.right;
            } else {
                targetParent.right = target.right;
            }
        }
    }
}
