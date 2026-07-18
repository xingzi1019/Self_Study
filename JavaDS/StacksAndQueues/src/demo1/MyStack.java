package demo1;

import java.util.Arrays;
// 顺带复习泛型
public class MyStack<E> {
    public Object[] elem;
    public int usedSize;
    public static final int DEFAULT_CAPACITY = 5;

    public MyStack() {
        elem = new Object[DEFAULT_CAPACITY];
    }

    /**
     * 入栈/进栈
     * @param val 要进栈的值
     */
    public void push(E val) {
        if (isFull()) {
            // 满了两倍扩容
            elem = Arrays.copyOf(elem, 2 * elem.length);
        }
        elem[usedSize++] = val;
    }

    public boolean isFull() {
        return usedSize == elem.length;
    }

    /**
     * 出栈
     * @return E
     */
    public E pop() {
        if(isEmpty()) {
            throw new EmptyStackException();
        }
        E ret = (E)elem[usedSize-1];
        usedSize--;
        return ret;
    }

    public boolean isEmpty() {
        return usedSize == 0;
    }

    public E peek() {
        if(isEmpty()) {
            throw new EmptyStackException("Stack is Empty");
        }
        return (E)elem[usedSize-1];
    }

    public int size() {
        return usedSize;
    }
}
