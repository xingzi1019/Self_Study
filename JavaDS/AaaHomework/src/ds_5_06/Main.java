package ds_5_06;

import java.util.*;

// NewCoder 二叉树遍历

class TreeNode {
    public char val;
    public TreeNode left;
    public TreeNode right;

    public TreeNode(char val) {
        this.val = val;
    }
}

public class Main {
    public List<List<Integer>> levelOrderBottom(TreeNode root) {
        List<List<Integer>> res = new ArrayList<>();
        if (root == null) {
            return res;
        }
        Queue<TreeNode> q = new LinkedList<>();
        q.offer(root);
        while (!q.isEmpty()) {
            List<Integer> level = new ArrayList<>();
            int size = q.size();
            for (int i = 0; i < size; i++) {
                TreeNode tmp = q.poll();
                level.add((int) tmp.val);
                if(tmp.left != null) {
                    q.offer(tmp.left);
                }
                if(tmp.right != null) {
                    q.offer(tmp.right);
                }
            }
            res.add(level);
        }
        Collections.reverse(res);
        return res;
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        // 注意 hasNext 和 hasNextLine 的区别
        while (in.hasNextLine()) { // 注意 while 处理多个 case
            String str = in.nextLine();
            TreeNode root = createTree(str);
            inorder(root);
        }
    }

    public static int i = 0;

    public static TreeNode createTree(String str) {
        char ch = str.charAt(i);
        TreeNode root = null;
        if (ch != '#') {
            root = new TreeNode(ch);
            i++;
            root.left = createTree(str);
            root.right = createTree(str);
        } else {
            i++;
        }
        return root;
    }

    public static void inorder(TreeNode root) {
        if (root == null) {
            return;
        }
        inorder(root.left);
        System.out.print(root.val + " ");
        inorder(root.right);
    }
}
