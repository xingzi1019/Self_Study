import user.ProxyUser;
import user.factory.AdminUserFactory;
import user.factory.IUserFactory;
import user.factory.NormalUserFactory;
import user.User;
import utils.ScannerSingleton;

import java.util.Scanner;

// 图书管理系统 将前面所学的知识点都串起来 是巩固复习也是总结
// 先听会 再写会 再讲会
public class LibrarySystem {
    public static void main(String[] args) {
        // 工厂模式
        IUserFactory adminUserFactory = new AdminUserFactory();
        IUserFactory normalUserFactory = new NormalUserFactory();
        User admin = adminUserFactory.createUser("莫宁", 1);
        User normal1 = normalUserFactory.createUser("千咲", 2);
        User normal2 = normalUserFactory.createUser("波仔", 3);
        // 代理模式
        ProxyUser proxyUserAdmin = new ProxyUser(admin);
        ProxyUser proxyUserNormal1 = new ProxyUser(normal1);
        ProxyUser proxyUserNormal2 = new ProxyUser(normal2);
        LibrarySystem librarySystem = new LibrarySystem();
        ProxyUser currentUser = librarySystem.selectProxyUser(proxyUserAdmin, proxyUserNormal1, proxyUserNormal2);
        while (true) {
            int choice = currentUser.display();
            // 还要实现不同用户的不同选择 多态实现
            currentUser.handleOperation(choice);
        }
        // 输出测试
        /*admin.display();
        System.out.println("========");
        normal1.display();
        System.out.println("========");
        normal2.display();*/
    }

    public ProxyUser selectProxyUser(ProxyUser proxyUserAdmin,
                                     ProxyUser proxyUserNormal1, ProxyUser proxyUserNormal2) {
        System.out.println("选择角色进行登录：");
        System.out.println("1.管理员(莫宁)\n2.普通用户(千咲)\n3.普通用户(波仔)\n4.退出系统");
        Scanner scanner = ScannerSingleton.getInstance();
        while (true) {
            int choice = scanner.nextInt();
            switch (choice) {
                case 1:
                    return proxyUserAdmin;
                case 2:
                    return proxyUserNormal1;
                case 3:
                    return proxyUserNormal2;
                case 4:
                    System.out.println("系统已退出..");
                    System.exit(0);
                default:
                    System.out.println("输入无效，请重新选择(1-4)：");
            }
        }
    }
}
