package book;

import java.util.Scanner;

// 我们期望数据最好可以进⾏持久化 所谓持久化就是将数据存储到MySQL、⽂件等介质中，不会因为断电等情况影响数据
// 否则每次运⾏程序数据都需要重写进⾏存储等⽐较繁琐
// 由于⽬前知识储备的限制 我们还没有学习到MySQL和⽂件
// 我们这⾥会采⽤⽂件进⾏存储 把⽂件相关操作封装到 jar 包 借助已经写好的工具来进⾏操作
public class Library {
    public Book[] books;
    public int bookCount;
    private static Library library;
    public Scanner sc;
}
