import java.util.Arrays;
import java.util.Collections;
import java.util.List;

public class Sort2 {
    //Utiliza o método Collections sort para ordenar os elementos de uma List em ordem decrescente.
    public static void main(String[] args) {
        String[] suits = {"Hearts", "Diamonds", "Clubs", "Spades"};
        // Criar um lista contendo os elementos do array naipes.
        List<String> list = Arrays.asList(suits);
        System.out.printf("Unsorted array elements: %s%n", list);
        //Classifica ArrayList.
        Collections.sort(list, Collections.reverseOrder());
        System.out.printf("%nsorted array elements: %s%n", list);
        //Fim da classe Sort1.
    }
    
}
