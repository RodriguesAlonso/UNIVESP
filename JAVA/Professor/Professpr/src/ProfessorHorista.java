public class ProfessorHorista extends Professor{
    private int horaTrabalho;


    public ProfessorHorista() {
    }
    public void setHoraTrabalho(int hora){
        this.horaTrabalho = hora;
    }
    public int getHoraTrabalho(){
        return horaTrabalho;
    }
    @Override
    public void calcSalario() {
        setSalario(getHoraTrabalho() * 300); 
    }
    
}
