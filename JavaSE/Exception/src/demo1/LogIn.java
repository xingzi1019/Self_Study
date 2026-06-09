package demo1;
// ⾃定义异常通常会继承⾃ Exception 或者 RuntimeException
// 继承⾃ Exception 的异常默认是受查异常
// 继承⾃ RuntimeException 的异常默认是⾮受查异常

// 子类抛出的异常是不能大于父类抛出的异常的
public class LogIn {
    private String userName = "admin";
    private String password = "123456";

    /*public void login(String userName, String password) {
        if (!this.userName.equals(userName)) {
            System.out.println("用户名错误异常...");
            return;
        }
        if (!this.password.equals(password)) {
            System.out.println("密码错误异常...");
            return;
        }
        System.out.println("登录成功");
    }*/

    /*public void login(String userName, String password) throws UserNameException, PassWordException {
        if (!this.userName.equals(userName)) {
            throw new UserNameException("用户名错误,发生异常了..." + userName);
            // 抛出异常后面的代码就不执行了 所以不需要写 return
        }
        if (!this.password.equals(password)) {
            throw new PassWordException("密码错误,发生异常..." + password);
        }
        System.out.println("登录成功");
    }*/
    public void login(String userName, String password) throws UserNameException, PassWordException {
        if (!this.userName.equals(userName)) {
            throw new UserNameException("用户名错误,发生异常了..." + userName);
            // 抛出的是编译时异常 要编译通过必须处理异常
            // 法一: 声明异常
            // 法二: try catch
        }
        if (!this.password.equals(password)) {
            throw new PassWordException("密码错误,发生异常..." + password);
        }
        System.out.println("登录成功");
    }

    public static void main() throws UserNameException, PassWordException { // 这里再声明就交给 JVM 了
        LogIn logIn = new LogIn();
        logIn.login("admin2", "123456");
        System.out.println("程序继续执行...");
    }
    // 总结
    // 可以在向上传递的任一环节 try catch 往后就不用声明
    // 就是说如果处理了那就不用声明了

    /*public static void main() {
        LogIn logIn = new LogIn();
        try {
            logIn.login("admin2", "123456");
        } catch (UserNameException e) {
            e.printStackTrace();
        } catch (PassWordException e) {
            e.printStackTrace();
        }
        System.out.println("程序继续执行...");
    }*/
}

// 易懂和高效才是好代码
// 而不是说简洁的才是好代码
