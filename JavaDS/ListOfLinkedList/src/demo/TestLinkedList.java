package demo;

import java.util.ArrayList;
import java.util.LinkedList;
import java.util.List;

public class TestLinkedList
{
    public static void main(String[] args) {
        LinkedList<Integer> list = new LinkedList<>();
        List<Integer> list2 = new LinkedList<>();
        List<Integer> list3 = new ArrayList<>();
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
