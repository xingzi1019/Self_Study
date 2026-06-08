package demo2;

// 擦除过程：
// • 将泛型参数替换为其边界或 Object。
// • 在必要的地⽅插⼊类型转换以保持类型安全。
// • ⽣成桥接⽅法以保持多态性
class Node<T> {
    T data;

    public void setData(T data) {
        this.data = data;
    }
}

class StringNode extends Node<String> {
    @Override // 为什么这里能构成重写呢 重写的参数列表需要一致的啊
    public void setData(String data) {
        super.setData(data);
    }
    // 此时 StringNode 的 setData ⽅法并没有真正覆盖⽗类的 setData ⽅法（参数类型不同）
    // 为了解决这个问题，编译器会在 StringNode 中⽣成⼀个桥接⽅法：
    // 编译器⽣成的桥接方法
    /*public void setData(Object data) {
        setData((String) data);
    }*/
}
// 没有指定的上界 就会默认为 E extends Object
class MyArray<E extends Number> {
    // 泛型的上界
    //
}

// 擦除机制过后 Node 里面的 T 会被换成 Object 类方法
// 关于桥接⽅法
// • 泛型类型擦除可能导致⼦类⽅法和⽗类⽅法的签名不⼀致
// • 为了维护 Java 的多态性，需要桥接⽅法来确保⼦类⽅法能够正确覆盖⽗类⽅法
class Person {

}

class Student extends Person {

}

class MyArray2<E extends Person> {

}

public class Test {
    public static void main(String[] args) {
        MyArray<Integer> myArray1 = new MyArray<>();
        MyArray2<Student> myArray2 = new MyArray2<>(); // 后面的<>省略 会相当于原始类型(raw type) 丢失泛型安全
        // MyArray2<Integer> myArray3 = new MyArray2<Integer>(); // 会报错 因为不是Person的子类或Person自己
    }
}