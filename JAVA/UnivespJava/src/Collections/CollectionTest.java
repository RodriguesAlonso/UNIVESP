import java.util.ArrayList;
import java.util.Collection;
import java.util.Iterator;
import java.util.List;

public class CollectionTest {
    public static void main(String[] args) {
        String[] color = {"RED", "BLUE", "WHITE", "MAGENTA"};
        List<String> list = new ArrayList<String>();
        for (String string : color) {
            list.add(string);
        }
        System.out.printf("List: %s%n", list);
        String[] remove = {"BLUE", "WHITE"};
        List<String> listRemove = new ArrayList<String>();
        for(String string : remove)
            listRemove.add(string);
        System.out.printf("removeList: %s%n", listRemove);

        removeColor(list, listRemove);

        System.out.printf("List after coloRemove: ");
        for (int i = 0; i < list.size(); i++)
            System.out.printf("%s ",list.get(i));

    }
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
