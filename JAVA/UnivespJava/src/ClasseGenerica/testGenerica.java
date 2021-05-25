public class testGenerica {
    public static void main(String[] args) {
        MinhaLista<String> lista = new MinhaLista<>();
        System.out.println("Hello");       
        lista.adicionar("elemento01");
        lista.adicionar("elemento02");
        //lista.adicionar("elemento03");

        String resultado = lista.get(0);
        System.out.println(resultado);

    }
}
