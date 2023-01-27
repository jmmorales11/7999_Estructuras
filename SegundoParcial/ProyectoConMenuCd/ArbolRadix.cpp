/***********************************************************************
 * UFA-ESPE
 * Autores:  Jeimy Marley Morales Sosa & Camilo Andres Orrico Emme 
 * Modificacion: Jueves, 19 de Enero de 2023 21:17:59
 * Purpose: Grafico del Arbol Radix
 *Nivel: Tercero           NRC:7999
 ***********************************************************************/
#include "ArbolRadix.h" 
#include <iostream>
#include <graphics.h>
#include <unordered_map>
#include <string>
#include <Windows.h>
using namespace std;
ArbolRadix::ArbolRadix(){ 
	raiz = new Nodo(); 
}

void ArbolRadix::insertar(string palabra) {
    Nodo* actual = this->raiz;
    for (char c : palabra) {
      if (actual->getHijos().find(c) == actual->getHijos().end()) {
      	actual = new Nodo();
        actual->setHijos(c);
      }
      //actual = actual->hijos[c];
      auto it = actual->getHijos().find(c);
		if (it == actual->getHijos().end()) {
		    it = actual->getHijos().emplace(c, new Nodo()).first;
		}
	actual = it->second;
    }
    actual->setFinalPalabra(true);
}

bool ArbolRadix::buscar(string palabra) {
    Nodo* actual = raiz;
    for (char c : palabra) {
      if (actual->getHijos().find(c) == actual->getHijos().end()) {
        return false;
      }
      auto it = actual->getHijos().find(c);
		if (it == actual->getHijos().end()) {
		    it = actual->getHijos().emplace(c, new Nodo()).first;
		}
	actual = it->second;
    }
    return actual->getFinalPalabra();
}
  void ArbolRadix::imprimir(Nodo* nodo,string prefijo) {
        if (nodo->getFinalPalabra()) {
            cout << prefijo <<endl;
        }
        for (auto hijo : nodo->getHijos()) {
            imprimir(hijo.second, prefijo+hijo.first);

        }
    }
    
bool ArbolRadix::eliminar(Nodo* nodo, string palabra, int nivel) {
    if (nodo == nullptr) {
        return false;
    }
    if (nivel == palabra.length()) {
        if (!nodo->getFinalPalabra()) {
            return false;
        }
        nodo->setFinalPalabra(false);
        return nodo->getHijos().empty();
    }
	char c = palabra[nivel];
    auto hijo = nodo->getHijos().find(c);
    if (hijo == nodo->getHijos().end()) {
        return false;
    }
    bool remover = eliminar(hijo->second, palabra, nivel + 1);
    if (remover) {
        nodo->getHijos().erase(hijo);
        return nodo->getHijos().empty() && !nodo->getFinalPalabra();
    }
    return false;
    }
void ArbolRadix::imprimirDife(Nodo* nodo, string prefijo, int nivel) {
        
        for (auto hijo : nodo->getHijos()) {
        	for (int i = 0; i < nivel; i++) {
            	cout<<"    ";
        	}
        cout << " |--" << hijo.first <<endl;
        imprimirDife(hijo.second, prefijo + hijo.first, nivel +1);
        }
}
void ArbolRadix::NI(Nodo* nodo, int nivel) {
        
        for (auto hijo : nodo->getHijos()) {
        	for (int i = 0; i < nivel; i++) {
            	cout<<"";
        	}
        NI(hijo.second, nivel +1);
}
        cout<<nivel<<endl;
    
}

void ArbolRadix::recorrer(Nodo *nodo, int x, int y){
	for(auto hijo : nodo->getHijos()){
		char num1[10]; 
			x+=60;
			sprintf(num1,"%c", hijo.first);
			settextstyle(0,HORIZ_DIR,3);
			outtextxy(x-15,y-5,num1);
			circle( x, y,25);
			delay(1000);
			recorrer(hijo.second, x + 45, y + 45);		
	}

}
void ArbolRadix::tamPantalla(int& ancho, int& altura){
	ancho = GetSystemMetrics(SM_CXSCREEN);
    altura = GetSystemMetrics(SM_CYSCREEN);
}
