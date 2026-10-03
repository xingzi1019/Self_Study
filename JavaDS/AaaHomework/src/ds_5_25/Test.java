package ds_5_25;

import java.util.*;

class Node {
    int val;
    Node next;
    Node random;

    public Node(int val) {
        this.val = val;
        this.next = null;
        this.random = null;
    }
}

public class Test {
    // 138
    public Node copyRandomList(Node head) {
        if (head == null) {
            return null;
        }
        HashMap<Node, Node> map = new HashMap<>();
        Node cur = head;
        while (cur != null) {
            Node newNode = new Node(cur.val);
            map.put(cur, newNode);
            cur = cur.next;
        }
        cur = head;
        while (cur != null) {
            map.get(cur).next = map.get(cur.next);
            map.get(cur).random = map.get(cur.random);
            cur = cur.next;
        }
        return map.get(head);
    }

    // 771
    public int numJewelsInStones(String jewels, String stones) {
        int count = 0;
        HashSet<Character> set = new HashSet<>();

        for (int i = 0; i < jewels.length(); i++) {
            char ch = jewels.charAt(i);
            set.add(ch);
        }
        for (int i = 0; i < stones.length(); i++) {
            char ch = stones.charAt(i);
            if (set.contains(ch)) {
                count++;
            }
        }
        return count;
    }

    // 136
    public int singleNumber(int[] nums) {
        HashSet<Integer> set = new HashSet<>();
        for (int i = 0; i < nums.length; i++) {
            if (!set.contains(nums[i])) {
                set.add(nums[i]);

            } else {
                set.remove(nums[i]);
            }
        }
        // 尽管 set 里面只有一个元素 但是你不知道是谁
        for (int i = 0; i < nums.length; i++) {
            if (set.contains(nums[i])) {
                return nums[i];
            }
        }
        return -1;
    }

    public static void main2(String[] args) {
        int[] array = {1, 2, 3, 4, 5, 1, 2, 3, 2};
        HashMap<Integer, Integer> map = new HashMap<>();
        for (int i = 0; i < array.length; i++) {
            if (map.get(array[i]) == null) {
                map.put(array[i], 1);
            } else {
                Integer val = map.get(array[i]);
                map.put(array[i], val + 1);
            }
        }
        Set<Map.Entry<Integer, Integer>> entries = map.entrySet();
        for (Map.Entry<Integer, Integer> entry : entries) {
            System.out.println("Key： " + entry.getKey() + "  Val：" + entry.getValue());
        }
    }

    // NewCoder 旧键盘
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String str1 = in.nextLine();
        String str2 = in.nextLine();
        func(str1, str2);
    }

    private static void func(String str1, String str2) {
        Set<Character> set = new HashSet<>();
        for (char ch : str2.toUpperCase().toCharArray()) {
            set.add(ch);
        }
        for (char ch : str1.toUpperCase().toCharArray()) {  // 这里要转大写
            if (!set.contains(ch)) {
                set.add(ch);
                System.out.print(ch);
            }
        }
    }
}
