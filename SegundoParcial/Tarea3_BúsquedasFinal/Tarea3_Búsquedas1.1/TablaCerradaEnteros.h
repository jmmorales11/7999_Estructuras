#pragma once 
#include <iostream>
#include <cstring>
#include <cstdlib>
#include "NodoEntero.cpp"
#define NCASILLAS 29

class TablaCerradaEnteros{
    private:
        NodoHash **tabla;
    public:
        TablaCerradaEnteros();
        ~TablaCerradaEnteros();
        void insertar(int valor);
        void eliminar(int valor);
        void imprimir();
        void buscar(int valor);
        int hash(int valor);
        int hash2(int valor);
};