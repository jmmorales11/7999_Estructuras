#include "ArbolRadix.h" 
#include <iostream>
#include <graphics.h>
#include <unordered_map>
#include <string>
#include <stdio.h>
#include <math.h>
#include <Windows.h>
using namespace std;
ArbolRadix::ArbolRadix(){ 
	raiz = new Nodo(); 
}

void ArbolRadix::insertar(string palabra) {
    Nodo* actual = raiz;
    for (char c : palabra) {
      if (actual->hijos.find(c) == actual->hijos.end()) {
        actual->hijos[c] = new Nodo();
      }
      //actual = actual->hijos[c];
      auto it = actual->hijos.find(c);
		if (it == actual->hijos.end()) {
		    it = actual->hijos.emplace(c, new Nodo()).first;
		}
	actual = it->second;
    }
    actual->finalDePalabra = true;
}

bool ArbolRadix::buscar(string palabra) {
    Nodo* actual = raiz;
    for (char c : palabra) {
      if (actual->hijos.find(c) == actual->hijos.end()) {
        return false;
      }
      auto it = actual->hijos.find(c);
		if (it == actual->hijos.end()) {
		    it = actual->hijos.emplace(c, new Nodo()).first;
		}
	actual = it->second;
    }
    return actual->finalDePalabra;
}
  void ArbolRadix::imprimir(Nodo* nodo,string prefijo) {
        if (nodo->finalDePalabra) {
            cout << prefijo <<endl;
        }
        for (auto hijo : nodo->hijos) {
            imprimir(hijo.second, prefijo+hijo.first);

        }
    }
    
bool ArbolRadix::eliminar(Nodo* nodo, string palabra, int nivel) {
    if (nodo == nullptr) {
        return false;
    }
    if (nivel == palabra.length()) {
        if (!nodo->finalDePalabra) {
            return false;
        }
        nodo->finalDePalabra = false;
        return nodo->hijos.empty();
    }
	char c = palabra[nivel];
    auto hijo = nodo->hijos.find(c);
    if (hijo == nodo->hijos.end()) {
        return false;
    }
    bool remover = eliminar(hijo->second, palabra, nivel + 1);
    if (remover) {
        nodo->hijos.erase(hijo);
        return nodo->hijos.empty() && !nodo->finalDePalabra;
    }
    return false;
    }
void ArbolRadix::imprimirDife(Nodo* nodo, string prefijo, int nivel) {
        
        for (auto hijo : nodo->hijos) {
        	for (int i = 0; i < nivel; i++) {
            	cout<<"    ";
        	}
        cout << " |--" << hijo.first <<endl;
        imprimirDife(hijo.second, prefijo + hijo.first, nivel +1);
        }
}
void ArbolRadix::NI(Nodo* nodo, int nivel) {
        
        for (auto hijo : nodo->hijos) {
        	for (int i = 0; i < nivel; i++) {
            	cout<<"";
        	}
        NI(hijo.second, nivel +1);
}
        cout<<nivel<<endl;
    
}

void ArbolRadix::recorrer(Nodo *nodo, int x, int y, int nivel){
	int i = 0;
	for(auto hijo : nodo->hijos){
		char num1[10]; 
			x+=60;
			sprintf(num1,"%c", hijo.first);
			settextstyle(0,HORIZ_DIR,3);
			outtextxy(x,y,num1);
			circle( x, y,25);
			delay(1000);
			int x2 = (anch/(pow(2, nivel + 1)));
			int y2 = (altu/(pow(2, nivel + 1)));
		
			recorrer(hijo.second, x + (i*x2), y + y2, nivel+1);
			i++;		
	}

}
void ArbolRadix::tamPantalla(int& ancho, int& altura){
	ancho = GetSystemMetrics(SM_CXSCREEN);
    altura = GetSystemMetrics(SM_CYSCREEN);
}
