public class EmptyStackException extends RuntimeException {
    public EmptyStackException()
    {
        this("Stack is empty");
    }
    public EmptyStackException(String menssage){
        super(menssage);
    }
}
