package demo1;

import java.util.Arrays;

// 这个是 int 类型 看看后面再来一个泛型的
public class MyArrayList implements IList {
    // 顺序表
    private int[] elem;
    // 当前顺序表的有效元素个数
    private int usedSize;

    public MyArrayList() {
        this.elem = new int[Constant.DEFAULT_CAPACITY];
    }

    @Override
    public void add(int data) {
        if (isFull()) {
            grow();
        }
        this.elem[usedSize] = data;
        usedSize++;
    }

    /**
     * 判断顺序表是否满了
     *
     * @return 满了返回 true 没满返回 false
     */
    private boolean isFull() {
        return this.usedSize == this.elem.length;
    }

    /**
     * 扩容
     */
    private void grow() {
        this.elem = Arrays.copyOf(this.elem, 2 * this.elem.length);
        // 我日 Java 这么方便
    }

    @Override
    public void add(int pos, int data) {
        if (pos < 0 || pos > usedSize) {
            throw new PosIllegalityException(Constant.ADD_POS_ILLEGALITY);
        }
        if (isFull()) {
            grow();
        }
        for (int i = usedSize; i > pos; i--) {
            this.elem[i] = this.elem[i - 1];
        }
        this.elem[pos] = data;
        usedSize++;
    }

    @Override
    public boolean contains(int toFind) {
        for (int i = 0; i < usedSize; i++) {
            if (this.elem[i] == toFind) {
                return true;
            }
        }
        return false;
    }

    @Override
    public int get(int pos) {
        if (isEmpty()) {
            throw new EmptyListException(Constant.EMPTY_LIST);
        }
        checkPos(pos, Constant.GET_POS_ILLEGALITY);
        return this.elem[pos];
    }

    private void checkPos(int pos, String msg) {
        if (pos >= usedSize || pos < 0) {
            throw new PosIllegalityException(msg);
        }
    }

    public boolean isEmpty() {
        return usedSize == 0;
    }

    @Override
    public int indexOf(int toFind) {
        for (int i = 0; i < usedSize; i++) {
            if (this.elem[i] == toFind) {
                return i;
            }
        }
        return -1;
    }

    @Override
    public void set(int pos, int value) {
        checkPos(pos, Constant.SET_POS_ILLEGALITY);
        this.elem[pos] = value;
    }

    @Override
    public void remove(int toRemove) {
        if (isEmpty()) {
            throw new EmptyListException(Constant.REMOVE_EMPTY_EXCEPTION);
        }
        int index = indexOf(toRemove);
        if (index == -1) {
            System.out.println("没有你要删除的元素");
            return;
        }
        for (int i = index; i < usedSize - 1; i++) {
            this.elem[i] = this.elem[i + 1];
        }
        usedSize--;
    }

    @Override
    public int size() {
        return this.usedSize;
    }

    @Override
    public void clean() {
        // 如果顺序表存放的是对象 那么就需要改为空指针
        /*for(int i = 0;i <usedSize;i++) {
            elem[i] = null;
        }*/
        usedSize = 0;
    }

    @Override
    public void display() {
        for (int i = 0; i < usedSize; i++) {
            System.out.print(this.elem[i] + " ");
        }
        System.out.println();
    }
}
