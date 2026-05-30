package user.factory;

import user.AdminUser;
import user.User;

public class AdminUserFactory implements IUserFactory {
    @Override
    public User createUser(String name, int UserID) {
        return new AdminUser(name, UserID);
        // 返回AdminUser让它向上转型实现多态
    }
}