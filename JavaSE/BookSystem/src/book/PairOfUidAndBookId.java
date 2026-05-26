package book;

public class PairOfUidAndBookId {
    private int uid;
    private int bookID;
    public PairOfUidAndBookId() {

    }
    public PairOfUidAndBookId(int uid, int bookID) {
        this.uid= uid;
        this.bookID = bookID;
    }

    public int getUid() {
        return uid;
    }

    public void setUid(int uid) {
        this.uid = uid;
    }

    public int getBookID() {
        return bookID;
    }

    public void setBookID(int bookID) {
        this.bookID = bookID;
    }

    // 把对象序列化为JSON字符串的形式
    public String toJson() {
        StringBuilder json = new StringBuilder();
        json.append(this.uid).append(",");
        json.append(this.bookID);
        return json.toString();
    }
}
