#include <iostream>
#include <cstring>
#include <cstdlib>
#include "NodoEntero.h"

NodoHash:: NodoHash(int valor){
    this->valor = valor;
    sig = NULL;
}
NodoHash:: ~NodoHash(){
    delete sig;
}
int NodoHash :: getValor(){
    return valor;
}
NodoHash *NodoHash :: getSig(){
    return sig;
}
void NodoHash :: setSig(NodoHash  *sig){
    this->sig = sig;
}
