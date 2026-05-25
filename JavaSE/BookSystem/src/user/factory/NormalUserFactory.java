package user.factory;

import user.NormalUser;
import user.User;

public class NormalUserFactory implements IUserFactory {
    @Override
    public User creatUser(String name, int UserID) {
        return new NormalUser(name, UserID);
        // 返回 NormalUSer 让它发生向上转型发生多态
    }
}
