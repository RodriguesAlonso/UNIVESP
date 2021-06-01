import javax.swing.JOptionPane;

public class App {
    public static void main(String[] args) throws Exception {
        CalcException calc = new CalcException();
        String numerador, denominador;
        numerador = JOptionPane.showInputDialog("Digite o numerador: ");
        denominador = JOptionPane.showInputDialog("digite o denominador");
        try{
        float castN = Float.parseFloat(numerador);
        float castD = Float.parseFloat(denominador);
        float resultado = calc.dividir(castN, castD);
        System.out.println(resultado);
        String menssagem = String.format("%.2f / por %.2f = %.2f", castN, castD, resultado);
        JOptionPane.showMessageDialog(null, menssagem);
        }catch(NumberFormatException ex){
        JOptionPane.showMessageDialog(null, "Insira apenas números.", "Erro", 0);
        }
        
    }
}
