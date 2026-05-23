package book;

import java.time.LocalDate;
import java.time.format.DateTimeFormatter;
// 就是一本书 同时提供将书籍信息转换成字符串的 toJSON 方法
public class Book {
    private int bookID;
    private String title;
    private String author;
    private String category;
    private int publishYear;
    private boolean isBorrowed;
    private int borrowCount;
    private LocalDate shelfDate;

    // 构造
    public Book() {

    }

    public Book(String title, String author, String category, int publishYear, LocalDate shelfDate) {
        this.title = title;
        this.author = author;
        this.category = category;
        this.publishYear = publishYear;
        this.shelfDate = shelfDate;
    }

    // gte set
    public int getBookID() {
        return bookID;
    }

    public void setBookID(int bookID) {
        this.bookID = bookID;
    }

    public String getTitle() {
        return title;
    }

    public void setTitle(String title) {
        this.title = title;
    }

    public String getAuthor() {
        return author;
    }

    public void setAuthor(String author) {
        this.author = author;
    }

    public String getCategory() {
        return category;
    }

    public void setCategory(String category) {
        this.category = category;
    }

    public int getPublishYear() {
        return publishYear;
    }

    public void setPublishYear(int publishYear) {
        this.publishYear = publishYear;
    }

    public boolean isBorrowed() {
        return isBorrowed;
    }

    public void setBorrowed(boolean borrowed) {
        isBorrowed = borrowed;
    }

    public int getBorrowCount() {
        return borrowCount;
    }

    public void setBorrowCount(int borrowCount) {
        this.borrowCount = borrowCount;
    }

    public LocalDate getShelfDate() {
        return shelfDate;
    }

    public void setShelfDate(LocalDate shelfDate) {
        this.shelfDate = shelfDate;
    }

    // 对借阅次数 每次 自增1 自减1
    public void increaseBorrowCount() {
        this.borrowCount++;
    }

    public void decreaseBorrowCount() {
        this.borrowCount--;
    }

    @Override
    public String toString() {
        return "Book{" +
                "bookID=" + bookID +
                ", title='" + title + '\'' +
                ", author='" + author + '\'' +
                ", category='" + category + '\'' +
                ", publishYear=" + publishYear +
                ", isBorrowed=" + isBorrowed +
                ", borrowCount=" + borrowCount +
                ", shelfDate=" + shelfDate +
                '}';
    }

    public String toJSON() {
        // 为了便于修改字符串 这里用 StringBuilder 便于 append
        StringBuilder json = new StringBuilder();
        json.append(bookID).append(",");
        json.append(title).append(",");
        json.append(author).append(",");
        json.append(category).append(",");
        json.append(publishYear).append(",");
        json.append(isBorrowed).append(",");
        json.append(borrowCount).append(",");
        json.append(shelfDate != null ? shelfDate.format(DateTimeFormatter.ISO_LOCAL_DATE) : "null");
        return json.toString();
    }
}
