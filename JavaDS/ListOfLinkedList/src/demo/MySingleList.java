package demo;

// 不带头的单向链表
public class MySingleList implements ILinkedList {
    // ✅ 可以用静态内部类来定义结点
    static class ListNode {
        // 结点的数据
        public int val;
        // 结点的引用
        public ListNode next = null;

        // 构造方法
        public ListNode(int val) {
            this.val = val;
        }
    }

    // ✅ 定义链表的属性
    public ListNode head;
    public int UsedSize;

    public void createList() {
        ListNode node1 = new ListNode(12);
        ListNode node2 = new ListNode(23);
        ListNode node3 = new ListNode(34);
        ListNode node4 = new ListNode(45);
        ListNode node5 = new ListNode(56);
        // node1 ~ node5 是栈上的局部引用变量
        // 方法结束后这些引用会消失
        // 但 ListNode 对象本身在堆中
        // 由于 head 仍然指向 node1，
        // 整个链表仍然是可达的，不会被 GC(垃圾回收) 回收
        node1.next = node2;
        node2.next = node3;
        node3.next = node4;
        node4.next = node5;
        head = node1;
    }

    // ✅ 实现接口方法
    // 头插法
    @Override
    public void addFirst(int data) {
        // 创建一个新节点
        ListNode listNode = new ListNode(data);
        // 新节点指向当前链表的第一个结点
        listNode.next = head;// 一样的 这两行代码的顺序不能改
        // 头结点变成了现在的新结点
        head = listNode;
        // 如果需要的话可以在这里进行 contains 和 size的变化
    }

    // 尾插法
    @Override
    public void addLast(int data) {
        ListNode listNode = new ListNode(data);
        // 尾插特有的判断 如果一个结点没有的话 那这个结点就是头节点了
        if (head == null) {
            head = listNode;
            return;
        }
        // 猛然发现其他双向循环链表或者有尾指针链表的好处了
        ListNode cur = head;
        while (cur.next != null) {
            cur = cur.next;
        }
        // 这时候 cur 指向的结点就是尾巴结点
        cur.next = listNode;
        listNode.next = null; // 创建节点的时候已经默认是 null 了
        // 如果需要的话可以在这里进行 contains 和 size的变化
    }

    // 任意位置插⼊,第⼀个数据节点为0号下标
    @Override
    public void addIndex(int index, int data) {
        checkPos(index);
        if (index == 0) {
            addFirst(data);
        } else if (index == size()) {
            addLast(data);
        } else {
            // ListNode listNode = new ListNode(data);
            // ListNode cur = head;
            // for (int i = 0; i < index - 1; i++) {
            //     cur = cur.next;
            // }
            // // 此时cur指向index的前一个元素
            // listNode.next = cur.next;
            // cur.next = listNode;
            ListNode cur = findIndex(index);
            ListNode listNode = new ListNode(data);
            listNode.next = cur.next;
            cur.next = listNode;
        }
    }

    private ListNode findIndex(int index) {
        ListNode cur = head;
        int count = 0;
        while (count != index - 1) {
            cur = cur.next;
            count++;
        }
        return cur;
    }

    private void checkPos(int index) {
        if (index < 0 || index > size()) { // 最后一个位置是不是也可以插入不要忘了
            throw new CheckPosException("当前index位置不合法");
        }
    }

    // 查找是否包含关键字key是否在单链表当中
    @Override
    public boolean contains(int key) {
        ListNode cur = this.head;
        while (cur != null) {
            if (cur.val == key) {
                return true;
            } else {
                cur = cur.next;
            }
        }
        return false;
        // 可以考虑用哈希来进行升级
        // 会涉及到哈希函数的设计 哈希冲突的解决
    }

    //
    // 下面这些代码是OJ解答复制过来的 需要改造一下才可以使用
    //

