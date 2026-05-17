package demo1;
// 用户名/密码输错是预期内的业务情况 不是程序 bug
// 所以用 RunTimeException 比较合适
//public class PassWordException extends RuntimeException {
//    public PassWordException() {
//        super();
//    }
//
//    public PassWordException(String message) {
//        super(message);
//    }
//}
public class PassWordException extends Exception {
    public PassWordException() {
        super();
    }

    public PassWordException(String message) {
        super(message);
    }
}
