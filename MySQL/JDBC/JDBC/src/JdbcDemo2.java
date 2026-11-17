import com.mysql.cj.jdbc.MysqlDataSource;

import javax.sql.DataSource;
import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;

public class JdbcDemo2 {
    public static void main() throws SQLException {
        DataSource dataSource = new MysqlDataSource();
        ((MysqlDataSource) dataSource).setUrl("jdbc:mysql://127.0.0.1:3306/java119?characterEncoding=utf8&useSSL=false");
        ((MysqlDataSource) dataSource).setUser("root");
        ((MysqlDataSource) dataSource).setPassword("123456");
        Connection connection = dataSource.getConnection();
        String sql = "select * from student";
        PreparedStatement preparedStatement = connection.prepareStatement(sql);
        ResultSet resultSet = preparedStatement.executeQuery(); // 返回的是 ResultSet
        // 查询到的"临时表" 我们还要针对结果集进行遍历
        while (resultSet.next()) {
            int id = resultSet.getInt("id");
            String name = resultSet.getString("name");
            System.out.println(id + " " + name);
        }
        resultSet.close();
        preparedStatement.close();
        connection.close();
    }
    // 不过后面有一些框架对jdbc进行封装 比如 MyBatis MyBatis Plus JPA 等等框架

}
