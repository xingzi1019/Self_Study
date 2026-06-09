package demofactory;

public class NormalUserFactory implements UserFactory{
    @Override
    public User createUser(String name, int age) {
        return new NormalUser(name,age);
    }
}
