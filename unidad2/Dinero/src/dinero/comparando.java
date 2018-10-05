
package dinero;


class comparando {
    public static void cantidad(int cant){
                int mil,quinientos,doscientos,cien,cincuenta,veinte,diez,cinco,dos,peso;
        
        if(cant >= 1000){
            mil= cant/1000;
            System.out.println("Numero de billetes de $1000 = "+ mil);
            cantidad(cant%1000);
        }else{
            if(cant >=500 && cant<= 999){
            quinientos = cant/500;
                System.out.println("Numero de billetes de $500 = "+ quinientos);
                cantidad(cant%500);
        }else{
                if(cant>=200 && cant<=499){
                    doscientos= cant/200;
                    System.out.println("Numero de billetes de $200 = "+ doscientos);
                    cantidad(cant%200);
                }else{
                    if(cant>= 100 && cant <= 199){
                      cien= cant/100;
                    System.out.println("Numero de billetes de $100 = "+ cien);
                    cantidad(cant%100);
                    }else{
                        if (cant >=50 && cant <=99){
                            cincuenta = cant/50;
                            System.out.println("Numero de billetes de $50 = " + cincuenta);
                            cantidad(cant%50);
                        }else{
                        
                        if(cant>=20 && cant<=49){
                            veinte = cant/20;
                    System.out.println("Numero de billetes de $20 = "+ veinte);
                    cantidad(cant%20); 
                            
                        }else{
                            
                            if(cant>=10 && cant <= 19){
                                
                                diez = cant/10;
                                System.out.println("Numero de monedas de $10 = " + diez);
                                cantidad(cant%10);
                            }else{
                                if(cant>=5 && cant<= 9){
                                   cinco = cant/5;
                                    System.out.println("Numero de monedas de $5 = " + cinco);
                                    cantidad(cant%5);
                                }else{
                                    if(cant>=2 && cant<= 4){   
                                        dos = cant/2;
                                    System.out.println("Numero de monedas de $2 = " + dos);
                                    cantidad(cant%2);
                                    }else{
                                        if(cant == 1){
                                            peso = cant/1;
                                            System.out.println("Numero de monedas $1 = " + peso);
                                        }
                                    }
                                   
                                    
                                }
                                
                            }
                        }
                    }
                  }
                    
                }
            }
        }
    
  }
}
