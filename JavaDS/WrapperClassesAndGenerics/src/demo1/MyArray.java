package demo1;
// 所以，泛型的主要目的：就是指定当前的容器
// 要持有什么类型的对象 让编译器去做检查
public class MyArray<T> {
    // <T> : 占位符 表示当前这个类是一个泛型
    // <K,V> : 也可以通过','来写好几个
    // 可以继承
    public Object[] array = new Object[10];

    public T getPos(int pos) {
        return (T) this.array[pos];
    }

    public void setVal(int pos, T val) {
        this.array[pos] = val;
    }
}
// 麻烦自己方便他人