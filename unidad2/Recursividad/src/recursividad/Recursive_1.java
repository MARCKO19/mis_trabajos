
package recursividad;


class recursive {
    long factorial(long n){
        if(n==0){
            return 1;
        }else{
            return n* factorial(n-1);
        }
    }
    long fibo(long n){
        if(n ==0 || n == 1){
            return 1;
        }else{
            return fibo(n-1) + fibo(n-2);
        }
    }
    void decremento(int x){
if(x>0){
    System.out.print(x + "x");
    decremento(x-1);
}
}
}
