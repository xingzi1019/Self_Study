package user;

public class ProxyUser {
    private User realuser;

    public ProxyUser(User user) {
        this.realuser = user;
    }

    public int display() {
        return this.realuser.display();
    }

    public User getRealuser() {
        return realuser;
    }

    // ============== 管理员的方法 ================
    //上架图书
    public void addBook() {
    }

    //图书修改 ⽀持修改书名 作者 类别
    public void updateBook() {
    }

    //删除书籍
    public void removeBook() {

    }

    //统计每本书的借阅次数
    public void borrowCount() {
    }

    //查询最受欢迎的前n本书
    public void generateBook() {
    }

    //查看库存状态
    public void checkInventoryStatus() {
    }

    //按照类别 统计图书
    public void categorizeBooksByCategory() {
    }

    //按照作者统计图书
    public void categorizeBooksByAuthor() {
    }

    //并移除上架超过⼀年的图书
    public void checkAndRemoveOldBooks() {
    }

    public void exit() {
    }
    //============ 普通用户的方法 =========
    //借阅图书
    public void borrowBook() {
    }

    //归还图书
    public void returnBook() {
    }

    // 查看个⼈借阅情况
    public void viewBorrowBooks() {
    }
}
