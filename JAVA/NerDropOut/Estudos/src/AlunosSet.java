import java.util.HashSet;
import java.util.LinkedHashSet;
import java.util.Set;
import java.util.TreeSet;

public class AlunosSet {
    public static void main(String[] args) {
        System.out.println("-=-=SetNãoDuplicaElemento-=-=-=");
        Set<String> alunos = new HashSet<>();
        Set<String> alunos2 = new LinkedHashSet<>();
        Set<String> alunos3 = new TreeSet<>();
        alunos.add("João");
        alunos.add("Paulo");
        alunos.add("Rodrigues");
        alunos.add("Alonso");
        alunos.add("Isabel");
        alunos.add("Margarida");
        alunos.add("Cristina");
        alunos.add("Alonso");
        System.out.println("-=-=-Coleção_HashSet=-=-=");
        System.out.println("-=-=-NãoImpreNaOrdemInserção=-=-=");
        System.out.println(alunos);
        System.out.println("-=-=-LinkedHashSet=-=-=");
        alunos2.add("Henrique");
        alunos2.add("Thiago");
        alunos2.add("Elaine");
        alunos2.add("João");
        System.out.println("-=-=-ImprimeNaOrdemDeEntrada=-=-=");
        System.out.println(alunos2);
        System.out.println("-=-=-TreeSet=-=-=");
        alunos3.add("Isabel");
        alunos3.add("Luiza");
        alunos3.add("Sergio");
        alunos3.add("Cida");
        System.out.println("-=-=-ImpreOrdemCrescente=-=-=");
        System.out.println(alunos3);

    }
}
