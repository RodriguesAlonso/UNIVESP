class canetaTeste extends Caneta{}
public class App {
    public static void main(String[] args) {
        canetaTeste canetinha = new canetaTeste();
        canetinha.setCor("verde");
        canetinha.setMarca("canetoides");
        canetinha.setTamanho("Pequeno");

    System.out.printf("\ncanetinha:\ncor: %s\nMarca: %s\nTamano: %s\n\n", canetinha.getCor(), canetinha.getMarca(), canetinha.getTamanho());

    }
}
