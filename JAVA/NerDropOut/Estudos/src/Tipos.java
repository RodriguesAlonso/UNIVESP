
public class Tipos<T, S>{
    private T objeto01;
    private S objeto02;
    
    public Tipos(T ob1, S ob2)
    {
        this.objeto01 = ob1;
        this.objeto02 = ob2;
    }
    public void mostrar(){
        System.out.println(objeto01.getClass().getName());
        System.out.println(objeto02.getClass().getName());
    }
    public String toString() {
        return this.objeto01 + ", " + this.objeto02;
    }

    public static void main(String[] args) {
        Tipos<Integer, String> ob1 = new Tipos<>(10, "dez");
        Tipos<Double, String> ob2 = new Tipos<>(12.5, "doze e meio");
        Tipos<String, Double> ob3 = new Tipos<>("João", 33.3);
        ob1.mostrar();
        ob2.mostrar();
        ob3.mostrar();
        System.out.println(ob1);
        System.out.println(ob2);
        System.out.println(ob3);

    }
}