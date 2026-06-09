package com.bit.demo1; // 包名要小写
// 双击 shift 打开搜索文件

public class TestDemo {
    public static void main() {
        Computer computer = new Computer("华为", "英特尔", "8G", "三星");
        System.out.println(computer.brand); // 华为 包访问权限能被自己的包访问到
        System.out.println(computer.screen); // 三星
        // System.out.println(computer.cpu);
        System.out.println(computer.getCpu()); // 英特尔
        computer.setCpu("AMD");
        System.out.println(computer.getCpu()); // AMD
    }
}
