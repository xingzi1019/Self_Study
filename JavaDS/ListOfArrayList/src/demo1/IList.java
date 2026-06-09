package demo1;

public interface IList {
    public void add(int data);

    public void add(int pos, int data);

    public boolean contains(int toFind);

    public int indexOf(int toFind);

    public int get(int pos);

    public void set(int pos, int value);

    public void remove(int toRemove);

    public int size();

    public void clean();

    public void display();
}
// 记得接口的一些特性 不要我忘记了 忘了就滚去复习