package demo1;

import java.util.*;

// 站在数据结构的角度来看，List就是⼀个线性表，即n个具有相同类型元素的有限序列，在该序列上可以执行增删查改以及变量等操作
public class Test {
    public static void main(String[] args) {
        // ArrayList 的遍历
        ArrayList<Integer> list = new ArrayList<>();
        list.add(1);
        list.add(2);
        list.add(3);
        list.add(4);
        // 继承自 AbstractCollection，重写了 toString()方法
        // 返回格式为 [元素1, 元素2, ...]的字符串
        System.out.println(list); // [1,2,3,4]
        System.out.println("========================");
        for (int i = 0; i < list.size(); i++) {
            System.out.print(list.get(i) + " ");
        }
        /*for (int i = 0; i < list.size(); i++) {
            Integer a = list.get(i);
            System.out.print(a + " ");
        }*/
        System.out.println();
        System.out.println("=======================");
        for (int e : list) { // 这里自动拆箱了
            System.out.print(e + " ");
        }
        System.out.println();
        System.out.println("=========迭代器=========");
        // 要注意的是后面要学的map是没有迭代器的
        // 默认从0下标开始打印
        Iterator<Integer> it = list.iterator();
        while (it.hasNext()) {
            System.out.print(it.next() + " ");
        }
        System.out.println();
        System.out.println("=========迭代器2=========");
        // 要注意的是后面要学的map是没有迭代器的
        // 从指定位置开始打印
        ListIterator<Integer> it2 = list.listIterator(2);
        while (it2.hasNext()) {
            System.out.print(it2.next() + " ");
        }
        System.out.println();
        System.out.println("=========迭代器3=========");
        // 倒着打印
        ListIterator<Integer> it3 = list.listIterator(list.size()-1);
        while (it2.hasPrevious()) { // 前一个
            System.out.print(it2.previous() + " ");
        }
        System.out.println();
    }

    public static void main6(String[] args) {
        ArrayList<Integer> list = new ArrayList<>();
        list.add(1);
        list.add(2);
        list.add(3);
        list.add(4);
        // 继承自 AbstractCollection，重写了 toString()方法
        // 返回格式为 [元素1, 元素2, ...]的字符串
        System.out.println(list); // [1,2,3,4]
        System.out.println("========================");
        // [1,3) 一样都是左闭右开 Java 大部分都是这样
        List<Integer> sublist = list.subList(1, 3); // [2,3]
        sublist.set(0, 99);
        System.out.println(sublist); // [99,3]
        System.out.println(list);    // [1,99,3,4]
        // 这个截取实际上是从原List上获取截取的那个字符串地址而已
        // 没有去额外拷贝 也是一个坑 打比赛和面试的时候要特别注意
    }

    public static void main5(String[] args) {
        ArrayList<Integer> list = new ArrayList<>();
        list.add(1);
        list.add(2);
        list.add(3);
        list.add(0, 99);
        System.out.println(list);
        System.out.println("========================");
        // Java 重载了remove 有两个
        list.remove(2);
        System.out.println(list);
        // list.remove(new Integer(2)); // 取消注释会报错 但是即使报错了也可以照常运行
        // 只是过时了 但是保留了这种写法
        System.out.println(list);
        Integer ii = 2;
        int a = 2;
        list.remove(a);  // 删掉下标为2的元素
        list.remove(ii); // 删掉数值为2的元素
        /*ArrayList<Integer> list2 = new ArrayList<>();
        list2.addAll(list);
        list2.add(999);
        System.out.println(list2);*/
    }

    public static void main4(String[] args) {
        ArrayList<Integer> list = new ArrayList<>();
        list.add(1); // 尾插
        list.add(2);
        list.add(3);
        System.out.println(list);
        System.out.println("===========================");
        ArrayList list2 = new ArrayList();
        list2.add(11);
        list2.add(21);
        list2.add(31);
        System.out.println(list2);
    }

    public static void main3(String[] args) {
        ArrayList<Integer> list = new ArrayList<>(); // 线程不安全
        list.add(1);
        // 推荐使用ArrayList而不是历史遗留的Vector
        Vector<Integer> arr = new Vector<>();        // 线程安全
    }

    public static void main2(String[] args) {
        MyArrayList myArrayList = new MyArrayList();
        myArrayList.add(0, 11);
        myArrayList.add(0, 21);
        myArrayList.add(0, 31);
        myArrayList.add(0, 41);
        myArrayList.add(0, 51);
        myArrayList.add(0, 61);
        myArrayList.display();
        myArrayList.set(-1, 2);

    }

    public static void main1(String[] args) {
        MyArrayList myArrayList = new MyArrayList();
        myArrayList.add(1);
        myArrayList.add(2);
        myArrayList.add(3);
        myArrayList.add(4);
        myArrayList.add(5);
        myArrayList.display();
        System.out.println(myArrayList.size());
        boolean ret1 = myArrayList.contains(2);
        System.out.println(ret1);
        boolean ret2 = myArrayList.contains(22);
        System.out.println(ret2);
        System.out.println("======================");
        try {
            int i = myArrayList.get(4);
            System.out.println(i);
        } catch (EmptyListException e) {
            e.printStackTrace();
        } catch (PosIllegalityException e) {
            e.printStackTrace();
        }
    }
}
