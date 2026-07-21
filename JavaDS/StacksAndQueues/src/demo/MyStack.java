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
        if(qu1.isEmpty()) {
            qu1.offer(x);
        } else {
            qu2.offer(x);
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
        
    }

    public boolean empty() {
        return qu1.isEmpty() && qu2.isEmpty();
    }
}
