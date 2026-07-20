package demo2;

public class MyQueue {
    static class ListNode{
        public int val;
        public ListNode prev;
        public ListNode next;

        public ListNode(int val) {
            this.val = val;
        }
    }

    public ListNode first;
    public ListNode last;

    // 入队操作: 尾插
    public void offer(int val) {
        ListNode node = new ListNode(val);
        if(first == null) {
            first = node;
            last = node;
        }
        else {
            last.next = node;
            node.prev = last;
            last = last.next;
        }
    }

    // 获取并删除头结点
    public int poll() {
        if(first == null) {
            throw new RuntimeException("空的 poll不了");// 可以自定义异常
        }
        int ret = first.val;
        if(first == last) {
            first = null;
            last = null;
        } else {
            first = first.next;
            first.prev = null;
        }
        return ret;
    }

    // 获取队头元素不删除
    public int peek() {
        if(first == null) {
            throw new RuntimeException("空的 peek不了");
        }
        return first.val;
    }

    // 元素个数
    public int size() {
        ListNode cur = first;
        int count = 0;
        while(cur != null) {
            cur = cur.next;
            count++;
        }
        return count;
        // 也可以在插入删除的时候+ -
    }

    // 判空
    public boolean empty(){
        /*if(first == null) {
            return true;
        }
        return false;*/
        return first == null;
    }
}
