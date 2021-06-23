import java.util.LinkedHashSet;
import java.util.Set;

public class AlunosSet2 {
    public static void main(String[] args) {
      System.out.println("-=-=-=-LinkedHashSet=-=-=-=");
      Set<DepartamentoGraduacao> discentes = new LinkedHashSet<>();
      discentes.add(new DepartamentoGraduacao(1, "João"));
      discentes.add(new DepartamentoGraduacao(2, "Paulo"));
      discentes.add(new DepartamentoGraduacao(3, "Rodrigues"));
      discentes.add(new DepartamentoGraduacao(4, "Alonso"));
      discentes.add(new DepartamentoGraduacao(4, "Alonso"));

      System.out.println(discentes);

    }
}
