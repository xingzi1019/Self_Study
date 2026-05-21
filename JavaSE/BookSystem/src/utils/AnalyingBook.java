package utils;

import book.Book;
import com.bit.utils.FileUtils;

import java.io.File;
import java.io.IOException;
import java.time.LocalDate;

// 这里我们用到了文件操作 在刚刚的 jar 包里面文件操作 相当于是封装在了 jar 包里面了
// 其实是和 C语言 那里是差不多的 但是涉及到了挺多流相关的操作 所以我们就放到 JavaEE 里面再学习
public class AnalyingBook {
    public void storeObject(Book[] books, String filename) throws IOException {
        // books数组里面真正存了多少本书
        int booksUseLen = 0;

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
        book.setBookID(Integer.parseInt(parts[0]));
        book.setPublishYear(Integer.parseInt(parts[4]));
        book.setBorrowed(Boolean.parseBoolean(parts[5]));
        book.setBorrowCount(Integer.parseInt(parts[6]));
        if(book.getTitle() != null
           && book.getAuthor() != null
           && book.getCategory() != null
           && book.getShelfDate() != null) {
            book.setTitle(parts[1]);
            book.setAuthor(parts[2]);
            book.setCategory(parts[3]);
            book.setShelfDate(LocalDate.parse(parts[7]));
           return book;
        }
        return null;
    }
    // 测试 后面注释掉
    public static void main() {

    }
}
