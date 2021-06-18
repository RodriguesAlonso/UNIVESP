public class StackTest2 {
    public static void main(String[] args) {
        Double[] doubleElements = {1.1, 2.2, 3.3, 4.4, 5.5};
        Integer[] integerElements = {1, 2, 3, 4, 5, 6, 8, 9, 10};

        Stack<Double> doubleStack = new Stack<>(5);
        Stack<Integer> integerStack = new Stack<>();

        testPush("doubleStack", doubleStack, doubleElements);
        testPop("doubleStack", doubleStack);

        testPush("integerStack", integerStack, integerElements);
        testPop("integerStack", integerStack);
    }
    public static <T> void testPush(String name, Stack<T> stack, T[] elements)
    {
        System.out.printf("%nPushing elements onto %s%n ", name);
        for (T element : elements)
        {
            stack.push(element);
            System.out.printf("%s ", element);
        }
    }

    public static <T> void testPop(String name, Stack<T> stack)
    {
        try {
            T elementPop;
            System.out.printf("%nPoping elements from %s %n", name);
            while(true)
            {
                elementPop = stack.pop();
                System.out.printf("%s ", elementPop);
            }
            
        } catch (EmptyStackException emptyStackException) {
            System.out.println();
            emptyStackException.printStackTrace();
        }
    }
}
