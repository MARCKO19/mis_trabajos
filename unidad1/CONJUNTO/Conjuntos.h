#ifndef CONJUNTOS_H
#define CONJUNTOS_H


class Conjuntos
{
    public:
        Conjuntos();

        int Getnumeros() { return numeros; }
        void Setnumeros(int val) { numeros = val; }

        int lista(int conjunto1[], int conjunto2[]);
        int PerteneceAlConjunto(int conjunto[]);
        int RetirarElemento(int conjunto[]);
        int Union(int conjunto1[], int conjunto2[]);
        int Interseccion(int conjunto1[], int conjunto2[]);
        int Diferencia(int conjunto1[], int conjunto2[]);

    protected:

    private:
        int numeros;
};

#endif // CONJUNTOS_H
