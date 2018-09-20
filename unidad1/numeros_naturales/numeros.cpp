#include "numeros.h"
#include <iostream>
#include <stdlib.h>
#include <cmath>
#include <string>
#include <fstream>

using namespace std;
numeros::numeros()
{
    //ctor
}
ifstream entrada;
ifstream entrada2;
float n,n2;

float numeros::sucesor(){
    entrada.open("archivo.txt");
    entrada>>n;
return n+1;
}

float numeros::antecesor(){
    entrada.open("archivo.txt");
    entrada>>n;
return n-1;
}

float numeros::suma(){
    entrada.open("archivo.txt");
    entrada2.open("archivo2.txt");
    entrada>>n;
    entrada2>>n2;
return n+n2;
}

float numeros::diferencia(){
    entrada.open("archivo.txt");
    entrada2.open("archivo2.txt");
    entrada>>n;
    entrada2>>n2;
return n-n2;
}

void numeros::operacionmenor(){
 entrada.open("archivo.txt");
    entrada2.open("archivo2.txt");
    entrada>>n;
    entrada2>>n2;
   if(n<n2){
        cout << " EL MENOR ES " << n << endl << endl << endl;}
   if(n2<n){
        cout << " EL MENOR ES " <<n2 << endl << endl << endl;
        }
   if(n==n2){
    cout << " NO EXISTE EL MENOR " << endl << endl << endl;
    }
}

void numeros::igual(){
    entrada.open("archivo.txt");
    entrada2.open("archivo2.txt");
    entrada>>n;
    entrada2>>n2;
   if (n==n2){
    cout << " *************************************** " << endl;
    cout<<" ES IGUAL "<< endl;
   cout << " *************************************** " << endl;}
   else {
       cout << " *************************************** " << endl;
       cout << " NO ES IGUAL " << endl;
   cout << " *************************************** " << endl;
   }
}

void numeros::cero(){
    entrada.open("archivo.txt");
    entrada2.open("archivo2.txt");
    entrada>>n;
    entrada2>>n2;
float r;
r= n*n2;
if(r==0){
    cout << " *************************************** " << endl;
    cout << " EL RESULTADO " << r << "ES CERO " << endl;
    cout << " *************************************** " << endl;
}else{
    cout << " *************************************** " << endl;
    cout << " EL RESULTADO " << r << " NO ES CERO " << endl;
    cout << " *************************************** " << endl;
}
}
