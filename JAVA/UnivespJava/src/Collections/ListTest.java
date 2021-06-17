import java.util.LinkedList;
import java.util.List;

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
        //vonverte em string de letras maiúscilas.
        //imprime elementos list1.

        //remove itens 4 a 6.
        //imprime list1.
        //imprime list1 na ordem inversa.
        
    }
    //gera saída do conteúdo da List.
    //Localiza objetos String e converte em letras maiúsculas.
    //Obtém sublista e utiliza método clear para excluir itens da sublista.
    //impre lista invertida.
}
