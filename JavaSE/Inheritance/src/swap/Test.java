package swap;

public class Test {
    
    public static void swap(MyValue a,MyValue b){ // 这里的 a 和 b 是地址
        int temp = a.value;
        // a.value 的 . 操作符是在做下面这样的事情
        // 读取 a中存储的地址
        // 根据这个地址找到堆内存中对应的 MyValue对象
        // 在这个对象内部 找到名为 value的成员变量
        a.value = b.value;
        b.value = temp;
    }
    public static void main1(){
        MyValue val1 = new MyValue();
        MyValue val2 = new MyValue();
        val1.value = 10;
        val2.value = 20;
        System.out.println(val1.value+"  "+val2.value);
        swap(val1,val2);
        System.out.println(val1.value+"  "+val2.value);
    }
}
