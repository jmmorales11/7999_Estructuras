#include "Nodo.h"


unordered_map<char, Nodo*> Nodo::getHijos() {
    return hijos;
}
    
void Nodo::setHijos(unordered_map<char, Nodo*> newHijos) {
    hijos = newHijos;
}
bool Nodo::getFinalPalabra(){
	return finalDePalabra;
}
string Nodo::getPalabra(){
	return palabra;
}
void Nodo::setFinalPalabra(bool newFinalPalabra){
	finalDePalabra=newFinalPalabra;
}
void Nodo::setPalabra(string newPalabra){
	palabra=newPalabra;
}