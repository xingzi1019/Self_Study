package demo;
// 双向不带头链表
public class MyLinkedList implements ILinkedList{
    static class ListNode {
        int val;
        public ListNode prev = null; // 不赋值也是默认null
        public ListNode next = null;
        public ListNode(int val) {
            this.val = val;
        }
    }

    public ListNode head;
    public ListNode last;

    @Override
    public void addFirst(int data) {
        // 头插
        ListNode node = new ListNode(data);
        if(head == null) {
            head = node;
            last = node;
        } else {
            node.next = head;
            head.prev = node;
            head = node;
        }
    }

    @Override
    public void addLast(int data) {
        // 尾插
        ListNode node = new ListNode(data);
        if(head == null) {
            head = node;
            last = node;
        } else {
            last.next = node;
            node.prev = last;
            last = node;
        }
    }

    @Override
    public void addIndex(int index, int data) {
        if(index < 0 || index > size()) {
            // 在下标为index的位置插入data
            // 和博哥的有点不一样
            throw new CheckPosException();
        }
        if(index == 0) {
            addFirst(data);
            return;
        }
        if(index == size()) {
            addLast(data);
            return;
        }
        ListNode node = new ListNode(data);
        ListNode cur = searchIndex(index);
        node.next = cur.next;
        node.prev = cur;
        node.next.prev = node;
        cur.next = node;
    }

    private ListNode searchIndex(int index) {
        ListNode cur = head;
        while(index != 0) {
            cur = cur.next;
            index--;
        }
        return cur;
    }

    @Override
    public boolean contains(int key) {
        ListNode cur = head;
        while(cur != null) {
            if(cur.val == key) {
                return true;
            }
            cur = cur.next;
        }
        return false;
    }

    @Override // 还是需要分类讨论的 细节很多
    public void remove(int key) {
        ListNode cur = head;
        while(cur != null) {
            if(cur.val == key) {
                if(cur == head) {
                    head = cur.next;
                    if(head != null) { // 链表不止一个节点
                        head.prev = null;
                    } else {           // 链表只有一个节点
                        last = null;
                    }
                    return;
                }
                if(cur == last) {
                    last = cur.prev;
                    cur.prev.next = null;
                    return;
                }
                // cur是中间结点
                cur.prev.next = cur.next;
                cur.next.prev = cur.prev;
                return;
            }
            cur = cur.next;
        }
        System.out.println("没有你要删除的值: " + key);
    }

    @Override
    public void removeAllKey(int key) {
        ListNode cur = head;
        boolean found = false;
        while (cur != null) {
            if (cur.val == key) {
                found = true;
                if (cur == head) {
                    head = cur.next;
                    if (head != null) {
                        head.prev = null;
                    } else {
                        last = null;
                    }
                } else if (cur == last) {
                    last = cur.prev;
                    if (last != null) {
                        last.next = null;
                    }
                } else {
                    // 中间节点
                    cur.prev.next = cur.next;
                    cur.next.prev = cur.prev;
                }
            }
            cur = cur.next;
        }
        if (!found) {
            System.out.println("没有你要删除的值: " + key);
        }
    }

    @Override
    public int size() {
        int count = 0;
        ListNode cur = head;
        while(cur != null) {
            count++;
            cur = cur.next;
        }
        return count;
    }

    @Override
    public void clear() {
        if(head == null) {
            return;
        }
        ListNode cur = head;
        while(cur != null) {
            ListNode temp = cur.next;
            cur.prev = null;
            cur.next = null;
            cur = temp;
        }
        head = null;
        last = null;
    }

    @Override
    public void display() {
        ListNode cur = head;
        while(cur != null) {
            System.out.print(cur.val + ' ');
        }
        System.out.println();
    }
}
