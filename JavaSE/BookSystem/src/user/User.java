package user;

public abstract class User {
    private String name;
    private int UserID;
    private String role;

    public User(String name, int UserID, String role) {
        this.name = name;
        this.UserID = UserID;
        this.role = role;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getRole() {
        return role;
    }

    public void setRole(String role) {
        this.role = role;
    }

    public int getUserID() {
        return UserID;
    }

    public void setUserID(int userID) {
        UserID = userID;
    }

    public abstract int display();
}
