#include "ArbolRadix.h" 
#include <iostream>
#include <graphics.h>
#include <unordered_map>
#include <string>
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
      actual = actual->hijos[c];
    }
    actual->finalDePalabra = true;
}

bool ArbolRadix::buscar(string palabra) {
    Nodo* actual = raiz;
    for (char c : palabra) {
      if (actual->hijos.find(c) == actual->hijos.end()) {
        return false;
      }
      actual = actual->hijos[c];
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
void ArbolRadix::imprimir2() {
    imprimir(raiz, "");
}
    
void ArbolRadix::imprimir3(Nodo* nodo, string prefijo, int nivel) {
        if (nodo->finalDePalabra) {
            cout << prefijo << endl;
        }
        for (auto hijo : nodo->hijos) {
        	for (int i = 0; i < nivel; i++) {
            	std::cout << " ";
        	}
        cout << "|--" << hijo.first << endl;
        imprimir3(hijo.second, prefijo + hijo.first, nivel + 2);
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
 void ArbolRadix::dibujarCirculos(Nodo* nodo, int x, int y, string prefijo,int nivel  ){
	char num2[10]; 
	sprintf(num2,"%c", nodo->hijos.begin()->first);
	settextstyle(0,HORIZ_DIR,3);
	outtextxy(x-15,y-5,num2);
	circle( x, y,25);
	int	x2 = 45;
	int y2 = 45;
	for(auto hijo : nodo->hijos){
		cout<<"bucle"<<endl;
		delay(1000);
		dibujarCirculos(hijo.second,x + x2, y + y2, prefijo + hijo.first  , nivel + 1);
		x2+=45;
	}
}