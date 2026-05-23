package constant;

// 定义常量 解耦 利于维护
// 什么情况下需要定义常量
// 1. 当有⼀个值，它在程序运⾏期间不会改变，并且需要在多个地⽅使⽤
// 2. 当需要表⽰某些固定的值，⽐如常数，错误代码、颜⾊代码、消息类型等
public class Constant {
    // 定义全部书籍存储的文件
    public static final String ALL_BOOK_FILE_NAME = "AllBooks.txt";
    // 定义默认书架的容量
    public static final int CAPACITY = 5;
    //-------------------管理员相关操作管理----------------
    //查找图书
    public static final int SEARCH_BOOK = 1;
    //显⽰图书
    public static final int DISPLAY_BOOK = 2;
    //退出系统
    public static final int EXIT = 3;
    //上架图书
    public static final int ADD_BOOK = 4;
    //更新图书
    public static final int UPDATE_BOOK = 5;
    //删除图书
    public static final int REMOVE_BOOK = 6;
    //查看图书的借阅次数
    public static final int BORROWED_BOOK_COUNT = 7;
    //查看受欢迎的图书
    public static final int GENERATE_BOOK = 8;
    //查看库存状态
    public static final int CHECK_INVENTORY_STATUS = 9;
    //移除上架超过1年的书籍
    public static final int CHECK_AND_REMOVE_OLD_BOOK = 10;
    //-------------------普通用户相关操作管理----------------
    //借阅图书
    public static final int BORROWED_BOOK = 4;
    //归还图书
    public static final int RETURN_BOOK = 5;
    //查看个人借阅情况
    public static final int VIEW_BORROW_HISTORY_BOOK = 6;

}
