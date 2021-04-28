import java.util.Scanner;

public class Converter {
    public void paraCelsius()
    {
        Scanner input = new Scanner(System.in);
        System.out.println("Digite a temperatura em graus fahrenheit: ");
        double temperaturaEmFahrenheit = input.nextDouble();
        double temperaCelsiu = (temperaturaEmFahrenheit - 32) * 5;

        System.out.printf("Temperatura de %.2f graus fahrenheit é equivalente a %.2f graus Celsius %n", temperaturaEmFahrenheit, temperaCelsiu);
    }
    public void paraFahrenheit()
    {   
        Scanner input = new Scanner(System.in);
        System.out.println("Digite a temperatura em graus celsius");
        double temperaturaEmCelcius = input.nextDouble();
        double temperaturaEmFahrenheit = (temperaturaEmCelcius/5) * 9 + 32;
        System.out.printf("Temperatura de %.2f graus celcius é equivalente a %.2f graus Fahrenheit %n", temperaturaEmCelcius, temperaturaEmFahrenheit);
    }
    
}
