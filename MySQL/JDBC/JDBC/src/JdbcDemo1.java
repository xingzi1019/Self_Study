import com.mysql.cj.jdbc.MysqlDataSource;

import javax.sql.DataSource;
import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.SQLException;
import java.util.Scanner;

public class JdbcDemo1 {
    public static void main() throws SQLException {
        Scanner scanner = new Scanner(System.in);

        // 1.创建数据源对象
        DataSource dataSource = new MysqlDataSource(); // DataSource是一个接口 MysqlDataSource实现了这个接口
        ((MysqlDataSource) dataSource).setURL("jdbc:mysql://127.0.0.1:3306/java119?characterEncoding=utf8&useSSL=false");
        ((MysqlDataSource) dataSource).setUser("root");
        ((MysqlDataSource) dataSource).setPassword("123456");
        // 上下两种写法都可以 功能上完全一致 市面上流行上面那种 原因不太明确
        /*MysqlDataSource dataSource1 = new MysqlDataSource();
        dataSource1.setURL();*/
        // 以后工作操作数据库 会用到更方便的框架

        // 2.和数据库服务器进行通信,需要建立网络连接
        Connection connection = dataSource.getConnection();

        // 3.构造SQL语句
        System.out.println("请输入要插入的id: ");
        int id = scanner.nextInt();
        System.out.println("请输入要插入的name: ");
        String name = scanner.next();
        // String sql = "insert into student values("+id + ",\""+name + "\")"; // 代码太丑了
        String sql = "insert into student values(?,?)"; // 占位符
        PreparedStatement preparedStatement = connection.prepareStatement(sql);
        // String sql2 = "select * from student;";
        preparedStatement.setInt(1,id);       // 把 preparedStatement 的第 index 的占位符 替换成对应的 Java 值
        preparedStatement.setString(2,name); // set的一系列方法 第一个参数表示要替换掉第几个占位符
        // 上面这种代码的写法比较推荐

        // 4.执行sql(把sql通过网络发送到服务器)
        // 进行增,删,改 这些操作统称为 update
        // 查有另一个方法 executeQuery()
        int n = preparedStatement.executeUpdate(); // n 表示受到影响的行数
        System.out.println("n = " + n);

        // 5.关闭连接资源 先开后关 有点类似栈
        preparedStatement.close();
        connection.close();
    }
    // url: 作用标时一个网络上的唯一资源
}
