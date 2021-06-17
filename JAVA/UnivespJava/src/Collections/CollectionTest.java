import java.util.ArrayList;
import java.util.Collection;
import java.util.Iterator;

public class CollectionTest {
    
    public static void main(String[] args) {
    // Adiciona elementos no array color a lista (Magenta, Red, White, Blue, Cyan).
    String[] color = {"MAGENTA", "RED", "WHITE", "BLUE", "CYAN"};
    ArrayList<String> colorList = new ArrayList<>();
    for (String element : color)
        colorList.add(element);
    
    //Adiciona elementos no array removeColor(Red, White, Blue) em remoList.
    String[] removeColor = {"RED", "WHITE", "BLUE"};
    ArrayList<String> removeColorList = new ArrayList<>();
    for (String remove : removeColor)
        removeColorList.add(remove);
    //Print a lista.
    System.out.printf("ColorList: %s%n", colorList);
    System.out.printf("RemoveColorList: %s%n", removeColorList);
    //Remove da lista as cores contidas em remoList.
    removeColor(colorList, removeColorList);
    //Print a lista.
    System.out.printf("ColorList after calling removeColor: %s%n", colorList);
    
    //Fim
}
//Remove cores especificadas em collection2 a partir de collection1.
    private static void removeColor(Collection<String> collection1, Collection<String> collection2)
    {
        Iterator<String> iterator = collection1.iterator();
        while(iterator.hasNext())
        {
            if(collection2.contains(iterator.next()))
                iterator.remove();
        }
    }
}
