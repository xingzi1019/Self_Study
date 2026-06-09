package demo3;

public class KeyBoard implements IUSB {

    @Override
    public void openDevice() {
        System.out.println("´ò¿ª¼üÅÌ");
    }

    public void input() {
        System.out.println("¼üÅÌÊäÈë");
    }

    @Override

    public void closeDevice() {
        System.out.println("¹Ø±Õ¼üÅÌ");
    }
}
