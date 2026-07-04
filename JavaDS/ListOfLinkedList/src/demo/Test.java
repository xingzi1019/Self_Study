package demo;
// 有学过C++的数据结构 Java的上手应该也会很快
// 而且刚复习了一遍 应该也可以再整理一下

import java.util.Arrays;
import java.util.LinkedList;

public class Test {
    public static void main(String[] args) {
        MySingleList mySingleList = new MySingleList();
        mySingleList.addLast(12);
        mySingleList.addLast(23);
        mySingleList.addLast(34);
        mySingleList.addLast(45);
        mySingleList.display();
        System.out.println("=====================");
        // 静态内部类的相关知识回顾一下
        MySingleList.ListNode ret = mySingleList.reverseList();
        mySingleList.display();
        mySingleList.display(ret);
        System.out.println(mySingleList.kthToLast(4));
        System.out.println(mySingleList.kthToLast(6));
    }

    // 一句话来说
    // 链表是⼀种物理存储结构上⾮连续存储结构
    // 数据元素的逻辑顺序是通过链表中的引⽤链接次序实现的
    // 一般来说链表分8种(下面的各种组合)
    // 单向或者双向
    // 带头或者不带头
    // 循环或者不循环
    public static void main3(String[] args) {
        MySingleList mySingleList = new MySingleList();
        mySingleList.addFirst(99);
        mySingleList.display();
        mySingleList.remove(99);
        System.out.println("头删:");
        mySingleList.display();
        System.out.println("---");
        mySingleList.addLast(99);
        mySingleList.addLast(66);
        mySingleList.addLast(99);
        mySingleList.addLast(66);
        mySingleList.addLast(99);
        mySingleList.addLast(66);
        mySingleList.addLast(99);
        mySingleList.addLast(99);
        System.out.print("删除前: ");
        mySingleList.display();
        mySingleList.clear();
        System.out.print("清理后: ");
        mySingleList.display();
//        mySingleList.removeAllKey(99);
//        System.out.print("删除后: ");
//        mySingleList.display();
//        System.out.print("---");
        /*mySingleList.addFirst(12);
        mySingleList.addFirst(23);
        mySingleList.addFirst(34);
        mySingleList.addFirst(45);
        mySingleList.addFirst(56);
        mySingleList.addLast(99);
        mySingleList.addFirst(99);
        mySingleList.addFirst(99);
        mySingleList.display();*/
        /*System.out.println("测试删除操作: ");
        mySingleList.remove(99);
        mySingleList.display();
        mySingleList.removeAllKey(99);
        mySingleList.display();*/
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
