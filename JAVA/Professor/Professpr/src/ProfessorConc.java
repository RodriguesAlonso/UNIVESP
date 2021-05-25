public class ProfessorConc extends Professor {


    public ProfessorConc() {
    }

    @Override
    public void setSalario(double salario) {
        // TODO Auto-generated method stub
        super.setSalario(salario);
    }
    @Override
    public void setName(String name) {
        // TODO Auto-generated method stub
        super.setName(name);
    }
    @Override
    public String getName() {
        // TODO Auto-generated method stub
        return super.getName();
    }
    @Override
    public double getSalario() {
        // TODO Auto-generated method stub
        return super.getSalario();
    }
    
    public double calcSalario()
    {
        return super.getSalario();
    }
}
