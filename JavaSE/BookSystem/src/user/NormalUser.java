package user;

import book.Book;
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
                if (borrowedBookLen > pairOfUidAndBookIds.length) {
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
        try {
            analyzingBorrowedBook.storeObject(pairOfUidAndBookIds, Constant.BORROWED_BOOK_FILE_NAME);
        } catch (Exception e) {
            // storeObject 内部未声明 throws IOException（FileUtils 已在内部处理异常），
            // 故此处只能捕获 Exception 而非 IOException
            throw new RuntimeException(e);
        }
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
        sc.nextLine(); // 吸收回车
        System.out.println("请输入你要借阅的图书的ID");
        int desBookID = sc.nextInt();
        sc.nextLine(); // 再吸收回车
        if (library.bookCount == 0) {
            System.out.println("星炬学院图书馆没有书籍可以借阅");
            return;
        }
        loadBorrowedBook();
        Book book = library.searchById(desBookID);
        if (book == null) {
            System.out.println("没有该id的相关书籍:" + desBookID);
            return;
        }
        if (borrowedCount >= pairOfUidAndBookIds.length) {
            System.out.println("借阅数量已达上限，无法继续借阅");
            return;
        }
        for (int i = 0; i < borrowedCount; i++) {
            PairOfUidAndBookId pairOfUidAndBookId = pairOfUidAndBookIds[i];
            if (pairOfUidAndBookId.getBookID() == book.getBookID()) {
                if (pairOfUidAndBookId.getUid() == getUserID()) {
                    System.out.println("这书你借过了");
                    return;
                } else {
                    System.out.println("该书被别人借了");
                    return;
                }
            }
        }

        library.borrowBook(desBookID);
        PairOfUidAndBookId pairOfUidAndBookId = new PairOfUidAndBookId(getUserID(), book.getBookID());
        pairOfUidAndBookIds[borrowedCount] = pairOfUidAndBookId;
        borrowedCount++;
        storeBorrowedBook();
        System.out.println("借阅成功");
    }

    //归还图书
    public void returnBook() {
        loadBorrowedBook();
        if (borrowedCount == 0) {
            System.out.println("⽬前没有人借过书籍");
            return;
        }
        sc.nextLine();
        System.out.println("请输⼊你要归还图书的id：");
        int bookId = sc.nextInt();
        sc.nextLine();
        //判断要借阅的书 是否是已经被⾃⼰借阅过了
        Book book = library.searchById(bookId);
        if (book == null) {
            System.out.println("没有该id的相关书籍：" + bookId);
            return;
        }
        for (int i = 0; i < borrowedCount; i++) {
            //如果2本书的ID，则认为是同⼀本书
            if (pairOfUidAndBookIds[i].getBookID() == book.getBookID()) {
                //借阅用户也⼀样
                if (getUserID() == pairOfUidAndBookIds[i].getUid()) {
                    library.returnBook(bookId);
                    System.out.println("图书 '" + book.getTitle() + "' 已成功归还");
                    // ⽤最后⼀本替换归还的书
                    pairOfUidAndBookIds[i] = pairOfUidAndBookIds[borrowedCount - 1];
                    // 清空最后⼀个
                    pairOfUidAndBookIds[borrowedCount - 1] = null;
                    borrowedCount--;
                    storeBorrowedBook();
                } else {
                    System.out.println("该书籍不是你借阅的书籍，不能归还：" + book.getTitle());
                }
                return;
            }
        }
        System.out.println("你没有借阅该书籍，不需要归还，书籍ID为：" + bookId);
    }

    // 查看个⼈借阅情况
    public void viewBorrowHistory() {
        //读取当前借阅所有用户的借阅书籍的情况
        loadBorrowedBook();
        System.out.println("您的借阅情况如下：");
        if (borrowedCount == 0) {
            System.out.println("目前没有借阅记录.....");
        } else {
            boolean flg = false;
            for (int i = 0; i < borrowedCount; i++) {
                //这里只能查看属于自己借阅的情况
                //用户ID相同的情况下，使用书籍ID查询书籍
                if (pairOfUidAndBookIds[i].getUid() == getUserID()) {
                    flg = true;
                    Book book = library.searchById(pairOfUidAndBookIds[i].getBookID());
                    System.out.println(book);
                }
            }
            if (!flg) {
                System.out.println("你没有借阅过书籍！");
            }
        }
    }
}
