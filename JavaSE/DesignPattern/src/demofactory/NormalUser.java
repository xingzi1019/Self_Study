package demofactory;

public class NormalUser extends User {
    public NormalUser(String name, int age) {
        super(name, age);
    }

    @Override
    public void menu() {
        System.out.println("普通用户的菜单...");
    }
}
