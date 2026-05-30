package user;

import book.Book;
import book.Library;
import utils.LibrarySingleton;
import utils.ScannerSingleton;

import java.time.LocalDate;
import java.time.LocalDateTime;
import java.util.Scanner;

public class AdminUser extends User {
    private Scanner sc = null;
    private Library library = null;

    public AdminUser(String name, int UserID) {
        super(name, UserID, "图书管理员");
        library = LibrarySingleton.getInstance();
        sc = ScannerSingleton.getInstance();
    }

    @Override
    public int display() {
        System.out.println("管理员 " + getName() + " 的操作菜单:");
        System.out.println("1. 查找图书");
        System.out.println("2. 打印所有的图书");
        System.out.println("3. 退出系统");
        System.out.println("4. 上架图书");
        System.out.println("5. 修改图书");
        System.out.println("6. 下架图书");
        System.out.println("7. 统计借阅次数");
        System.out.println("8. 查看最后欢迎的前K本书");
        System.out.println("9. 查看库存状态");
        System.out.println("10. 按类别统计图书 ");
        System.out.println("11. 按作者统计图书 ");
        System.out.println("12. 检查超过⼀年未下架的图书");
        System.out.println("请选择你的操作：");
        return sc.nextInt();
    }

    // 做准备工作的 真正的实现我们放在 Library 类里面
    //上架图书
    public void addBook() {
        Book book = new Book(); // 首先new一个 book 出来
        sc.nextLine();
        System.out.println("正在新增图书");
        System.out.println("请输入你要增加的书籍的书名:");
        String title = sc.nextLine();
        // sc.nextLine();
        System.out.println("请输入你要增加的书籍的作者:");
        String author = sc.nextLine();
        // sc.nextLine();
        System.out.println("请输入你要增加的书籍的种类:");
        String category = sc.nextLine();
        // sc.nextLine();
        System.out.println("请输入你要增加的书籍的出版年份:");
        int time = sc.nextInt();
        // sc.nextLine();
        LocalDate localDate = LocalDate.now();
        book.setTitle(title);
        book.setAuthor(author);
        book.setCategory(category);
        book.setPublishYear(time);
        book.setShelfDate(localDate);
        library.addBook(book);
    }

    //图书修改 ⽀持修改书名 作者 类别
    public void updateBook() {
        library.displayBooks();
        System.out.println("请输入你要修改的书籍的ID");
        int id = sc.nextInt();
        sc.nextLine(); // 吸收回车
        Book book = library.searchById(id);
        if (book == null) {
            System.out.println("找不到你要修改的书籍");
            return;
        }
        System.out.println("请输入修改后的书名");
        String title = sc.nextLine();
        System.out.println("请输入修改后的作者");
        String author = sc.nextLine();
        System.out.println("请输入修改后的种类");
        String category = sc.nextLine();
        System.out.println("请输入修改后的出版时间");
        int publishTime = sc.nextInt();
        book.setTitle(title);
        book.setAuthor(author);
        book.setCategory(category);
        book.setPublishYear(publishTime);
        library.updateBook(book);
    }

    //删除书籍
    public void removeBook() {
        sc.nextLine();
        library.displayBooks();
        System.out.println("请输入你要删除的书籍的id:");
        int id = sc.nextInt();
        sc.nextLine();
        Book book = library.searchById(id);
        if (book == null) {
            System.out.println("没有你要删除的书籍");
            return;
        }
        library.removeBook(id);
        System.out.println("下架图书成功");
    }

    //统计每本书的借阅次数
    public void borrowCount() {
        library.borrowCount();
    }

    //查询最受欢迎的前n本书
    public void generateBook() {
        System.out.println("请输⼊你要查看的最受欢迎的前K本书,注意k值不能超 过：" + library.bookCount);
        int k = sc.nextInt();
        if (k <= 0 || k > library.bookCount) {
            System.out.println("输入的k值不合理");
            System.out.println("没有最受欢迎的前" + k + "本书！");
            return;
        }
        library.generateBook(k);
    }

    //查看库存状态
    public void checkInventoryStatus() {
        library.checkInventoryStatus();
    }

    // 统计图书是我自己瞎鸡巴乱加的？？？
    // 这两个比较有难度 回头挑战一下
    //按照类别 统计图书
    public void categorizeBooksByCategory() {
        library.categorizeBooksByCategory();
    }

    //按照作者统计图书
    public void categorizeBooksByAuthor() {
        library.categorizeBooksByAuthor();
    }

    //并移除上架超过⼀年的图书
    public void checkAndRemoveOldBooks() {
        library.checkAndRemoveOldBooks();
    }

    public void exit() {
    }
}
