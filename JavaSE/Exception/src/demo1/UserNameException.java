package demo1;
// 用户名/密码输错是预期内的业务情况 不是程序 bug
// 所以用 RunTimeException 比较合适
//public class UserNameException extends RuntimeException { // 继承之后图标变闪电
//    public UserNameException() {
//        super();
//    }
//
//    public UserNameException(String s) {
//        super(s);
//    }
//}

// 改成继承 Exception 是编译异常会报错
public class UserNameException extends Exception { // 继承之后图标变闪电
    public UserNameException() {
        super();
    }

    public UserNameException(String s) {
        super(s);
    }
}

// 总结
// 🎯 业务预期的错误 → RuntimeException（不强制处理，灵活）
// 🎯 必须处理的严重问题 → Exception（编译器强制你处理）
