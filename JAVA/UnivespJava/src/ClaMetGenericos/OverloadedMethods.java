import javax.print.event.PrintEvent;

public class OverloadedMethods {
    public static void main(String[] args) 
    {
        //Cria arrays.
        Integer[] integerArray = {1, 2, 3, 4, 5, 6};
        Double[] doubleArray = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7};
        Character[] characterArray = {'H', 'E', 'L', 'L', 'O'};

        System.out.printf("Array integerArray: \n");
        printArray(integerArray);
        System.out.printf("Array doubleArray: \n");
        printArray(doubleArray);
        System.out.printf("Array characterArray: %n");
        printArray(characterArray);
        
        
    }
    private static void printArray(Integer[] integerArray) 
    {
        for (Integer integer : integerArray) {
            System.out.printf("%s ", integer);
        }
        System.out.println();
    }
    private static void printArray(Double[] doubleArray) 
    {
        for (Double doubleElement : doubleArray){
            System.out.printf("%s ", doubleElement);
        }
        System.out.println();
    }
    private static void printArray(Character[] characterArray) 
    {
        for (Character character : characterArray) {
            System.out.printf("%s ", character);
        }
        System.out.println();
    }


}
