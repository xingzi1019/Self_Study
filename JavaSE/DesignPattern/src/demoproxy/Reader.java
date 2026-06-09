package demoproxy;

public class Reader extends LibraryPeople {
    public Reader(String name, int age) {
        super(name, age);
    }

    @Override
    void show() {
        System.out.println("读者正在查询图书情况...");
    }

    public void borrowBooks() {
        System.out.println("正在借书...");
    }
}
