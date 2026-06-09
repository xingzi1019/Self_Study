package utils;

import java.util.Scanner;

public class ScannerSingleton {
    private static Scanner sc;
    private ScannerSingleton() {
        // private 防止被意外搞出第二个
    }
    public static Scanner getInstance() {
        if(sc == null) {
            sc = new Scanner(System.in);
        }
        return sc;
    }
}
