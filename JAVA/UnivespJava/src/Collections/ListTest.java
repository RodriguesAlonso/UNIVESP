import java.util.LinkedList;
import java.util.List;
import java.util.ListIterator;

public class ListTest {
    public static void main(String[] args) {
        //adicionar elementos colors a list1.
        String[] colors = {"black", "yellow", "green", "blue", "violet", "silver"};
        List<String> list1 = new LinkedList<>();
        System.out.printf("list1: ");
        int i = 0;
        for (String string : colors) {
            list1.add(string);
            System.out.printf("%s ", list1.get(i));
            i++;
        }
        //adicionr elementos colors2 a list2.
        String[] colors2 = {"gold", "white", "brown", "blue", "gray", "silver"};
        List<String> list2 = new LinkedList<>();
        for (String string : colors2)
            list2.add(string);
        System.out.printf("%nlist2 %s", list2);
        //concatena as listas.
        list1.addAll(list2);
        // imprime elementos lis1
        System.out.printf("%nlist1 %s", list1);
        //libera recursos
        list2 = null;
        System.out.printf("%nlist2 %s", list2);
        //converte em string de letras maiúscilas.
        convertToUpperCaseString(list1);
        //imprime elementos list1.
        printList(list1);
        //remove itens 4 a 6.
        removeItems(list1, 4, 7);
        //imprime list1.
        printList(list1);
        //imprime list1 na ordem inversa.
        printReversedList(list1);
        
    }
    //gera saída do conteúdo da List.
    private static void printList(List<String> list)
    {
        System.out.printf("%nlist:%n");
        for(String string : list)
            System.out.printf("%s ", string);
        System.out.println();

    }
    //Localiza objetos String e converte em letras maiúsculas.
    private static void convertToUpperCaseString(List<String> list)
    {
        ListIterator<String> iterator = list.listIterator();
        while(iterator.hasNext())
        {
            String color = iterator.next();
            iterator.set(color.toUpperCase());
        }
    }
    //Obtém sublista e utiliza método clear para excluir itens da sublista.
    private static void removeItems(List<String> list, int start, int end)
    {
        list.subList(start, end).clear();
    }
    //imprime lista invertida.
    private static void printReversedList(List<String> list){
        ListIterator<String> iterator = list.listIterator(list.size());
        System.out.printf("Reversed List:%n ");
        while(iterator.hasPrevious())
        {
            System.out.printf("%s ", iterator.previous());
        }
    }
}
