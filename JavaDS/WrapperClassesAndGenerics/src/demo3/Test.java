package demo3;

// 写一个泛型类 求一个T类型数组当中的最大值 但是数组是没有指定类型的
class Alg<T extends Comparable<T>> {
    public T findMaxVal(T[] array) {
        T max = array[0];
        for (int i = 0; i < array.length; i++) {
            if (max.compareTo(array[i]) < 0) {      // 传进来的是引用类型 引用类型不能直接用 < 号来进行比较
                max = array[i];
            }
        }
        return max;
    }
}

class Alg2 {
    // 静态的泛型方法
    public static <T extends Comparable<T>> T findMaxVal(T[] array) {
        T max = array[0];
        for (int i = 0; i < array.length; i++) {
            if (max.compareTo(array[i]) < 0) {
                max = array[i];
            }
        }
        return max;
    }
}

class Alg3 {
    // 非静态的泛型方法
    public <T extends Comparable<T>> T findMaxVal(T[] array) {
        T max = array[0];
        for (int i = 0; i < array.length; i++) {
            if (max.compareTo(array[i]) < 0) {
                max = array[i];
            }
        }
        return max;
    }
}

public class Test {
    public static void main(String[] args) {
        Integer[] array = {1, 21, 13, 41, 5, 16, 17};
        Alg3 alg3 = new Alg3();
        // int ret = alg3.findMaxVal(array); // 根据传进来的实参类型自动推导 T 的类型
        int ret = alg3.<Integer>findMaxVal(array);
        System.out.println(ret); // 41
    }

    public static void main2(String[] args) {
        Integer[] array = {1, 21, 13, 41, 5, 16, 17};
        int ret1 = Alg2.<Integer>findMaxVal(array);
        int ret2 = Alg2.findMaxVal(array); // 不写 <Integer> 也不会报错 会根据传进来的 array 进行自动判断
        System.out.println(ret1);
    }

    public static void main1(String[] args) {
        Alg<Integer> alg = new Alg<>();
        // 实例化的时候会传泛型参数
        Integer[] array = {1, 21, 13, 41, 5, 16, 17};
        int ret = alg.findMaxVal(array); // 用 int 接收相当于是自动拆箱了
        // Integer ret = alg.findMaxVal(array);
        System.out.println(ret);
    }
}
