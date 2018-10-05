
package conversion;
import static conversion.conver.buscar;
import java.util.Scanner;

public class Conversion {

    public static void main(String[] args) {
        int bi;
        Scanner s =  new Scanner(System.in );
        System.out.println("Digite un numero");
        bi= s.nextInt();
        System.out.println(" El numero binario es:");
        System.out.println(buscar(bi));
    }
}