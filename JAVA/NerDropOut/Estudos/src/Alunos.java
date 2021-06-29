import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

public class Alunos {
    public static void main(String[] args) {
        List<String> alunos = new ArrayList<>();
        alunos.add("João");
        alunos.add("Paulo");
        alunos.add("Rodrigues");
        alunos.add("Alonso");
        for (String string : alunos) {
            System.out.println(string);
        }
        System.out.println("-=-=-Add=-=-=");
        alunos.add(1, "Bel");
        for (String string : alunos) {
            System.out.println(string);
        }
        System.out.println("-=-=Get-=Size-=-=");
        System.out.println(alunos.get(0));
        System.out.printf("Número de alunos: %s", alunos.size());
        System.out.println("\n-=-=-Remove=-=-=");
        alunos.remove("Bel");
        System.out.println(alunos);
        System.out.println("-=-=-contains=-=-=");
        boolean tem = alunos.contains("João");
        System.out.printf("João é aluno ? %b", tem);
        System.out.println("-=-=Elementos Dublicados-=-=-=");
        alunos.add("Paulo");
        System.out.println(alunos);
        System.out.println("-=-=-Collections.sort=-=-=");
        Collections.sort(alunos);
        System.out.println(alunos);

    }
}
