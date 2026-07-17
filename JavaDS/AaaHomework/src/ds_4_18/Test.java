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
    // 判断字符串是否回文
    public boolean chkPalindrome(ListNode head) {
        if (head == null) {
            return true;
        }
        // 判断这个链表是否回文 只遍历一次
        ListNode fast = head;
        ListNode slow = head;
        while (fast != null && fast.next != null) {
            fast = fast.next.next;
            slow = slow.next;
        }
        // slow此时指向中间位置
        ListNode cur = slow.next;
        while (cur != null) {
            ListNode curN = cur.next;
            cur.next = slow;
            slow = cur;
            cur = curN;
        }
        // 此时A和 cur一直走直到相遇
        while (head != slow) {
            if (head.val != slow.val) {
                return false;
            }
            if (head.next == slow) { // 完全冗余执行不到
                return true;
            }
            head = head.next;
            slow = slow.next;
        }
        return true;
    }
    // 链表分割
    public ListNode partition(ListNode pHead, int x) {
        // 要求只是遍历一遍
        ListNode cur = pHead;
        ListNode bs = null, be = null, as = null, ae = null;
        if (pHead == null) {
            return null;
        }
        while (cur != null) {
            if (cur.val < x) {
                if (bs == null) {
                    bs = cur;
                    be = cur;
                } else {
                    be.next  = cur;
                    be = be.next;
                }
            } else {
                if (as == null) {
                    as = cur;
                    ae = cur;
                } else {
                    ae.next = cur;
                    ae = ae.next;
                }
            }
            cur = cur.next;
        }
        // 串接
        if (bs == null) {
            ae.next = null;
            return as;
        } else {
            if(as == null) {
                be.next = null;
                return bs;
            }
            be.next = as;
            ae.next = null;
            return bs;
        }
    }
    // 相交链表的相交结点
    public ListNode getIntersectionNode(ListNode headA, ListNode headB) {
        // 这题可以用哈希直接秒的 但这里是学习的链表所以用链表来做
        ListNode curA = headA;
        ListNode curB = headB;
        int count = 0,lenA = 0,lenB = 0;
        while(curA != null) {
            lenA++;
            curA = curA.next;
        }
        while(curB != null) {
            lenB++;
            curB = curB.next;
        }
        count = lenA - lenB; // 两个链表长度的差值
        curA = headA;
        curB = headB;
        if(count >= 0) {
            while(count != 0) {
                count--;
                curA = curA.next;
            }
        } else {
            while(count != 0) {
                count++;
                curB = curB.next;
            }
        }
        // 两个一起走
        while(curA != null) {
            if(curA == curB) {
                return curA;
            }
            curA = curA.next;
            curB = curB.next;
        }
        return null;
    }
    // 判断链表是否成环
    public boolean hasCycle(ListNode head) {
        // 法一 快慢指针
        ListNode fast = head;
        ListNode slow = head;
        // 步调差值必须小于最小的环的大小
        while(fast != null && fast.next != null) {
            fast = fast.next.next;
            slow = slow.next;
            if(fast == slow) {
                return true;
            }
        }
        return false;
        // 法二 哈希表
        // Set<ListNode> set = new HashSet<ListNode>();
        // while (head != null) {
        //     if (!set.add(head)) {
        //         return true;
        //     }
        //     head = head.next;
        // }
        // return false;
    }
    // 返还环形链表相遇时的结点
    public ListNode detectCycle(ListNode head) {
        // 快指针速度为2 慢指针速度为1 这样的情况下 慢指针在环里面是跑不到完整一圈的
        /*
         解释如下
         假设慢指针刚进入环的入口时，快指针已经在环内的某个位置了。
         此时，快指针落后于慢指针的距离最多是 环的长度减 1（即不到一整圈）。
         之后，两个指针都在环内移动。
         每移动一次，快指针比慢指针多走一步，所以它们的距离会 缩短 1。
         因此，最坏情况下，快指针需要追上的距离是 环长 - 1步。这需要的移动次数也是 环长 - 1次。
         而慢指针在同样的时间内只走了 环长 - 1步。
         这意味着，在慢指针走完一整圈之前，快指针就已经追上它了。
         */
        // 假设起始点到入环点的距离为x
        // 相遇点到入环点的距离为y
        // 环的距离为c
        // slow 走的距离为x + (c-y)            --- 为什么环走不到一圈上面说了
        // fast 走的距离为x + (c - y) + N * c
        // 又因为 fast 的速度是 slow 的两倍
        // 2 * (x + (c - y)) = x + N * c + (c - y)
        // x = (N-1)c - y
        // 这个等式的意思是 从头节点到入环口的距离 x，等于从相遇点绕 (N-1) 圈再减去 y 的距离
        // 换句话说就是如果让一个指针从头节点出发，另一个指针从相遇点出发，
        // 两者都以相同速度（每次一步）移动，那么当第一个指针走过 x 到达入环口时
        // 第二个指针恰好也走过 (N-1)c - y 到达入环口——两者正好在入环口相遇。
        // 所以我们需要把 fast 移回 head，让它从头开始走这段距离 x 那么走玩这段x距离 两者就会相遇
        // 本质是追及问题
        ListNode fast = head;
        ListNode slow = head;
        while(fast != null && fast.next != null) {
            fast = fast.next.next;
            slow = slow.next;
            if(fast == slow) {
                break;
            }
        }
        // 这个时候slow停在相遇点
        // 没环
        if(fast == null || fast.next == null) {
            return null;
        }
        // 有环
        fast = head;
        while(fast != slow) {
            fast = fast.next;
            slow = slow.next;
        }
        return fast;
    }
}
