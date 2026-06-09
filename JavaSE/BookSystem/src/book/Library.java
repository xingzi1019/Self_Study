package book;

import constant.Constant;
import utils.AnalyzingBook;
import utils.ScannerSingleton;

import java.io.IOException;
import java.time.Instant;
import java.time.LocalDate;
import java.time.ZoneId;
import java.time.temporal.ChronoUnit;
import java.util.Arrays;
import java.util.Scanner;


// 这个图书馆类 用来存放 书类 需要额外考虑扩容的问题 不过当然比通讯录简单得多了
// 存储数据到文件 读取数据到内存
// 我们期望数据最好可以进⾏持久化 所谓持久化就是将数据存储到MySQL、⽂件等介质中，不会因为断电等情况影响数据
// 否则每次运⾏程序数据都需要重写进⾏存储等⽐较繁琐
// 由于⽬前知识储备的限制 我们还没有学习到MySQL和⽂件
// 我们这⾥会采⽤⽂件进⾏存储 把⽂件相关操作封装到 jar 包 借助已经写好的工具来进⾏操作
public class Library {
    public Book[] books;    // 存读到的书
    public int bookCount;   // 记录当前图书馆有效的书籍个数
    private static Library library;
    public Scanner scanner;
    private AnalyzingBook analyzingBook = new AnalyzingBook();

    public Library() {
        // 读
        loadAllBook();
        if (scanner == null) {
            scanner = ScannerSingleton.getInstance();
        }
    }

    public static Library getLibrary() {
        if (library == null) {
            library = new Library();
        }
        return library;
    }

    private void loadAllBook() {
        try {
            // 读取文件的书籍到 allBook 数组当中去
            Book[] allBook = analyzingBook.loadObject(Constant.ALL_BOOK_FILE_NAME);
            books = new Book[Constant.CAPACITY];
            if (allBook == null) {
                bookCount = 0;
            } else {
                int allBookLen = allBook.length;
                if (allBookLen > Constant.CAPACITY) {
                    books = new Book[allBookLen];
                }
                for (int i = 0; i < allBookLen; i++) {
                    books[i] = allBook[i];
                }
                bookCount = allBookLen;
            }
        } catch (IOException e) {
            throw new RuntimeException(e);
        }
    }

    private void storeBook() {
        try {
            analyzingBook.storeObject(books, Constant.ALL_BOOK_FILE_NAME);
        } catch (IOException e) {
            throw new RuntimeException(e);
        }
    }

    public void searchBook() {
        // System.out.println("查找图书");
        // scanner.nextInt();
        System.out.println("输入你要查找的图书的名称");
        scanner.nextLine();
        String desTitle = scanner.nextLine();
        Book book = search(desTitle);
        if (book == null) {
            System.out.println("查找不到你要找的书");
        } else {
            System.out.println("找到了你要的书了,详细信息如下: ");
            System.out.println(book); // 有重写了 toString方法
        }
    }

    private Book search(String desTitle) {
        loadAllBook();
        for (int i = 0; i < bookCount; i++) {
            Book book = books[i];
            if (book.getTitle().equals(desTitle)) {
                return book;
            }
        }
        return null;
    }

    public void displayBooks() {
        System.out.println("展示星炬图书馆已有的图书");
        loadAllBook();
        for (int i = 0; i < bookCount; i++)
            System.out.println(books[i]);
    }

    public void exit() {
        System.out.println("退出图书系统");
        System.exit(0); // 算新学的
    }

    //
    public void addBook(Book book) {
        System.out.println("Libary类addBook方法执行了");
        // 动态扩容：当图书馆满时自动扩容为原来的2倍
        if (bookCount >= books.length) {
            books = Arrays.copyOf(books, books.length * 2);
            System.out.println("图书馆已自动扩容，当前容量：" + books.length);
        }
        books[bookCount] = book;
        if (bookCount == 0) {
            book.setBookID(1);
        } else {
            Book bookLast = books[bookCount - 1];
            book.setBookID(bookLast.getBookID() + 1);
        }
        bookCount++;
        storeBook();
        System.out.println("图书上架成功\n图书的名称是：" + book.getTitle());
    }

    public void borrowBook(int desBookID) {
        loadAllBook();
        for (int i = 0; i < bookCount; i++) {
            Book book = books[i];
            if (book.getBookID() == desBookID) {
                if (book.isBorrowed()) {
                    System.out.println("该书已被借出，无法重复借阅");
                    return;
                }
                book.setBorrowed(true);
                book.increaseBorrowCount();
                storeBook();
                System.out.println("借阅成功！书名：《" + book.getTitle() + "》");
                return;
            }
        }
        System.out.println("没有找到ID为 " + desBookID + " 的图书");
    }

    public Book searchById(int bookId) {
        loadAllBook();
        for (int i = 0; i < bookCount; i++) {
            Book book = books[i];
            if (book.getBookID() == bookId) {
                return book;
            }
        }
        return null;
    }

    public void updateBook(Book book) {
        int bookId = book.getBookID();
        int index = searchByIdReturnIndex(bookId);
        if (index == -1) {
            System.out.println("没有你要更新的图书，此时的ID为：" + bookId);
            return;
        }
        books[index] = book;
        //把当前的更新 写到 文件当中 保证一致性
        storeBook();
        System.out.println("书籍已被更新，文件已经写入，更新之后书籍为：");
        System.out.println(books[index]);
    }

    private int searchByIdReturnIndex(int bookId) {
        for (int i = 0; i < bookCount; i++) {
            if (books[i].getBookID() == bookId) {
                return i;
            }
        }
        return -1;
    }

