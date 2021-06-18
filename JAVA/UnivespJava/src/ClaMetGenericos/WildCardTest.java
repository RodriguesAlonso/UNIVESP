import java.util.ArrayList;

public class WildCardTest {
    public static void main(String[] args) {
        Integer[] integers = {1, 2, 3, 4, 5};
        ArrayList<Integer> integerList = new ArrayList<>();
        for (Integer elements : integers)
            integerList.add(elements);
        System.out.printf("integerList contains: %s%n", integerList);
        System.out.printf("Total of the elements in integerList: %.1f%n", sum(integerList));

        Double[] doubles = {2.2, 3.3, 4.4, 5.5};
        ArrayList<Double> doubleList = new ArrayList<>();
        for (Double element : doubles)
            doubleList.add(element);
        System.out.printf("DoubleList contain: %s%n", doubleList);
        System.out.printf("Total of the elements in doubleList: %.1f%n",sum(doubleList));

        Number[] numbers = {1, 2.4, 3, 4.1};
        ArrayList<Number> numbersList = new ArrayList<>();
        for (Number element : numbers)
            numbersList.add(element);

        System.out.printf("NumberList contain: %s%n", numbersList);
        System.out.printf("Total of elements in numberList: %.1f%n", sum(numbersList));

    }
    public static double sum(ArrayList<? extends Number> list){
        double total = 0;
        for(Number element : list)
            total += element.doubleValue();
        return total;
    }
}
