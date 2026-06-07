import static java.util.Collections.swap;

public class Space {
    // 空间复杂度是对⼀个算法在运⾏过程中临时占⽤存储空间⼤⼩的量度
    // 空间复杂度不是程序占⽤了多少bytes的空间，因为这个也没太大意义，所以空间复杂度算的是变量的个数
    // 空间复杂度计算规则基本跟时间复杂度类似，也使⽤⼤O渐进表⽰法
    public static void bubbleSort(int[] array) {
        for (int end = array.length; end > 0; end--) {
            boolean sorted = true;
            for (int i = 1; i < end; i++) {
                if (array[i - 1] > array[i]) {
                    swap(array, i - 1, i);
                    sorted = false;
                }
            }

            if (sorted == true) {
                break;
            }
        }
    } // o(1)

    long factorial(int N) {
        return N < 2 ? N : factorial(N - 1) * N;
    } // o(n)

    private static void swap(int[] array, int i, int i1) {
    }

    public static void main(String[] args) {
        int[] arr = {5, 4, 3, 2, 1};
        bubbleSort(arr);
    }
}
