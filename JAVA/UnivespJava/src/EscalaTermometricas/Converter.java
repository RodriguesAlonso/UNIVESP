import java.util.Scanner;

public class Converter {
    static double paraCelsius(double f)
    {
        return ((f - 32)/9)*5;
    }
    static double paraFahrenheit(double c)
    {      
        return (c/5)*9 + 32;
    }
    

}
