
package palindromo;
import java.util.Scanner;
import static palindromo.recursivo.recursivo;

public class Palindromo {

    public static void main(String[] args) {
            Scanner N = new Scanner (System.in);
        String palabra,cambiar;
        System.out.print("Escriba una palabra: ");
        palabra= N.nextLine();
        cambiar=palabra.replaceAll("","");
        if (recursivo(cambiar))
            System.out.println("La palabra si es palindromo");
        else
            System.out.println(" La palabra no es palindromo");
    }
}