public class App {
    public static void main(String[] args)  
    {
        System.out.println("\nHello, World!");
        ProfessorConc concursado;
        concursado = new ProfessorConc();
        concursado.setName("joao");
        concursado.setSalario(3000);
        System.out.printf("\nNome: %s Sálario:  %.2f\n", concursado.getName(), concursado.getSalario());

        ProfessorHorista horista = new ProfessorHorista();
        horista.setHoraTrabalho(20);
        horista.setName("Paulo");
        horista.calcSalario();
        System.out.printf("Nome: %s %.2f \n", horista.getName(), horista.getSalario());


    }
}
