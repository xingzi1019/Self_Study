package user.factory;

import user.User;

public interface IUserFactory {
    /**
     * 就当复习了
     * 这个是抽象方法 记住接口默认是 public abstract 的
     *
     * @param name   .
     * @param UserID .
     * @return 返回一个User类型的类
     */
    User creatUser(String name, int UserID);
    // 为什么无论几个参数上面这个方法它都不会报错
}
