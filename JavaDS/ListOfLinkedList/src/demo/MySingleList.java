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
}