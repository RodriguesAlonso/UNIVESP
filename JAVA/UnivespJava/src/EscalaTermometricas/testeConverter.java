import java.util.Scanner;


public class testeConverter {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        double fahrenheit;
        double celsius;

        System.out.println("Digite a temperatura em Fahrenheit ");
        fahrenheit = input.nextDouble();        

        System.out.printf("%n %.2f Fahrenheit = %.2f Celsius  %n", fahrenheit, Converter.paraCelsius(fahrenheit));
        
        System.out.println("Digite a temperatura em Celsius");
        celsius = input.nextDouble();
        System.out.printf("%n Celsius %2.f = %2.f fahrenheits %n", celsius, Converter.paraFahrenheit(celsius));
    }
    
}
