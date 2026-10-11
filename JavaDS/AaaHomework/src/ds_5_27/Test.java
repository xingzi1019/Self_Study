package ds_5_27;

public class Test {
    public static void main(String[] args) {
        HashBucket hash = new HashBucket();
        hash.put(1, 10);
        hash.put(2, 20);
        hash.put(3, 30);

        System.out.println(hash.get(1)); // 10
        System.out.println(hash.get(2)); // 20
        System.out.println(hash.get(3)); // 30
        System.out.println(hash.get(4)); // -1（不存在）

        hash.put(1, 100); // 更新
        System.out.println(hash.get(1)); // 100
    }
}
