package demo;
// 有学过C++的数据结构 Java的上手应该也会很快
// 而且刚复习了一遍 应该也可以再整理一下

import java.util.LinkedList;

public class Test {
    // 一句话来说
    // 链表是⼀种物理存储结构上⾮连续存储结构
    // 数据元素的逻辑顺序是通过链表中的引⽤链接次序实现的
    // 一般来说链表分8种(下面的各种组合)
    // 单向或者双向
    // 带头或者不带头
    // 循环或者不循环
    public static void main(String[] args) {
        MySingleList mySingleList = new MySingleList();
        mySingleList.addFirst(12);
        mySingleList.addFirst(23);
        mySingleList.addFirst(34);
        mySingleList.addFirst(45);
        mySingleList.addFirst(56);
        mySingleList.display();
    }

    public static void main2(String[] args) {
        MySingleList mySingleList = new MySingleList();
        mySingleList.createList();
        System.out.println("仅仅为了打个断点");
        mySingleList.display();
        System.out.print("size:");
        System.out.println(mySingleList.size());
        System.out.println("测试是否包含该元素");
        System.out.println(mySingleList.contains(12));
        System.out.println(mySingleList.contains(23));
        System.out.println(mySingleList.contains(33));
        System.out.print("头插入法:");
        mySingleList.addFirst(99);
        mySingleList.display();
    }

    public static void main1(String[] args) {
        // 点进去发现方法是比顺序表 多很多的
        LinkedList<Integer> list = new LinkedList<>();// 依旧是泛型(可以放入自己定义的类)
        list.add(1);
        // 带头和不带头的区别是很大的
        // 带头的头插只能在头结点的后面
        // 不带头的节点头插可能会使head发生改变
        // 头结点的数据域的数据无效
    }
}
