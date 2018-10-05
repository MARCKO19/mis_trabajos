
package dinero;

import java.util.Scanner;

public class Dinero {
    
    public static void main(String[] args) {
        Scanner N;
        N = new Scanner (System.in);
        comparando primero = new comparando();  
        int e,p,c;
        
        System.out.println("Ingrese el efectivo; ");
        e = N.nextInt();
        System.out.println("Precio del producto; ");
        p = N.nextInt();
        c = e - p;
        comparando.cantidad(c);
    }
    
}
