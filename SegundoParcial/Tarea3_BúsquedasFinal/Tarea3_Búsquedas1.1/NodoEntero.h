#include <cstdlib>
#pragma once
using namespace std;

class NodoHash{
    private:
        int valor;
        NodoHash *sig;
    public:
        NodoHash(int valor);
        ~NodoHash();
        int getValor();
        NodoHash *getSig();
        void setSig(NodoHash *sig);
};