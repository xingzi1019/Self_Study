package demo;

import java.util.*;

public class TestLinkedList
{
    public static void main(String[] args) {
        LinkedList<Integer> list = new LinkedList<>();
        list.add(10);
        list.add(9);
        list.add(99);
        for(int i = 0;i < list.size();i++) {
            System.out.print(list.get(i) + " ");
        }
        System.out.println();
        System.out.println("==================");
        //
        for(Integer x:list) {
            System.out.print(x + " ");
        }
        System.out.println();
        System.out.println("====================");
        //
        Iterator<Integer> iterator = list.iterator();
        while(iterator.hasNext()) {
            System.out.print(iterator.next()+ " ");
        }
        System.out.println();
        System.out.println("====================");
        //
        ListIterator<Integer> listIterator = list.listIterator();
        while(listIterator.hasNext()) {
            System.out.print(listIterator.next()+ " ");
        }
        System.out.println();
        System.out.println("====================");
        //
        ListIterator<Integer> listIterator2 = list.listIterator(list.size());
        while(listIterator2.hasPrevious()) {
            System.out.print(listIterator2.previous()+ " ");
        }
        System.out.println();
        System.out.println("====================");
    }

    public static void main2(String[] args) {
        LinkedList<Integer> list = new LinkedList<>();
        list.add(10); // 默认是尾插
        list.add(0,100);
        // list.add(3,100); // Error
        System.out.println(list);
        List<Integer> list2 = new LinkedList<>();
        List<Integer> list3 = new ArrayList<>();
        list3.add(9);
        list3.add(99);
        list.addAll(list3);       // 继承了同一个上级的类他们之间是可以相互add的
        System.out.println(list); //
    }

    public static void main1(String[] args) {
        MySingleList mySingleList = new MySingleList();
        /*mySingleList.addFirst(1);
        mySingleList.addFirst(2);
        mySingleList.addFirst(3);
        mySingleList.addFirst(4);
        mySingleList.display();
        System.out.println("==================");*/
        mySingleList.addLast(9);
        mySingleList.addLast(19);
        mySingleList.addLast(29);
        mySingleList.display();
        mySingleList.addIndex(0,729);
        mySingleList.addIndex(4,999);
        mySingleList.addIndex(2,666);
        mySingleList.display();
        int size = mySingleList.size();
        System.out.println("节点个数: " + size);
    }
}
