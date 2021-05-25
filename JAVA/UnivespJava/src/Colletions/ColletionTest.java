import java.util.ArrayList;
import java.util.List;
import java.util.Collection;
import java.util.Iterator;

public class ColletionTest {
    public static void main(String[] args) {
        String colors[] = {"MAGENTA", "RED", "WHITE", "BLUE", "CYAN"};
        List<String> list = new ArrayList<String>();
        for (String color : colors)
            list.add(color);

        String[] removeColors = {"RED", "WHITE", "BLUE"};
        List<String> removeList = new ArrayList<String>();
        for (String color : removeColors)
            removeList.add(color);

        System.out.println("Array list");
        for (int i = 0; i < list.size(); i++)
            System.out.printf("%s ", list.get(i));
        
        private static void removeColors2(Collection<String> collection1, Collection<String> collection2)
        {
            Iterator<String> iterator = collection1.iterator();
            while (iterator.hasNext()){
                if (collection2.contains(iterator.next()))
                    iterator.remove();
            }
        }
}
