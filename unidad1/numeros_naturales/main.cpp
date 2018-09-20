#include <iostream>
#include <stdlib.h>
#include <cmath>
#include <string>
#include <fstream>
#include "numeros.h"

using namespace std;

int main()
{
    numeros z;
    int opcion;
    cout << " *************************************** " << endl;
    cout << "PROGRAMA DE NUMEROS NATURALES " << endl;
    cout << " *************************************** " << endl;
    while(opcion!=-1){
        cout << " ELIJA UNA OPCION: "<< endl;
        cout << " 1.- SUCESOR "<< endl;
        cout << " 2.- ANTECESOR "<< endl;
        cout << " 3.- SUMA "<< endl;
        cout << " 4.- DIFERENCIA "<< endl;
        cout << " 5.- OPERACION MENOR "<< endl;
        cout << " 6.- IGUAL " << endl;
        cout << " 7.- CERO " << endl;
        cout << " 8.- SALIR " << endl;
        cin >> opcion;

        switch (opcion){
        case 1:
            cout << " ------------------ " << endl;
            cout << " SUCESOR " << endl;
            cout << " ------------------ " << endl;
            cout << " *************************************** " << endl;
            cout << "EL SUCESOR ES: "<< z.sucesor() << endl;
            cout << " *************************************** " << endl;
            break;

        case 2:
            cout << " ------------------ " << endl;
            cout << " ANTECESOR " << endl;
            cout << " ------------------ " << endl;
            cout << " *************************************** " << endl;
            cout << "EL ANTECESOR ES: "<<z.antecesor()<< endl;
            cout << " *************************************** " << endl;
            break;

        case 3:
            cout << " ------------------ " << endl;
            cout << " SUMA DE DOS NUMEROS " << endl;
            cout << " ------------------ " << endl;
            cout << " *************************************** " << endl;
            cout << "LA SUMA ES: " << z.suma() << endl;
            cout << " *************************************** " << endl;
            break;

        case 4:
            cout << " ------------------ " << endl;
            cout << " DIFERENCIA DE NUMEROS " << endl;
            cout << " ------------------ " << endl;
            cout << " *************************************** " << endl;
            cout << "LA DIFERENCIA ES: " << z.diferencia() <<endl;
            cout << " *************************************** " << endl;
            break;

         case 5:
            cout << " ------------------ " << endl;
            cout << " OPERACION MENOR " << endl;
            cout << " ------------------ " << endl;
            z.operacionmenor();
            break;

        case 6:
            cout << " ------------------ " << endl;
            cout << " IGUAL " << endl;
            cout << " ------------------ " << endl;
            z.igual();
            break;

        case 7:
            cout << " ------------------ " << endl;
            cout << " CERO " << endl;
            cout << " ------------------ " << endl;
            z.cero();
            break;
        case 8:
            exit(8);
            break;
        }
    }
    return 0;
}
