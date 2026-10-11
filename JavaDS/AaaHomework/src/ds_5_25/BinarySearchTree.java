package ds_5_25;

public class BinarySearchTree {

    static class TreeNode {
        public int key;
        public TreeNode left;
        public TreeNode right;

        TreeNode(int key) {
            this.key = key;
        }
    }

    public TreeNode root;

    /**
     * 插入一个元素
     *
     * @param key
     */
    public boolean insert(int key) {
        if (root == null) {
            root = new TreeNode(key);
            return true;
        }
        TreeNode cur = root;
        TreeNode curParent = null;
        while (cur != null) {
            if (cur.key < key) {
                curParent = cur;
                cur = cur.right;
            } else if (cur.key > key) {
                curParent = cur;
                cur = cur.left;
            } else {
                return false;
            }
        }
        TreeNode newNode = new TreeNode(key);
        if (curParent.key < key) {
            curParent.right = newNode;
        } else {
            curParent.left = newNode;
        }
        return true;
    }

    //查找key是否存在
    public TreeNode search(int key) {
        if (root == null) {
            return null;
        }
        TreeNode cur = root;
        while (cur != null) {
            if (cur.key > key) {
                cur = cur.left;
            } else if (cur.key < key) {
                cur = cur.right;
            } else {
                return cur;
            }
        }
        return null;
    }

    //删除key的值
    public boolean remove(int key) {
        if (root == null) {
            return false;
        }
        TreeNode cur = root;
        TreeNode parent = null;
        while (cur != null) {
            if (cur.key < key) {
                parent = cur;
                cur = cur.right;
            } else if (cur.key > key) {
                parent = cur;
                cur = cur.left;
            } else {
                break;
            }
        }
        if (cur == null) {
            return false;
        }
        if (cur.left == null) {
            if (parent == null) {
                root = cur.right;
            } else if (parent.left == cur) {
                parent.left = cur.right;
            } else {
                parent.right = cur.right;
            }
        }
        else if (cur.right == null) {
            if (parent == null) {
                root = cur.left;
            } else if (parent.left == cur) {
                parent.left = cur.left;
            } else {
                parent.right = cur.left;
            }
        }
        else {
            TreeNode successor = cur.right;
            TreeNode successorParent = cur;
            while (successor.left != null) {
                successorParent = successor;
                successor = successor.left;
            }
            cur.key = successor.key;
            if (successorParent.left == successor) {
                successorParent.left = successor.right;
            } else {
                successorParent.right = successor.right;
            }
        }
        return true;
    }
}
