import java.util.Arrays;

public class MinhaLista<T>{
    private Object[] elementos = new Object[0];
    public T get(int indice)
    {
        return (T) elementos[indice];
    }
    public void adiciona(T elemento)
    {
        int posicao = elementos.length + 1;
        elementos = Arrays.copyOf(elementos, posicao);
        elemento[posicao];
    }
    public static void main(String[] args) {
        MinhaLista<String> list = new MinhaLista<>();
        list.add("1");
        list.adiciona("2");
        String resultado = list.get(0)
        System.out.println(resultado);
    }
}