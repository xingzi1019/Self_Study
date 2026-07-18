package demo1;

public class EmptyStackException extends RuntimeException {
    public EmptyStackException(String message) {
        super(message);
    }
    public EmptyStackException() {
        super("当前栈为空");
    }
}
