package demo2;

import java.util.*;

public class Test {
    public static void main(String[] args) {
        Set<String> strings = new TreeSet<>();
        strings.add("abc");
        strings.add("abc");
        strings.add("xingzi");
        System.out.println(strings);
        // [abc, xingzi]
        System.out.println(strings.contains("abc")); // true

        // 游标刚开始在第一个元素之前
        Iterator<String> it = strings.iterator();
        while (it.hasNext()) {
            System.out.println(it.next());
            // abc
            // xingzi
        }
    }

    // TreeSet 和 TreeMap 是搜索树 红黑树
    // HashSet 和 HashMap 是哈希表
    public static void main3(String[] args) {
        Map<String, Integer> map = new TreeMap<>();
        map.put("abcd", 1);
        map.put("hello", 3);

        Set<String> set = map.keySet();
        System.out.println(set);         // [abcd, hello]

        Collection<Integer> collection = map.values();
        System.out.println(collection);  // [1, 3]

        // entrySet() 方法用于获取 Map 中所有键值对（Entry）的集合视图
        // 它返回一个 Set<Map.Entry<K, V>>
        // 其中每个元素都是一个键值对对象
        Set<Map.Entry<String, Integer>> entrySet = map.entrySet();
        for (Map.Entry<String, Integer> entry : entrySet) {
            System.out.println("key:" + entry.getKey() + " " + "val" + entry.getValue());
            // key:abcd val1
            // key:hello val3
        }
        // 可以顺便回忆一下 范围 for 的遍历
        int[] array = new int[]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        for (int i : array) {
            System.out.print(i + " ");
        }
    }

    public static void main2(String[] args) {
        // Set - 无重复元素
        Set<String> hashSet = new HashSet<>();         // 无序 基于哈希表
        Set<String> treeSet = new TreeSet<>();         // 有序 基于红黑树
        // Map - 键值对
        Map<String, Integer> hashMap = new HashMap<>(); // 无序 基于哈希表
        Map<String, Integer> treeMap = new TreeMap<>(); // 有序 基于红黑树
        // 和 C++ 那边差不多的
    }

    public static void main1(String[] args) {
        //  key     value
        Map<String, Integer> map = new TreeMap<>();
        map.put("abcd", 1);
        map.put("hello", 3);
        // 比较大小是看 key 这里的 String  是可以比较的
        Integer val1 = map.get("abcd");
        int val2 = map.get("hello"); // 自动拆箱
        System.out.println(val1);  // 1
        System.out.println(val2); // 3
        Integer val3 = map.get("good");
        System.out.println(val3); // null

        Integer val = map.getOrDefault("abcd8", 8);
        System.out.println(val); // 8
    }
}
