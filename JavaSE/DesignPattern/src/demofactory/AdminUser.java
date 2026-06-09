package demofactory;

public class AdminUser extends User {
    public AdminUser(String name, int age) {
        super(name, age);
    }

    @Override
    public void menu() {
        System.out.println("管理员的菜单...");
    }
}
