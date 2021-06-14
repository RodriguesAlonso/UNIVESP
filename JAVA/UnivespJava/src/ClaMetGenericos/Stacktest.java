public class Stacktest {
    public static void main(String[] args) {
        double[] doubleElements = {1.1, 2.2, 3.3, 4.4, 5.5};
        int[] integerElements = {1, 2, 3, 4, 5, 6, 7, 8, 9,10};

        //Criando Stack<Double> e Stack<Integer>.
        Stack<Double> doubleStack = new Stack<>(5);
        Stack<Integer> integerStack = new Stack<>();
        //Coloca os elementos nas stacks.
        testPushDouble(doubleStack, doubleElements);
        testPushInteger(integerStack, integerElements);
        //remvoe elemento
        testPopDouble(doubleStack);
        testPopInteger(integerStack);

        
    }

    // método teste push com pilha de double
    private static void testPushDouble(Stack<Double> stack, double[] values)
    {
        System.out.printf("ushing elements into double Stack%n");
        // insere elementos na stack.
        for (double value : values) {
            System.out.printf("%.1f ", value);
            stack.push(value);
        }
    }
    //teste do modo pop pilha double.
    private static void  testPopDouble(Stack<Double> stack)
    {
        try {
            System.out.printf("%nPopping elements from Double Stack%n");
            double popValue; // armazena o elemento removido da pilha.
            // remove todos os elementos da Stack
            while (true)
            {
                popValue = stack.pop();
                System.out.printf("%.1f ", popValue);
            }
        } catch (EmptyStackException emptyStackException) {
            System.err.println();
            emptyStackException.printStackTrace();
        }
    }
    private static void testPushInteger(Stack<Integer> stack, int[] values)
    {
        System.out.printf("%nPPushing elements into integer Stack%n");
        for (int value : values){
            System.out.printf("%d ", value);
            stack.push(value);
        }
    }
    private static void testPopInteger(Stack<Integer> stack){
        try {
            int popValue;
            System.out.printf("%nPoping elements from integerStack%n");
            while(true){
                popValue = stack.pop();
                System.out.printf("%d ", popValue);
            }
        } catch (EmptyStackException emptyStackException) {
            System.err.println();
            emptyStackException.printStackTrace();
        }
    }

}
