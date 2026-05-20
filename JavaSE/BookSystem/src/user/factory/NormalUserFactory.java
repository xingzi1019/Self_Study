package user.factory;

import user.NormalUser;
import user.User;

public class NormalUserFactory implements IUserFactory {
    @Override
    public User creatUser(String name, int UserID) {
        return new NormalUser(name, UserID);
    }
}
