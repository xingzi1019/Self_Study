package user.factory;

import user.AdminUser;
import user.User;

public class AdminUserFactory implements IUserFactory {
    @Override
    public User creatUser(String name, int UserID) {
        return new AdminUser(name, UserID);
    }
}
