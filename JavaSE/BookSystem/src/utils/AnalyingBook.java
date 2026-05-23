package utils;

import book.Book;
import com.bit.utils.FileUtils;
import constant.Constant;

import java.io.File;
import java.io.IOException;
import java.time.LocalDate;
import java.time.LocalDateTime;

// 这里我们用到了文件操作 在刚刚的 jar 包里面文件操作 相当于是封装在了 jar 包里面了
// 其实是和 C语言 那里是差不多的 但是涉及到了挺多流相关的操作 所以我们就放到 JavaEE 里面再学习
public class AnalyingBook {
    public void storeObject(Book[] books, String filename) throws IOException {
        // books数组里面真正存了多少本书
        int booksUseLen = 0;
        for (int i = 0; i < books.length; i++) {
            if (books[i] != null) {
                booksUseLen++;
            }
        }
        StringBuilder jsonArray = new StringBuilder();
        for (int i = 0; i < booksUseLen; i++) {
            if (books[i] != null) {
                jsonArray.append(books[i].toJSON());
                if (i != booksUseLen - 1) {
                    jsonArray.append("\n");
                    // 不是最后一个都换行
                }
            }
        }
        // 写进去 这里直接调用文件的方法
        FileUtils.writeFile(jsonArray.toString(), filename);
    }

    // 将文件分割成一行行的字符 就是一本书
    public Book[] loadObject(String filename) throws IOException {
        // 1.从磁盘的文件当中读取数据，读到内存当中
        String content = FileUtils.readFile(filename);
        if (content == null || content.isEmpty()) {
            System.out.println("星炬学院图书馆没有书...");
            return null;
        }
        // 2.每一行就是一本书 所以按照换行先分割
        String[] bookJsonString = content.split("\n");
        // 3.
        Book[] booklist = new Book[bookJsonString.length];
        for (int i = 0; i < bookJsonString.length; i++) {
            Book book = parseBookJson(bookJsonString[i]);
            booklist[i] = book;
        }
        return booklist;
    }

    // 将一本书分割得细致一点
    private Book parseBookJson(String json) {
        String[] parts = json.split(",");
        Book book = new Book();
        book.setTitle(parts[1]);
        book.setAuthor(parts[2]);
        book.setCategory(parts[3]);
        book.setPublishYear(Integer.parseInt(parts[4]));
        book.setShelfDate(LocalDate.parse(parts[7]));
        // 因为当初没传参
        if (book.getTitle() != null
                && book.getAuthor() != null
                && book.getCategory() != null
                && book.getShelfDate() != null) {
            book.setBookID(Integer.parseInt(parts[0]));       // 尚不明确
            book.setBorrowed(Boolean.parseBoolean(parts[5])); // false
            book.setBorrowCount(Integer.parseInt(parts[6]));  // 0
            return book;
        }
        return null;
    }

    // 测试 后面注释掉
    public static void main() {
        Book[] books = new Book[5];
        books[1] = new Book("《提瓦特历史》", "派蒙", "历史",
                2099, LocalDate.of(2009, 9, 23));
        books[2] = new Book("《六分街魅魔自传》", "哲", "实用技巧", 2299, LocalDate.now());
        books[3] = new Book("《拿捏千咲》", "漂泊者", "撩人技巧", 2026, LocalDate.now());
        books[4] = new Book("《缺氧攻略》", "克莱", "游戏", 2023, LocalDate.now());
        AnalyingBook analyingBook = new AnalyingBook();
        try {
            // 注释掉的这个耦合性太强了 不利于代码的维护
            // Book[] ret = analyingBook.loadObject("AllBooks.txt");
            // analyingBook.storeObject(books, "AllBooks.txt");
            analyingBook.storeObject(books, Constant.ALL_BOOK_FILE_NAME);
            Book[] ret = analyingBook.loadObject(Constant.ALL_BOOK_FILE_NAME);
            for (int i = 0; i < ret.length; i++) {
                System.out.println(ret[i]);
            }
        } catch (IOException e) {
            throw new RuntimeException(e);
        }
    }
}
