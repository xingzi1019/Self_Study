package demosingleton;

public class School {
    public static void main() {
        Principal principal1 = Principal.getPrincipal();
        principal1.announcement("放假一周...");
        principal1.approveDocument("食堂饭菜周末降价...");
        Principal principal2 = Principal.getPrincipal();
        // 其实都是一个对象
        principal2.announcement("放假两天");
        principal2.approveDocument("食堂饭菜加肉");

        System.out.println(principal1);
        System.out.println(principal2);
        // 输出同样的地址 这就是单例模式
        // demo.Principal@4f023edb
        // demo.Principal@4f023edb
        System.out.print("上面两个郝校长是同一个校长吗? ");
        System.out.println(principal1 == principal2); // true
    }
}
