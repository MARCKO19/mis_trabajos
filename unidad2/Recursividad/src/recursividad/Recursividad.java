
package recursividad;


public class Recursividad {
    
    public static void main(String[] args) {
    recursive N = new recursive();
    
    System.out.println("El factorial de 5 es: ");
    System.out.println(N.factorial(5));
    System.out.println();
    
    System.out.println("Decremento recursivo: ");
    N.decremento(10);
    System.out.println();
    System.out.println();
    
    System.out.println("Serie de fibonacci de 10 es:");
    System.out.println(N.fibo(10));
    System.out.println();
}
}
