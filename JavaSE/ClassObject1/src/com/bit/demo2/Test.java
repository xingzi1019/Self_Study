package com.bit.demo2;

import com.bit.demo1.Computer;

public class Test {
    public static void main() {
        Computer computer = new Computer("华为","英特尔","8G","三星");
        //System.out.println(computer.brand); // 包访问权限不能被其他包访问到
        System.out.println(computer.screen); // 三星
    }
}
