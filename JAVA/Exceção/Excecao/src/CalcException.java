public class CalcException {
    public float dividir(float numerador, float denominador){
        float resultado = 0;
        //try {
            resultado = numerador / denominador;
        //} catch (ArithmeticException ex){
          //  System.err.println("Não é possivel divizir por zero");
        //}
        return resultado;
    }
}
