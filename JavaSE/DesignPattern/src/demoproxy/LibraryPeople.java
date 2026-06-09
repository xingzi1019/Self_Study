package demoproxy;

public abstract class LibraryPeople {
    public String name;
    public int age;

    public LibraryPeople(String name, int age) {
        this.name = name;
        this.age = age;
    }

    abstract void show();
}
