package demo1;

import java.util.Scanner;

public class Test {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        while(scanner.hasNextLine()) {
            String c = scanner.nextLine();
            char o = (char)(c.charAt(0) + 32);
            System.out.println(o);
        }
    }
}
