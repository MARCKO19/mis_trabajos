
package palindromo;

public class recursivo{
    public static boolean recursivo(String palabra)
    {
        if(palabra.length()==0 || palabra.length()==1)
            return true;
        if(palabra.charAt(0)==palabra.charAt(palabra.length()-1))
        return recursivo(palabra.substring(1, palabra.length()-1));
        return false;
    }
    
}