    public void removeBook(int id) {
        loadAllBook();
        int index = searchByIdReturnIndex(id);
        if (-1 == index) {
            System.out.println("没有你要删除的书籍");
            return;
        }
        for (int i = index; i < bookCount - 1; i++) {
            books[i] = books[i + 1]; // 后一本将前一本覆盖掉即可
        }
        books[--bookCount] = null;
        storeBook();
    }

    public void borrowCount() {
        loadAllBook();
        for (int i = 0; i < bookCount; i++) {
            Book book = books[i];
            System.out.println("书名:" + book.getTitle() +
                    " 借阅次数：" + book.getBorrowCount());
        }
    }

    public void generateBook(int k) {
        loadAllBook();
        Book[] tmp = new Book[bookCount];
        for (int i = 0; i < bookCount; i++) {
            tmp[i] = books[i];
        }
        Arrays.sort(tmp);
        Book[] generateBooks = new Book[k];
        for (int i = 0; i < k; i++) {
            generateBooks[i] = tmp[i];
        }
        System.out.println("最受欢迎书籍如下：");
        for (int i = 0; i < generateBooks.length; i++) {
            Book book = generateBooks[i];
            System.out.println("书籍ID: " + book.getBookID() + " |书名：" + book.getTitle() + " |作者：" +
                    book.getAuthor() + " |借阅次数：" + book.getBorrowCount());
        }
    }

    public void checkInventoryStatus() {
        loadAllBook(); // 记得多加载 确保每次拿到的都是最新的信息
        for (int i = 0; i < bookCount; i++) {
            Book book = books[i];
            String status = "未借出";
            if (book.isBorrowed()) {
                status = "已借出";
            }
            System.out.println("书籍：" + book.getTitle() + " 借阅状态：" + status);
        }
        // 简单得要死
    }

    public void checkAndRemoveOldBooks() {
        loadAllBook();
        // 获取当前时间戳
        long currentTimestamp = System.currentTimeMillis();
        // 将当前时间戳转换为 LocalDate
        LocalDate currentDate = Instant.ofEpochMilli(currentTimestamp)
                .atZone(ZoneId.systemDefault())
                .toLocalDate();
        boolean flg = false;
        scanner.nextLine(); // 吸收 nextInt 残留的换行符
        for (int i = 0; i < bookCount; i++) {
            Book book = books[i];
            //获取当前书籍的上架时间
            LocalDate specifiedDate = book.getShelfDate();
            // 计算两个日期之间的差值（以年为单位）
            long yearsBetween = ChronoUnit.YEARS.between(specifiedDate, currentDate);
            if (yearsBetween >= 1) {
                System.out.print("图书 " + book.getTitle() + " 已经上架超过一年，是否移除？ (y/n)：");
                String response = scanner.nextLine();
                //scanner.nextLine();
                if (response.equalsIgnoreCase("y")) {
                    //确认删除调用remove方法进行删除
                    //应该拿书籍的 ID
                    removeBook(book.getBookID());
                    i--;  // 因为后面的书已经向前移动，所以要重新检查当前索引位置
                }
                flg = true;
            }
        }
        if (!flg) {
            System.out.println("没有上架超过一年的图书！");
        }
        storeBook();
    }

    // 按类别统计图书
    public void categorizeBooksByCategory() {
        loadAllBook();
        if (bookCount == 0) {
            System.out.println("星炬图书馆暂时没有图书");
            return;
        }
        // 用两个并行数组记录类别和对应数量
        String[] categories = new String[bookCount];
        int[] counts = new int[bookCount];
        int categoryCount = 0;
        for (int i = 0; i < bookCount; i++) {
            Book book = books[i];
            if (book == null) continue;
            String category = book.getCategory();
            boolean found = false;
            for (int j = 0; j < categoryCount; j++) {
                if (categories[j].equals(category)) {
                    counts[j]++;
                    found = true;
                    break;
                }
            }
            if (!found) {
                categories[categoryCount] = category;
                counts[categoryCount] = 1;
                categoryCount++;
            }
        }
        System.out.println("====== 按类别统计图书 ======");
        for (int i = 0; i < categoryCount; i++) {
            System.out.println("类别：「" + categories[i] + "」  数量：" + counts[i] + " 本");
        }
    }

    // 按作者统计图书
    public void categorizeBooksByAuthor() {
        loadAllBook();
        if (bookCount == 0) {
            System.out.println("星炬图书馆暂时没有图书");
            return;
        }
        String[] authors = new String[bookCount];
        int[] counts = new int[bookCount];
        int authorCount = 0;
        for (int i = 0; i < bookCount; i++) {
            Book book = books[i];
            if (book == null) continue;
            String author = book.getAuthor();
            boolean found = false;
            for (int j = 0; j < authorCount; j++) {
                if (authors[j].equals(author)) {
                    counts[j]++;
                    found = true;
                    break;
                }
            }
            if (!found) {
                authors[authorCount] = author;
                counts[authorCount] = 1;
                authorCount++;
            }
        }
        System.out.println("====== 按作者统计图书 ======");
        for (int i = 0; i < authorCount; i++) {
            System.out.println("作者：「" + authors[i] + "」  作品数：" + counts[i] + " 本");
        }
    }

    public void returnBook(int bookId) {
        loadAllBook();
        for (int i = 0; i < bookCount; i++) {
            Book book = books[i];
            if (book.getBookID() == bookId) {
                book.setBorrowed(false);
                book.decreaseBorrowCount();
                storeBook();
                System.out.println("归还成功！书名：《" + book.getTitle() + "》");
                return;
            }
        }
        System.out.println("没有找到ID为 " + bookId + " 的图书");
    }
}
// 实例化 Library --> 加载文件当中的内容 --> 对文件进行操作(上架 更新)
// --> 将操作后的数据写入文件