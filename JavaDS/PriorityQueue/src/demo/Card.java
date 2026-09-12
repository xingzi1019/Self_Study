package demo;

import java.lang.Comparable;
import java.util.Comparator;

public class Card implements Comparable<Card> {
    public int rank;
    public String suit;

    public Card(int rank, String suit) {
        this.rank = rank;
        this.suit = suit;
    }

    // 法一 有较大局限
    @Override
    public boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj == null || !(obj instanceof Card)) {
            return false;
        }
        Card c = (Card) obj;// 泛型接收 记得强转
        return rank == c.rank && suit.equals(c.suit);
    }


    // 法二 常用一点
    @Override
    public int compareTo(Card o) {
        if (o == null) {
            return 1;
        }
        //返回值：
        // < 0：表示this指向的对象小于 o 指向的对象
        // ==0：表示this指向的对象等于 o 指向的对象
        // > 0：表示this指向的对象大于 o 指向的对象
        return this.rank - o.rank;
    }

    public static void main(String[] args) {
        Card p = new Card(1, "♠");
        Card q = new Card(2, "♠");
        Card o = new Card(1, "♠");
        System.out.println(p.compareTo(o)); // 0   牌相等
        System.out.println(p.compareTo(q)); // -1  p比较小
        System.out.println(q.compareTo(p)); // 1   q比较大
    }
}
// 法三 基于比较器比较
// 注意：Comparator是java.util 包中的泛型接⼝类，使⽤时必须导⼊对应的包。
class CardComparator implements Comparator<Card> {

    @Override
    public int compare(Card o1, Card o2) {
        if(o1 == o2) {
            return 0;
        }
        if (o1 == null) {
            return -1;
        }
        if(o2 == null) {
            return 1;
        }
        return o1.rank - o2.rank;
    }
    public static void main(String[] args) {
        Card p = new Card(1, "♠");
        Card q = new Card(2, "♠");
        Card o = new Card(1, "♠");
        System.out.println(p.compareTo(o)); // 0   牌相等
        System.out.println(p.compareTo(q)); // -1  p比较小
        System.out.println(q.compareTo(p)); // 1   q比较大
    }
}
