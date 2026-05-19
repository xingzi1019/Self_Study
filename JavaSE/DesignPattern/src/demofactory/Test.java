package demofactory;

public class Test {
    public static void main() {
        UserFactory adminuserfactory = new AdminFactory();
        UserFactory normaluserfactory = new NormalUserFactory();
        User admin = adminuserfactory.createUser("芙莉连",1000);
        admin.menu(); // 管理员的菜单...    运行时多态
        // 返回的类型是 User
        User normal1 = normaluserfactory.createUser("菲伦",18);
        normal1.menu(); // 普通用户的菜单...
        User normal2 = normaluserfactory.createUser("休塔尔克",18);
        normal2.menu(); // 普通用户的菜单...
        AdminUser a1 = (AdminUser) adminuserfactory.createUser("aa", 2);
        a1.menu(); // 管理员的菜单...
        NormalUser n1 = (NormalUser) normaluserfactory.createUser("bb", 78);
        n1.menu(); // 普通用户的菜单...
    }

    public static void main1() {
        AdminUser adminUser = new AdminUser(
                "唐僧", 18);
        NormalUser normalUser1 = new NormalUser(
                "孙悟空", 1000);
        NormalUser normalUser2 = new NormalUser(
                "猪八戒", 800);
        // 发现上面的代码 耦合性太强了 代码重复率也非常高
        // 需要解耦 因此我们推出另一个设计模式--->工厂模式
    }
}