    // 删除第⼀次出现关键字为key的节点
    @Override
    public void remove(int key) {
        if (head == null) {
            System.out.println("链表为空 无法进行删除操作");
            return;
            // 也可以自定义异常
        }
        // 如果是第一个结点的话（无论链表长度）
        if (head.val == key) {
            head = head.next;
            return;
        }
        // 其他节点：找 key 的前驱
        ListNode cur = search(key);
        if (cur == null) {
            // 可以用自定义异常
            System.out.println("没有你要删除的数字: " + key);
            return;
        }
        ListNode del = cur.next;
        cur.next = del.next;
    }

    /**
     * 找到 key 的前驱
     *
     * @param key
     * @return
     */
    private ListNode search(int key) {
        ListNode cur = head;
        while (cur.next != null) {
            if (cur.next.val == key) {
                return cur;
            }
            cur = cur.next;
        }
        return null;
    }

    // 删除所有值为key的节点   (只是遍历一次链表就删除掉所有的 key )
    @Override
    public void removeAllKey(int key) {
        // 先处理头节点：循环删除所有值为 key 的头节点
        while (head != null && head.val == key) {
            head = head.next;
        }
        // 如果链表已经空了，直接返回
        if (head == null) {
            return;
        }
        // 处理后续节点
        ListNode cur = head;
        while (cur.next != null) {
            if (cur.next.val == key) {
                cur.next = cur.next.next;
                // 不移动 cur，继续检查新的 cur.next 是否也是 key
            } else {
                cur = cur.next;
            }
        }
    }

    // 得到单链表的⻓度
    @Override
    public int size() {
        ListNode cur = this.head;
        int count = 0;
        while (cur != null) {
            count++;
            cur = cur.next;
        }
        return count;
        // 可以优化为加一个结点数量就+1
        //          减一个结点数量就-1
    }

    // 清理链表
    @Override
    public void clear() {
        // 下面这些单向链表可有可无
        /*ListNode cur = head;
        while (cur != null) {
            ListNode curN = cur.next;
            cur.next = null;
            cur = curN;
        }*/
        this.head = null;
    }

    // 展示链表存储的数据
    @Override
    public void display() {
        ListNode cur = this.head;
        while (cur != null) { // 不是 head.next != null
            System.out.print(cur.val + " ");
            cur = cur.next;
        }
        System.out.println();
    }

    // 重载了 display 方法
    public void display(ListNode newHead) {
        ListNode cur = newHead;
        while (cur != null) {
            System.out.print(cur.val + " ");
            cur = cur.next;
        }
        System.out.println();
    }

    // ✅ OJ方法
    // 反转链表
    public ListNode reverseList() {
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
        // 迭代实现
        /*ListNode newH = new ListNode(-1);
        ListNode temp = newH;
        while(l1 != null && l2 != null) {
            if(l1.val < l2.val) {
                temp.next = l1;
                temp = l1;
                l1 = l1.next;
            } else {
                temp.next = l2;
                temp = l2;
                l2 = l2.next;
            }
        }
        if(l1 != null) {
            temp.next = l1;
        } else if (l2 != null){
            temp.next = l2;
        }
        return newH.next;*/
    }

    //  返回链表倒数第k个结点
    public int kthToLast(int k) {
        // 快慢指针
        if (k <= 0) {
            return -1;
        }
        ListNode cur = head;// 快
        ListNode ret = head;// 慢
        int count = 0;
        while (cur != null) {
            if (count >= k) {
                ret = ret.next;
            }
            cur = cur.next;
            count++;
        }
        if(count < k) {
            return -1;
        }
        return ret.val;
    }

    // 返回链表中间或者中间偏右边的结点
    public ListNode middleNode() {
        // 法一
        ListNode cur = head;
        ListNode mid = head;
        int count = 0;
        while (cur != null) {
            count++;
            if (count % 2 == 0) {
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

    // 判断字符串是否回文
    public boolean chkPalindrome() {
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