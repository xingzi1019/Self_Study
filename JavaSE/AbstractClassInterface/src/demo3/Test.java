package demo3;

public class Test {
    public static void main(String[] args) {
        // IUSB iusb = new IUSB(); // error
        Computer computer = new Computer();
        Mouse mouse = new Mouse();
        KeyBoard keyBoard = new KeyBoard();
        computer.open();
        // computer.useDevice(mouse);
        computer.useDevice(keyBoard);
        computer.close();
    }
}
