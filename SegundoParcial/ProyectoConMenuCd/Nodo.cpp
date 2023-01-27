/***********************************************************************
 * UFA-ESPE
 * Autores:  Jeimy Marley Morales Sosa & Camilo Andres Orrico Emme 
 * Modificacion: Jueves, 19 de Enero de 2023 21:17:59
 * Purpose: Grafico del Arbol Radix
 *Nivel: Tercero           NRC:7999
 ***********************************************************************/
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