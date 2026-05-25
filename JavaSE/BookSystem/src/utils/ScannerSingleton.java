package utils;

import java.util.Scanner;

public class ScannerSingleton {
    private static Scanner sc;
    private ScannerSingleton() {
        // private 防止被意外搞出第二个
    }

}
