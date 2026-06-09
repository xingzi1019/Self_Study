package demo3;

public class Computer {
    public void open() {
        System.out.println("打开电脑...");
    }
    public void close() {
        System.out.println("关闭电脑...");
    }
    // 使用 USB 功能
    public void useDevice(IUSB iusb) {
        iusb.openDevice();
        iusb.test();
        if (iusb instanceof Mouse) {
            // iusb.click(); // error
            // 法一
            Mouse mouse = (Mouse) iusb;
            mouse.click();
            // 法二
            // ((Mouse) iusb).click();
        }
        if (iusb instanceof KeyBoard) {
            KeyBoard keyBoard = (KeyBoard) iusb;
            keyBoard.input();
            // ((KeyBoard) iusb).input();
        }
        iusb.closeDevice();
    }
}
