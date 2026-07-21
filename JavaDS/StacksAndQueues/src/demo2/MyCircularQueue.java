package demo2;

public class MyCircularQueue {

    public int[] elem;
    public int rear;
    public int front;

    public MyCircularQueue(int k) {
        this.elem = new int[k+1];
    }

    public boolean enQueue(int value) {
        if (isFull()) {
            return false;
        }
        elem[rear] = value;
        rear = (rear + 1) % elem.length;
        return true;
    }

    public boolean deQueue() {
        if (isEmpty()) {
            return false;
        }
        front = (front + 1) % elem.length;
        return true;
    }

    public int Front() {
        if (isEmpty()) {
            return -1;
        }
        return elem[front];
    }

    public int Rear() {
        if (isEmpty()) {
            return -1;
        }
        if(rear == 0) {
            return elem[elem.length-1];
        } else {
            return elem[rear-1];
        }
    }

    public boolean isEmpty() {
        return rear == front;
    }

    public boolean isFull() {
        return (rear + 1) % elem.length == front;
    }
}
