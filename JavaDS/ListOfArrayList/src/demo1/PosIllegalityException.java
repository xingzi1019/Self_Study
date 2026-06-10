package demo1;
// 自定义异常
public class PosIllegalityException extends RuntimeException {
    public PosIllegalityException() {

    }
    public PosIllegalityException(String message) {
        super(message);
    }
}
