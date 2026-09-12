package demo;

public interface Comparable<E> {
    //返回值：
    // < 0：表示this指向的对象小于 o 指向的对象
    // ==0：表示this指向的对象等于 o 指向的对象
    // > 0：表示this指向的对象大于 o 指向的对象
    int compareTo(E o);
}
// 对于我们的自定义类型来说 如果想要按照大小与方式进行比较时: 在定义类时 实现 Comparable 接口即可
// 然后在类里面重写compareTo方法就行

