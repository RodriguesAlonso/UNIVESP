import java.util.Arrays;
import java.util.Collections;
import java.util.List;

public class Sort1 {
    //Utiliza o método Collections sort para ordenar os elementos de uma List em ordem crescente.
    public static void main(String[] args) {
        String[] suits = {"Hearts", "Diamonds", "Clubs", "Spades"};
        // Criar um lista contendo os elementos do array naipes.
        List<String> list = Arrays.asList(suits);
        System.out.printf("Unsorted array elements:", list);
        Collections.sort(list);    //Classifica ArrayList.
        System.out.printf("sorted array elements:", list);
        //Fim da classe Sort1.
    }
    
}
