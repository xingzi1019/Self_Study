package demoproxy;

public class Proxy {
    private LibraryPeople realuser;

    public Proxy(LibraryPeople user) {
        this.realuser = user;
    }

    public void show() {
        realuser.show();
    }

    public void addBooks() {
        if(realuser instanceof Manager) {
            System.out.println("正在上架图书...");
        } else {
            System.out.println("没有上架图书的权限...");
        }
    }

    public void borrowBooks() {
        if(realuser instanceof Reader) {
            System.out.println("正在借书...");
        } else {
            System.out.println("不需要借书...");
        }
    }
}
