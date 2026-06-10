package demo1;

// 站在数据结构的角度来看，List就是⼀个线性表，即n个具有相同类型元素的有限序列，在该序列上可以执行增删查改以及变量等操作
public class Test {
    public static void main(String[] args) {
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
