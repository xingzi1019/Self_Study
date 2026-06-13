package card;

import java.lang.reflect.Array;
import java.util.*;

public class CardDemo {

    // 定义四种花色
    public static final String[] SUITS = {"♠", "♥", "♣", "♦"};

    // 买牌 创建牌
    public static List<Card> buyCards() {
        List<Card> cardList = new ArrayList<>();
        for (int i = 0; i < SUITS.length; i++) {
            for (int j = 1; j <= 13; j++) {
                cardList.add(new Card(SUITS[i], j));
            }
        }
        return cardList;
    }

    // 洗牌
    public static void shuffle(List<Card> cardList) {
        for (int i = cardList.size() - 1; i > 0; i--) {
            Random random = new Random();
            int index = random.nextInt(i); // [0,i)
            swap(cardList, index, i);
        }
    }

    // 交换
    private static void swap(List<Card> list, int i, int j) {
        //注意不要被C++思想禁锢了
        Card temp = list.get(i);
        list.set(i, list.get(j));
        list.set(j, temp);
        // Collections.swap(list, i, j);
    }

    public static void main(String[] args) {
        List<Card> cardList = buyCards();
        System.out.println(cardList);
        System.out.println();
        shuffle(cardList);
        System.out.println(cardList);
        // 三个玩家牌手
        List<Card> hand0 = new ArrayList<>();
        List<Card> hand1 = new ArrayList<>();
        List<Card> hand2 = new ArrayList<>();
        // 二维数组存放
        List<List<Card>> hands = new ArrayList<>();
        hands.add(hand0);
        hands.add(hand1);
        hands.add(hand2);
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < hands.size(); j++) {
                hands.get(j).add(cardList.remove(0)); // remove返回泛型
            }
        }
        System.out.println("第一个人的牌");
        System.out.println(hand0);
        System.out.println("第二个人的牌");
        System.out.println(hand1);
        System.out.println("第二个人的牌");
        System.out.println(hand2);
        System.out.println("剩下的牌");
        System.out.println(cardList);
    }
}
