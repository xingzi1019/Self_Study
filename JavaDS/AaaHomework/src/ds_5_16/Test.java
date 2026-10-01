package ds_5_16;

class TreeNode {
    int val = 0;
    TreeNode left = null;
    TreeNode right = null;

    public TreeNode(int val) {
        this.val = val;

    }

}

public class Test {
    private TreeNode pre = null;
    private TreeNode head = null; // 最小节点 也是链表的头结点

    public TreeNode Convert(TreeNode pRootOfTree) {
        if (pRootOfTree == null) {
            return null;
        }
        dfs(pRootOfTree);
        return head;
    }

    // 中序遍历 左--根--右
    private void dfs(TreeNode cur) {
        if (cur == null) {
            return;
        }
        dfs(cur.left);
        if (pre == null) {
            head = cur;
        } else {
            pre.right = cur;
            cur.left = pre;
        }
        pre = cur;
        dfs(cur.right);
    }
}
