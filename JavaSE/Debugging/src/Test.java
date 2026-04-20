import java.util.*;

public class Test {
    public static void main(String[] args) {
        System.out.println("=== 调试练习代码 ===\n");

        // Bug 1: NullPointerException - 未初始化就使用
        String s = null;
        System.out.println("字符串长度: " + s.length());

        // Bug 2: ArrayIndexOutOfBoundsException
        int[] arr = {1, 2, 3};
        System.out.println("第4个元素: " + arr[3]);

        // Bug 3: ClassCastException
        List<String> list = new ArrayList<>();
        list.add("hello");
        Object o = list.get(0);
        Integer num = (Integer) o;  // String -> Integer 强转

        // Bug 4: 逻辑错误 - 死循环
        // int count = 0;
        // while (count < 10) {
        //     System.out.println(count);
        //     count--;  // 应该是 ++
        // }

        // Bug 5: 整数溢出
        int large = Integer.MAX_VALUE;
        System.out.println("最大值+1: " + (large + 1));

        // Bug 6: 除零错误
        int a = 10;
        int b = 0;
        System.out.println("10/0 = " + (a / b));

        // Bug 7: 空指针在集合操作中
        List<Integer> nullList = null;
        nullList.add(1);

        // Bug 8: 字符串拼接常见错误
        String str1 = "hello";
        String str2 = "hello";
        System.out.println("str1 == str2: " + (str1 == str2));  // 应该是 equals
        System.out.println("str1.equals(str2): " + str1.equals(str2));

        // Bug 9: ConcurrentModificationException
        List<String> fruits = new ArrayList<>(Arrays.asList("苹果", "香蕉", "橙子"));
        for (String fruit : fruits) {
            if (fruit.equals("香蕉")) {
                fruits.remove(fruit);  // foreach遍历中删除元素
            }
        }

        // Bug 10: 资源未关闭
        // Scanner scanner = new Scanner(System.in);
        // scanner.nextLine();  // 使用完未关闭

        System.out.println("\n程序结束");
    }
}
