package demo1;

import java.util.Stack;

public class Test {
    // 逆波兰表达式
    public int evalRPN(String[] tokens) {
        Stack<Integer> stack = new Stack<>();
        for(int i = 0;i < tokens.length;i++) {
            String s = tokens[i];
            if(isOperator(s)) {
                int num2 = stack.pop();
                int num1 = stack.pop();
                switch(s.charAt(0)) {
                    case '+':
                        stack.push(num1 + num2);
                        break;
                    case '-':
                        stack.push(num1 - num2);
                        break;
                    case '*':
                        stack.push(num1 * num2);
                        break;
                    case '/':
                        stack.push(num1 / num2);
                        break;
                }
            } else {
                stack.push(Integer.parseInt(s));
            }
        }
        return stack.pop();
    }
    private boolean isOperator(String s) {
        if(s.equals("+") || s.equals("-") || s.equals("*") || s.equals("/")) {
            return true;
        }
        return false;
    }

    // 判断出栈是否正确
    public boolean IsPopOrder (int[] pushV, int[] popV) {
        Stack<Integer> stack = new Stack<>();
        int j = 0;
        for (int i = 0; i < pushV.length; i++) {
            stack.push(pushV[i]);
            while (!stack.empty() && j < popV.length && stack.peek() == popV[j]) {
                stack.pop();
                j++;
            }
        }
        return stack.empty();
    }

    // 判断括号串是否有效
    public boolean isValid(String s) {
        Stack<Character> stack = new Stack();
        for (int i = 0; i < s.length(); i++) {
            char c = s.charAt(i);
            if(c == '(' || c == '[' || c == '{') {
                stack.push(c);
            } else {
                if(stack.isEmpty()) {
                    return false;
                } else {
                    if((c == ')' && stack.peek() == '(')
                            || (c == ']' && stack.peek() == '[' )
                            ||  (c == '}' && stack.peek() == '{'))
                    {
                        stack.pop();
                    } else {
                        return false;
                    }
                }
            }
        }
        if(!stack.isEmpty()) {
            return false;
        }
        return true;
    }

    // 逆序打印链表的两个方法
    static class Node {
        int val;
        public Node prev = null; // 不赋值也是默认null
        public Node next = null;
        public Node(int val) {
            this.val = val;
        }
    }
    // 递归⽅式
    void printList(Node head) {
        if (null != head) {
            printList(head.next);
            System.out.print(head.val + " ");
        }
    }

    // 循环⽅式
    /*void printList(Node head) {
        if (null == head) {
            return;
        }

        Stack<Node> s = new Stack<>();
        // 将链表中的结点保存在栈中
        Node cur = head;
        while (null != cur) {
            s.push(cur);
            cur = cur.next;
        }

        // 将栈中的元素出栈
        while (!s.empty()) {
            System.out.print(s.pop().val + " ");
        }
    }*/

    public static void main(String[] args) {

    }

    public static void main2(String[] args) {
        MyStack<Integer> myStack = new MyStack<Integer>();
        myStack.push(1);
        myStack.push(2);
        myStack.push(3);
        myStack.push(4);
        int popVal = myStack.pop();
        System.out.println(popVal);   // 4
        int peekVal = myStack.peek();
        System.out.println(peekVal);  // 3
        peekVal = myStack.peek();
        System.out.println(peekVal);  // 3
    }

    // 栈的底层还是数组
    public static void main1(String[] args) {
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
        System.out.println(ret2);  // 34
        // 还是可以调用父类的方法
        System.out.println(stack.get(1));
        stack.empty();
    }
}
