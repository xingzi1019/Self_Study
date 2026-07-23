package demo;

import java.util.LinkedList;
import java.util.Queue;

class MyStack {

    public Queue<Integer> qu1;
    public Queue<Integer> qu2;

    public MyStack() {
        qu1 = new LinkedList<>();
        qu2 = new LinkedList<>();
    }

    public void push(int x) {
        if (!qu1.isEmpty()) {
            qu1.offer(x);
        } else if (!qu2.isEmpty()) {
            qu2.offer(x);
        } else {
            qu1.offer(x);
        }
    }

    public int pop() {
        if(empty()) {
            return -1;
        }
        if(qu1.isEmpty()) {
            int s2 = qu2.size()-1;
            while(s2 != 0) {
                qu1.offer(qu2.poll());
                s2--;
            }
            return qu2.poll();
        } else {
            int s1 = qu1.size();
            while(s1-1 != 0) {
                qu2.offer(qu1.poll());
                s1--;
            }
            return qu1.poll();
        }
    }

    public int top() {
        if(empty()) {
            return -1;
        }
        if(!qu1.isEmpty()) {
            int size = qu1.size();
            int val = -1;
            while(size != 0) {
                val = qu1.poll();
                qu2.offer(val);
                size--;
            }
            return val;
        } else {
            int size = qu2.size();
            int val = -1;
            while(size != 0) {
                val = qu2.poll();
                qu1.offer(val);
                size--;
            }
            return val;
        }
    }

    public boolean empty() {
        return qu1.isEmpty() && qu2.isEmpty();
    }
}
// 单队列实现栈
/*class MyStack {

    Queue<Integer> qu;

    public MyStack() {
        qu = new LinkedList();
    }

    public void push(int x) {
        qu.offer(x);
    }

    public int pop() {
        int sz = qu.size() - 1;
        while(sz != 0) {
            qu.offer(qu.poll());
            sz--;
        }
        return qu.poll();
    }

    public int top() {
        int sz = qu.size() - 1;
        while(sz != 0) {
            qu.offer(qu.poll());
            sz--;
        }
        int ret = qu.peek();
        qu.offer(qu.poll());
        return ret;
    }

    public boolean empty() {
        return qu.isEmpty();
    }
}*/
