import user.factory.AdminUserFactory;
import user.factory.IUserFactory;
import user.factory.NormalUserFactory;
import user.User;

// 图书管理系统 将前面所学的知识点都串起来 是巩固复习也是总结
public class LibrarySystem {
    // 代理模式
    public static void main() {

    }

    // 工厂模式
    public static void main1() {
        IUserFactory adminUserFactory = new AdminUserFactory();
        IUserFactory normalUserFactory = new NormalUserFactory();
        User admin = adminUserFactory.creatUser("莫宁",1);
        User normal1 = normalUserFactory.creatUser("千咲",2);
        User normal2 = normalUserFactory.creatUser("波仔",3);
        admin.display();
        System.out.println("========");
        normal1.display();
        System.out.println("========");
        normal2.display();
    }
}
