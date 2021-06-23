import java.util.Objects;

public class DepartamentoGraduacao {
    private int ra;
    private String nome;


    public DepartamentoGraduacao(int ra, String nome) {
        this.ra = ra;
        this.nome = nome;
    }

    public int getRa() {
        return this.ra;
    }

    public String getNome() {
        return this.nome;
    }
    public String toString(){
        return ", RA: " + this.ra + "=> Nome: " + this.nome;
    }

    @Override
    public boolean equals(Object o) {
        if (o == this)
            return true;
        if (!(o instanceof DepartamentoGraduacao)) {
            return false;
        }
        DepartamentoGraduacao departamentoGraduacao = (DepartamentoGraduacao) o;
        return ra == departamentoGraduacao.ra && Objects.equals(nome, departamentoGraduacao.nome);
    }

    @Override
    public int hashCode() {
        return Objects.hash(ra, nome);
    }
    
}
