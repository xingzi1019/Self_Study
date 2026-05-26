package user;

import book.Library;
import book.PairOfUidAndBookId;
import constant.Constant;
import utils.AnalyzingBorrowedBook;
import utils.LibrarySingleton;
import utils.ScannerSingleton;

import java.io.IOException;
import java.util.Scanner;

// 该类涉及到比较多的文件相关操作
// 我们新搞一个文件来2记录用户和书籍的ID 用来囧路和表达某些书籍和用户之间的关系
public class NormalUser extends User {
    // 用户已借阅的图书相关信息
    private PairOfUidAndBookId[] pairOfUidAndBookIds;
    // 当前书籍的借阅量
    private int borrowedCount;

    private Scanner sc = null;
    private Library library = null;
    private final AnalyzingBorrowedBook analyzingBorrowedBook = new AnalyzingBorrowedBook();

    public NormalUser(String name, int UserID) {
        super(name, UserID, "普通用户");
        loadBorrowedBook();
        sc = ScannerSingleton.getInstance();
        library = LibrarySingleton.getInstance();
    }

    private void loadBorrowedBook() {
        PairOfUidAndBookId[] allBorrowedBooks = null;
        try {
            allBorrowedBooks = analyzingBorrowedBook.loadObject(Constant.BORROWED_BOOK_FILE_NAME);
            pairOfUidAndBookIds = new PairOfUidAndBookId[Constant.BORROW_BOOK_MAX_NUM];
            if (allBorrowedBooks == null) {
                borrowedCount = 0;
            } else {
                int borrowedBookLen = allBorrowedBooks.length;
                if (allBorrowedBooks.length > borrowedBookLen) {
                    pairOfUidAndBookIds = new PairOfUidAndBookId[borrowedBookLen];
                }
                for (int i = 0; i < borrowedBookLen; i++) {
                    pairOfUidAndBookIds[i] = allBorrowedBooks[i];
                }
                borrowedCount = borrowedBookLen;
            }
        } catch (IOException e) {
            throw new RuntimeException(e);
        }
    }

    private void storeBorrowedBook() {

    }

    @Override
    public int display() {
        System.out.println("普通用户 " + getName() + " 的操作菜单:");
        System.out.println("1. 查找图书");
        System.out.println("2. 打印所有的图书");
        System.out.println("3. 退出系统");
        System.out.println("4. 借阅图书");
        System.out.println("5. 归还图书");
        System.out.println("6. 查看当前个⼈借阅情况");
        System.out.println("请选择你的操作：");
        return sc.nextInt();
    }

    //借阅图书
    public void borrowBook() {

    }

    //归还图书
    public void returnBook() {

    }

    // 查看个⼈借阅情况
    public void viewBorrowHistory() {

    }
}
