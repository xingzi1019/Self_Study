package ds_4_18;

public class Test {
    // 定义ListNode
    public class ListNode {
        int val;
        ListNode next;

        ListNode() {
        }

        ListNode(int val) {
            this.val = val;
        }

        ListNode(int val, ListNode next) {
            this.val = val;
            this.next = next;
        }
    }

    // 递归实现合并两个有序链表
    public ListNode mergeTwoLists(ListNode l1, ListNode l2) {
        if (l1 == null) {
            return l2;
        } else if (l2 == null) {
            return l1;
        } else if (l1.val <= l2.val) { // 等号随意的无所谓
            l1.next = mergeTwoLists(l1.next, l2);
            return l1;
        } else {
            l2.next = mergeTwoLists(l1, l2.next);
            return l2;
        }
    }

    //  返回链表倒数第k个结点
    public int kthToLast(ListNode head, int k) {
        // 法一 快慢指针
        ListNode cur = head;
        ListNode ret = head;
        int count = 0;
        while(cur != null) {
            if(count >= k) {
                ret = ret.next;
            }
            cur = cur.next;
            count++;
        }
        return ret.val;
        // 法二 一次半遍历
        // ListNode cur = head;
        // int count = 0;
        // while(cur.next != null) {
        //     count++;
        //     cur = cur.next;
        // }
        // cur = head;
        // for(int i = 1;i <= count - k + 1;i++) {
        //     cur = cur.next;
        // }
        // return cur.val;
    }

    // 返回链表中间或者中间偏右边的结点
    public ListNode middleNode(ListNode head) {
        // 法一
        ListNode cur = head;
        ListNode mid = head;
        int count = 0;
        while(cur != null) {
            count++;
            if(count % 2 == 0) {
                mid = mid.next;
            }
            cur = cur.next;
        }
        return mid;
        // 法二
        // ListNode cur = head;
        // ListNode ret = head;
        // int count = 0;
        // while (cur != null) {
        //     count++;
        //     cur = cur.next;
        // }
        // int mid = count/2;
        // int count2 = 0;
        // while(count2 != mid) {
        //     count2++;
        //     ret = ret.next;
        // }
        // return ret;
    }

    // 反转链表
    public ListNode reverseList(ListNode head) {
        if (head == null || head.next == null) { // 没有节点或只有一个节点
            return head;
        }
        ListNode cur = head.next; // cur代表需要翻转的结点
        head.next = null;
        while (cur != null) {
            // 你只定义一个cur的时候发现并不是很好是实现
            // 所以想到了再定义一个
            ListNode curN = cur.next; // 如果cur是最后一个的话 那么cur.next是null也没事
            cur.next = head;
            head = cur;
            cur = curN;
        }
        return head;
    }

    // 删除所有数值为 val 的结点
    public ListNode removeElements(ListNode head, int val) {
        while (head != null && head.val == val) {
            head = head.next;
        }
        if (head == null) {
            return head;
        }
        ListNode cur = head;
        while (cur.next != null) {
            if (cur.next.val == val) {
                cur.next = cur.next.next;
            } else {
                cur = cur.next;
            }
        }
        return head;
        // if(head == null) {
        //     return head;
        // }
        // ListNode cur = head;
        // ListNode del = head;
        // while(del != null) {
        //     if(del.val == val) {
        //         cur.next = del.next;
        //         del = del.next;
        //     } else {
        //         cur = del;
        //         del = del.next;
        //     }
        // }
        // if(head.val == val) {
        //     head = head.next;
        // }
        // return head;
    }
}
