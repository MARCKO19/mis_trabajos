#include "Conjuntos.h"
#include <iostream>
#include<process.h>
#include <stdlib.h>
#include <fstream>

using namespace std;

Conjuntos::Conjuntos()
{
    //ctor
}

 int Conjuntos::lista(int conjunto1[],int conjunto2[]){
     int op;
     int n=6;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++) {
            if(conjunto1[i]>conjunto1[j]){
                op=conjunto1[i];
                conjunto1[i]=conjunto1[j];
                conjunto1[j]=op;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++) {
            if(conjunto2[i]>conjunto2[j]){
                op=conjunto2[i];
                conjunto2[i]=conjunto2[j];
                conjunto2[j]=op;
            }
        }
    }
}

int Conjuntos::Union(int conjunto1[], int conjunto2[])
{
    int op;
    int n=6;
    int conjunto3[n+n];
    int i,j,q,w,f;

       q=0;
    for(i=0;i<n;++i){
        conjunto3[q]=conjunto1[i];
        q++;
    }
    for(i=0;i<n;++i){
        f=1;
        for(j=0;j<n;++j){
            if(conjunto2[i]==conjunto1[j]){
                f=0;
                break;
            }
        }
        if(f){
            conjunto3[q]=conjunto2[i];
            q++;
        }
    }
    for(i=0;i<q;++i){
        conjunto3[i];
    }
    for(i=0;i<q;++i)
        for(j=i+1;j<q;)
        {
            if(conjunto3[i]==conjunto3[j])
            {
                for(w=j;w<q-1;++w)
                    conjunto3[w]=conjunto3[w+1];
                --w;
            }
            else
                ++j;
        }
    cout<<" UNION DE LOS CONJUNTOS: ";
    cout<<endl;
    for(i=0;i<q;++i)
        cout<<conjunto3[i]<<" ";
}

int Conjuntos::Interseccion(int conjunto1[], int conjunto2[])
{
    cout << " LA INTERSECCION ES: "<<endl;
    int n=6;
    int p=0,q=0;
    while(p<=n&&q<=n){
      if (conjunto1[p]<conjunto2[q]) {
         p++;
      } else if(conjunto2[q]<conjunto1[p]){
         q++;
      }else if(conjunto1[p] == conjunto2[q]){
         cout << conjunto1[p]<<"  ";
         p++;
         q++;
      }
   }
}

int Conjuntos::Diferencia(int conjunto1[],int conjunto2[])
{
    int n=6;
    int conjunto3[n],conjunto4[n],conjunto5[n];
    int i,j,in=0,u=0,s=0,cont;
      for(i=0;i<n;i++)
        {
            conjunto3[u]=conjunto1[i];
            u++;
        }
        for(i=0;i<n;i++)
        {
        cont=0;
            for(j=0;j<n;j++)
                if(conjunto2[i]==conjunto1[j]){
                cont=1;
                break;
                }
                if(cont==0){
                conjunto3[u]=conjunto2[i];
                u++;
                }
        }

        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
                if(conjunto1[i]==conjunto2[j]){
                    conjunto4[in]=conjunto1[i];
                    in++;
                }
        for(i=0;i<u;i++)
        {
            cont=0;
            for(j=0;j<in;j++)
                if(conjunto3[i]==conjunto4[j])
                    {
                    cont=1;
                    break;
                    }
                if(cont==0)
                    {
                    conjunto5[s]=conjunto3[i];
                    s++;
                    }
 }
cout<<" LA DIFERENCIA SIMETRICA ES: "<<endl;
int op;
for(int i=0;i<s;i++){
        for(int j=i+1;j<s;j++) {
            if(conjunto5[i]>conjunto5[j]){
                op=conjunto5[i];
                conjunto5[i]=conjunto5[j];
                conjunto5[j]=op;
            }
        }
    }
for(i=0;i<s;i++)
cout<<conjunto5[i]<<" ";
}

int Conjuntos::PerteneceAlConjunto(int conjunto[])
{
    int n=6;
    int b=0;
    for(int i=0; i<n; i++){
        if(Getnumeros()==conjunto[i])
            {
            b=1;
            cout<<endl<<" EL NUMERO "<<Getnumeros()<<" SE ENCUENTRA EN LA POSICION: "<<" ["<<i+1<<"] "<<endl;
            break;
            }else{
                b=0;
            }
    }
    if(b==0){
        cout<< "EL NUMERO NO SE ENCUENTRA "<<endl;
    }
}

int Conjuntos::RetirarElemento(int conjunto[])
{
      int n=6,i,j,conjunto2[n+n];
    for(i=0,j=0;i<n;++i)
    {
        if(conjunto[i]!= Getnumeros())
            conjunto2[j++]=conjunto[i];
    }
    if(j==n)
    {
        cout<<"EL ELEMENTO NO ES DEL CONJUNTO";
        exit(0);
    }
    else
    {
        cout<<"EL CONJUNTO NUEVO ES ";
        for(i=0;i<j;i++)
            cout<<conjunto2[i]<<" ";
    }
}
