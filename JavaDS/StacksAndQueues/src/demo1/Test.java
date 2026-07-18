package demo1;

import java.util.Stack;

public class Test {
    public static void main(String[] args) {
        Stack<Integer> stack = new Stack<>();
        // 进栈 入栈
        stack.push(12);
        stack.push(23);
        stack.push(34);
        stack.push(45);
        // 出栈 会删除的
        int ret = stack.pop();
        System.out.println(ret);   // 45
        // peek 获取栈顶元素 不删除
        int ret2 = stack.peek();
        System.out.println(ret2);  // 32
    }
}
