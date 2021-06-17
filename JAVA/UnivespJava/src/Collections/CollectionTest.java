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
        System.out.printf("List: %s", list);
        String[] remove = {"BLUE", "WHITE"};
        List<String> listRemove = new ArrayList<String>();
        System.out.printf("removeList: %s", listRemove);
    }
}
