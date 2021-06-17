import java.util.Arrays;
import java.util.LinkedList;

public class UsingToArray {
    public static void main(String[] args) {
        String[] colors = {"black", "blue", "yellow"};
        LinkedList<String> link = new LinkedList<>(Arrays.asList(colors));

        link.addLast("red");
        link.add("pink");
        link.add(3, "green");
        link.addFirst("cyan");
        // obtém elementos LinkedList como um array.
        colors = link.toArray(new String[link.size()]);
        System.out.println("colors: ");
        for (String color : colors)
            System.out.println(color);


    }
}
