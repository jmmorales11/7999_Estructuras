#include "Nodo.h"

unordered_map<char, Nodo*> Nodo::getHijos() {
    return hijos;
}
    
void Nodo::setHijos(unordered_map<char, Nodo*> newHijos) {
    hijos = newHijos;
}
