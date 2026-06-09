package demofactory;

public class AdminFactory implements UserFactory {
    @Override
    public User createUser(String name, int age) {
        return new AdminUser(name, age);
    }
}
