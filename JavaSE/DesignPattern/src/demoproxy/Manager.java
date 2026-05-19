package demoproxy;

public class Manager extends LibraryPeople {
    public Manager(String name, int age) {
        super(name, age);
    }

    @Override
    void show() {
        System.out.println("管理员正在查询图书情况...");
    }

    public void addBooks() {
        System.out.println("正在上架图书...");
    }
}
