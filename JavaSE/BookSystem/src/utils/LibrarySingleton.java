package utils;

import book.Library;

// 单例实现Library
public class LibrarySingleton {
    private static Library library;
    private LibrarySingleton() {
        // 防止被搞出第二个对象来
    }
    public static Library getInstance() {
        if (library == null) {
            library = new Library();
        }
        return library;
    }
}
