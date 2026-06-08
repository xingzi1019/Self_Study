package demo4;

public class Test {
    public static void func(Message<String> message) {
        System.out.println(message.getMessage());
    }
    public static void main(String[] args) {
        Message<String> message = new Message<>();
        message.setMessage("星子");
        func(message);
        System.out.println("=================");
        Message<Integer> message2 = new Message<>();
        message2.setMessage(100);
        // func(message2); // Error func 只能传 String类型的 Message
    }
}
