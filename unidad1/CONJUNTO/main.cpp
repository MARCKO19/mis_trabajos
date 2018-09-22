#include <iostream>
#include "Conjuntos.h"
#include <stdlib.h>
#include<string>
#include <fstream>
using namespace std;

int main()
{
    Conjuntos x;
    int n = 6;
    int opcion,y,a,t,z,r,o;
    int conjunto1[n];
    int conjunto2[n];

    cout << " DIGITE 6 NUMEROS "<< endl;
    cout << "CONJUNTO 1"<< endl;
    for(int i=0; i<n; i++){
        cin >> conjunto1[i];
        cout << endl;
    }
    cout << "CONJUNTO 2"<< endl;
    for(int j=0; j<n; j++){
        cin >> conjunto2[j];
        cout << endl;
    }
    x.lista(conjunto1,conjunto2);

    cout << " OPERACION DE CONJUNTOS "<< endl;
    cout << "1.- UNION "<< endl;
    cout << "2.- INTERSECCION "<< endl;
    cout << "3.- DIFERENCIA SIMETRICA "<< endl;
    cout << "4.- PERTENECE NUMERO "<< endl;
    cout << "5.- RETIRAR NUMERO "<< endl;
    cout << "6.- SALIR "<< endl;
    cin >> opcion;
    switch(opcion){

    case 1:
            cout << " UNION "<< endl;
            cout << " LA UNION ES "<< endl;
            x.Union(conjunto1,conjunto2);
    break;
    case 2:
            cout << " INTERSECCIÓN "<< endl;
            cout << " LA INTERSECCIÓN ES "<< endl;
            x.Interseccion(conjunto1,conjunto2);
    break;
    case 3:
        cout << " DIFERNCIA "<< endl;

        x.Diferencia(conjunto1,conjunto2);
    break;
    case 4:
        cout << " PERTENECE NUMERO "<< endl;
        cout << " CONJUNTO 1 "<< endl;
        cout << " CONJUNTO 2 "<< endl;
        cin >> y;
        if(y==1){
            cout << " NUMERO QUE QUIERE BUCAR "<< endl;
            cin >> a;
            x.Setnumeros(a);
            x.PerteneceAlConjunto(conjunto1);
        }else{
            cout << " NUMERO QUE QUIERE BUCAR "<< endl;
            cin >> t;
            x.Setnumeros(t);
            x.PerteneceAlConjunto(conjunto2);
        }
    break;
    case 5:
        cout << " RETIRAR NUMERO "<< endl;
        cout << " CONJUNTO 1 "<< endl;
        cout << " CONJUNTO 2 "<< endl;
        cin >> z;
        if(z==1){
            cout << " INTRODUZCA EL NUMERO A RETIRAR "<< endl;
            cin >> r;
            x.Setnumeros(r);
            x.RetirarElemento(conjunto1);
        }else{
            cout << " INTRODUZCA EL NUMERO A RETIRAR "<< endl;
            cin >> o;
            x.Setnumeros(o);
            x.RetirarElemento(conjunto2);
            }
            break;
    }
return 0;
}
