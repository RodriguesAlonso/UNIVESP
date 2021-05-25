import java.util.Scanner; 

public class Converter2 

{ 
   static double celsiusFahrenheit (double c) 
   { 
      return 9.0 * c / 5.0 + 32.0; 
   } 
   static double fahrenheitCelsius (double f) 
   { 
      return 5.0 * (f - 32.0) / 9.0; 
   } 
   public static void main (String[] args) 
   { 
      double farenheit, celsius; 
      Scanner scanner = new Scanner(System.in); 
      
      System.out.print ("Temp. em Fahrenheit: "); 
      farenheit = scanner.nextDouble(); 
      celsius = fahrenheitCelsius (farenheit); 
      System.out.println ("equivale a " + celsius + " graus Celsius");  

      System.out.print ("Temp. em graus Celsius: "); 
      celsius = scanner.nextDouble(); 
      farenheit = celsiusFahrenheit (celsius); 
      System.out.println ("equivale a " + farenheit + " graus Fahrenheit"); 

   } 

} 
