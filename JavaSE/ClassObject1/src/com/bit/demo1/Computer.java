package com.bit.demo1;

// 封装就是对类的实现细节进行了隐藏
// 从而提高属性的安全性
public class Computer { // 类的话只能 public 或者不加
    private String cpu; // cpu
    // 被 private 修饰之后 当前这个属性
    // 只能在 当前类 中被使用
    // 在类外是不能被使用的 (同一个包也不行)
    // 但是我们可以提供公开的方法让它被外界访问
    private String memory; // 内存
    public String screen; // 屏幕
    String brand; // 品牌 包访问权限

    public Computer(String brand, String cpu,
                    String memory, String screen) {
        this.brand = brand;
        this.cpu = cpu;
        this.memory = memory;
        this.screen = screen;
    }

    // 我们可以直接右键生成 getter 和 setter
    public String getCpu() {
        return cpu;
    }

    public String getMemory() {
        return memory;
    }

    public void setCpu(String cpu) {
        this.cpu = cpu;
    }

    public void setMemory(String memory) {
        this.memory = memory;
    }

    public void Boot() {
        System.out.println("开机~~~");
    }

    public void PowerOff() {
        System.out.println("关机~~~");
    }

    public void SurfInternet() {
        System.out.println("上网~~~");
    }
}
