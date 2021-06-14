public class GenericMethodTest {
    public static void main(String[] args) {
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
    //Método genérico print array.
    /*
    public static <T> void printArray(T [] inputArray)
    {
        for (T t : inputArray) {
            System.out.printf("%s ", t);                
        }
        System.out.println();
    }
    */
    public static void printArray(Object [] inputArray)
    {
        for (Object object : inputArray) {
            System.out.printf("%s ", object);  
        }
        System.out.println();
    }
}
