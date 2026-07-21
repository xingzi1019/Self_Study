package demo2;

import java.util.*;

public class Test {
    public static void main(String[] args) {
        Deque<Integer> deque = new LinkedList<>();
        Deque<Integer> deque2 = new ArrayDeque<>();
    }

    public static void main2(String[] args) {
        MyQueue myQueue = new MyQueue();
        myQueue.offer(12);
        myQueue.offer(23);
        myQueue.offer(34);
        myQueue.offer(45);
        System.out.println(myQueue.poll()); // 12
        System.out.println(myQueue.peek()); // 23
        System.out.println(myQueue.peek()); // 23
        System.out.println(myQueue.size()); // 3
        System.out.println(myQueue.empty());// false
    }

    public static void main1(String[] args) {
        // 稍微复习一下:
        // 父类引用子类对象 多态 可以调用父类的方法
        // 如果子类重写了 那么调用的是子类的重写方法
        // 记住不能调用子类独有的方法
        Queue<Integer> queue = new LinkedList<>(); // 接口引用指向实现类
        queue.offer(10);
        queue.offer(20);
        queue.offer(30);
        System.out.println(queue);
        // LinkedList的 toString() 每个类都有 toString 所以直接调用了子类重写的方法
        System.out.println(queue.poll());
        System.out.println(queue.peek());
    }
}
