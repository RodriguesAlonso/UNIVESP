import java.util.Arrays;

public class MinhaLista<T>{
    private Object[] elementos = new Object[0];

    public T get(int indice){
        return (T)elementos[indice];
    }
    public int elementosLength(){
        return elementos.length;
    }
    public void adicionar(T elemento){
        var posicao = elementosLength() + 1;
        System.out.println(posicao);
        elementos = Arrays.copyOf(elementos, posicao);
        elementos[0] = "teste";
        elementos[posicao + 1] = elemento;
    }
}