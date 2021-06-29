import java.util.Map;
import java.util.HashMap;
import java.util.TreeMap;
import java.util.Set;

public class Maps {
    public static void main(String[] args) {
        Map<String, Integer> cursos = new HashMap<>();
        System.out.println("-=-=-HashMap=-=-=-=-=");
        cursos.put("BTI", 3);
        cursos.put("Ciencias de Dados", 4);
        cursos.put("Engenharia da Computação", 5);
        Integer duracao = cursos.get("Engenharia da Computação");
        System.out.println(duracao);
        System.out.println("-=-=Map não aceita elemento duplicado-=-=");
        cursos.put("BTI", 10);
        System.out.println(cursos);
        System.out.println("Hash espalhamento, linked ordem de entrada, tree ordem crescente");
        System.out.println("-=-=-=TreeMap-=-=-=-=");
        Map<String, Integer> cursos2 = new TreeMap<>();
        cursos2.put("BTI", 3);
        cursos2.put("Ciencias de Dados", 4);
        cursos2.put("Engenharia da Computação", 5);
        System.out.println(cursos2);

        System.out.println("-=-=-=-KeySet()=-=-=-=");
        Set<String> chaves = cursos2.keySet();
        System.out.println(chaves);
        System.out.println("-=-=-=-entrySet().forEach=-=-=-=");
        cursos2.entrySet().forEach(action ->{
            System.out.println(action.getKey() +" tem duração de " + action.getValue() + " anos.");
        });
    }
    
    
}
