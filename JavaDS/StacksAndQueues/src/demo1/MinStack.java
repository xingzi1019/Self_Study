package demo1;

import java.util.Stack;
// 最小栈
public class MinStack {

    Stack<Integer> stack;
    Stack<Integer> minStack;

    public MinStack() {
        stack = new Stack<>();
        minStack = new Stack<>();
    }

    public void push(int value) {
        stack.push(value);
        if(minStack.empty()) {
            minStack.push(value);
        }
        else if(value <= minStack.peek()) {
            minStack.push(value);
        }
    }

    public void pop() {
        int v1 = stack.pop();
        if(v1 == minStack.peek()) {
            minStack.pop();
        }
    }

    public int top() {
        return stack.peek();
    }

    public int getMin() {
        return minStack.peek();
    }
}
