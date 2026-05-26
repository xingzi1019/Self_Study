package user;

import book.Library;
import constant.Constant;
import utils.LibrarySingleton;
import utils.PermissionException;

import javax.naming.NoPermissionException;

public class ProxyUser {
    private User realuser;
    private Library library = null;

    public ProxyUser(User user) {
        this.realuser = user;
        library = LibrarySingleton.getInstance();
    }

    public int display() {
        return this.realuser.display();
    }

    public User getRealuser() {
        return realuser;
    }

    // ============== 管理员的方法 ================
    private void checkRealUserWhetherAdminUser(String msg) {
        if (!((this.realuser) instanceof AdminUser)) {
            throw new PermissionException(msg);
        }
    }

    //上架图书
    public void addBook() {
        System.out.println("Proxy 的 addBook 方法执行了");
        try {
            checkRealUserWhetherAdminUser("普通星炬学生没有权限添加书籍");
        } catch (PermissionException e) {
            e.printStackTrace();
        }
        ((AdminUser) this.realuser).addBook();
    }

    //图书修改 ⽀持修改书名 作者 类别
    public void updateBook() {
        System.out.println("Proxy 的 updateBook 方法执行了");
        try {
            checkRealUserWhetherAdminUser("普通星炬学生没有权限修改书籍信息");
        } catch (PermissionException e) {
            e.printStackTrace();
        }
        ((AdminUser)this.realuser).updateBook();
    }

    //删除书籍
    public void removeBook() {
        System.out.println("Proxy 的 removeBook 方法执行了");
        try {
            checkRealUserWhetherAdminUser("普通星炬学生没有权限删除书籍");
        } catch (PermissionException e) {
            e.printStackTrace();
        }
        ((AdminUser)this.realuser).removeBook();
    }

    //统计每本书的借阅次数
    public void borrowCount() {
        System.out.println("Proxy 的 borrowCount 方法执行了");
        try {
            checkRealUserWhetherAdminUser("普通星炬学生没有权限统计书籍借阅次数");
        } catch (PermissionException e) {
            e.printStackTrace();
        }
        ((AdminUser)this.realuser).borrowCount();
    }

    //查询最受欢迎的前n本书
    public void generateBook() {
        System.out.println("Proxy 的 generateBook 方法执行了");
        try {
            checkRealUserWhetherAdminUser("普通星炬学生没有权限查询受欢迎的书籍");
        } catch (PermissionException e) {
            e.printStackTrace();
        }
        ((AdminUser)this.realuser).generateBook();
    }

    //查看库存状态
    public void checkInventoryStatus() {
        System.out.println("Proxy 的 checkInventoryStatus 方法执行了");
        try {
            checkRealUserWhetherAdminUser("普通星炬学生没有权限查询库存状态");
        } catch (PermissionException e) {
            e.printStackTrace();
        }
        ((AdminUser)this.realuser).checkInventoryStatus();
    }

    //按照类别 统计图书
    public void categorizeBooksByCategory() {
        System.out.println("Proxy 的 categorizeBooksByCategory 方法执行了");
        try {
            checkRealUserWhetherAdminUser("普通星炬学生没有权限按类别统计图书");
        } catch (PermissionException e) {
            e.printStackTrace();
        }
        ((AdminUser)this.realuser).categorizeBooksByCategory();
    }

    //按照作者统计图书
    public void categorizeBooksByAuthor() {
        System.out.println("Proxy 的 categorizeBooksByAuthor 方法执行了");
        try {
            checkRealUserWhetherAdminUser("普通星炬学生没有权限按作者统计图书");
        } catch (PermissionException e) {
            e.printStackTrace();
        }
        ((AdminUser)this.realuser).categorizeBooksByAuthor();
    }

    //并移除上架超过⼀年的图书
    public void checkAndRemoveOldBooks() {
        System.out.println("Proxy 的 checkAndRemoveOldBooks 方法执行了");
        try {
            checkRealUserWhetherAdminUser("普通星炬学生没有权限移除旧图书");
        } catch (PermissionException e) {
            e.printStackTrace();
        }
        ((AdminUser)this.realuser).checkAndRemoveOldBooks();
    }

    public void exit() {

    }

    //============ 普通用户的方法 =========
    private void checkRealUserWhetherNormalUser(String exceptionMessage) {
        if (!(this.realuser instanceof NormalUser)) {
            throw new PermissionException(exceptionMessage);
        }
    }

    //借阅图书
    public void borrowBook() {
        System.out.println("Proxy 的 borrowBook 方法执行了");
        checkRealUserWhetherAdminUser("管理员不能借阅图书,换成普通学生");
        ((NormalUser) this.realuser).borrowBook();
    }

    //归还图书
    public void returnBook() {
        System.out.println("Proxy 的 returnBook 方法执行了");
        checkRealUserWhetherAdminUser("管理员不能归还图书,换成普通学生");
        ((NormalUser) this.realuser).returnBook();
    }

    // 查看个⼈借阅情况
    public void viewBorrowHistory() {
        System.out.println("Proxy 的 viewBorrowHistory 方法执行了");
        checkRealUserWhetherAdminUser("管理员不能归还图书,换成普通学生");
        ((NormalUser) this.realuser).viewBorrowHistory();
    }

    public void handleOperation(int choice) {
        if (realuser instanceof AdminUser) {
            switch (choice) {
                case Constant.SEARCH_BOOK:
                    library.searchBook();
                    break;
                case Constant.DISPLAY_BOOK:
                    library.displayBooks();
                    break;
                case Constant.EXIT:
                    library.exit();
                    break;
                case Constant.ADD_BOOK:
                    addBook();
                    break;
                case Constant.UPDATE_BOOK:
                    updateBook();
                    break;
                case Constant.REMOVE_BOOK:
                    removeBook();
                    break;
                case Constant.BORROWED_BOOK_COUNT:
                    borrowCount();
                    break;
                case Constant.GENERATE_BOOK:
                    generateBook();
                    break;
                case Constant.CHECK_INVENTORY_STATUS:
                    checkInventoryStatus();
                    break;
                case Constant.CHECK_AND_REMOVE_OLD_BOOK:
                    checkAndRemoveOldBooks();
                default:
                    break;
            }
        } else {
            switch (choice) {
                case Constant.SEARCH_BOOK:
                    library.searchBook();
                    break;
                case Constant.DISPLAY_BOOK:
                    library.displayBooks();
                    break;
                case Constant.EXIT:
                    library.exit();
                    break;
                case Constant.BORROWED_BOOK:
                    borrowBook();
                    break;
                case Constant.RETURN_BOOK:
                    returnBook();
                    break;
                case Constant.VIEW_BORROW_HISTORY_BOOK:
                    viewBorrowHistory();
                    break;
            }
        }
    }
}
