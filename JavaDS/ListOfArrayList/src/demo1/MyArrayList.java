package demo1;

import java.util.Arrays;

public class MyArrayList implements IList {
    private int[] elem;
    private int usedSize;

    private static final int DEFAULT_CAPACITY = 10;

    public MyArrayList() {
        this.elem = new int[DEFAULT_CAPACITY];
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
        if (isFull()) {
            grow();
        }
        for (int i = usedSize; i >= pos; i--) {
            this.elem[i] = this.elem[i - 1];
        }
        this.elem[pos] = data;
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
        if(isEmpty()) {
            throw new EmptyListException("当前顺序表为空");
        }
        checkPos(pos,"pos位置不合法");
        return this.elem[pos];
    }

    private void checkPos(int pos,String msg) {
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
        for (int i = 0; i < usedSize; i++) {
            this.elem[i] = value;
        }
    }

    @Override
    public void remove(int toRemove) {
        if (contains(toRemove)) {
            int index = indexOf(toRemove);
            for (int i = usedSize - 1; i > index; i++) {
                this.elem[i - 1] = this.elem[i];
            }
        }
    }

    @Override
    public int size() {
        return usedSize;
    }

    @Override
    public void clean() {
        for (int i = 0; i < usedSize; i++) {
            this.elem[i] = -1;
        }
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
