package book;

import constant.Constant;
import utils.AnalyingBook;

import java.io.IOException;
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
    private AnalyingBook analyingBook = new AnalyingBook();

    public Library() {
        // 读
        loadAllBook();
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
            Book[] allBook = analyingBook.loadObject(Constant.ALL_BOOK_FILE_NAME);
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
            throw new RuntimeException();
        }
    }

    private void storeBook() {
        try {
            analyingBook.storeObject(books, Constant.ALL_BOOK_FILE_NAME);
        } catch (IOException e) {
            throw new RuntimeException();
        }
    }

    public void searchBook() {
        System.out.println("查找图书");
        scanner.nextInt();
        System.out.println("输入你要查找的图书的名称");
        String desTitle = scanner.nextLine();
        Book book = search(desTitle);
        if (book == null) {
            System.out.println("查找不到你要找的 " + desTitle + " 书");
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
        System.out.println("Library 的 addBook 方法执行了");
        if (bookCount > books.length) {
            System.out.println("星炬图书馆满了 无法添加图书了");
            // 不然就考虑扩容  扩容就不用 return 了 TODO 扩容
            return;
        }
    }
}
// 实例化 Library --> 加载文件当中的内容 --> 对文件进行操作(上架 更新)
// --> 将操作后的数据写入文件