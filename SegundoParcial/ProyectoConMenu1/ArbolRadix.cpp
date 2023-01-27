/***********************************************************************
 * UFA-ESPE
 * Autores:  Jeimy Marley Morales Sosa & Camilo Andres Orrico Emme 
 * Modificacion:Viernes, 20 de Enero de 2023 
 * Purpose: Arbol Radix
 *Nivel: Tercero           NRC:7999
 ***********************************************************************/
#include "ArbolRadix.h" 
#include <iostream>
#include <graphics.h>
#include <unordered_map>
#include <string>
#include <Windows.h>
#define R 25
#define D 45
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

void ArbolRadix::recorrer(Nodo *nodo, int x, int y){
	for(auto hijo : nodo->hijos){
		char num1[10]; 
			x+=60;
			sprintf(num1,"%c", hijo.first);
			settextstyle(0,HORIZ_DIR,3);
			outtextxy(x-15,y-5,num1);
			circle( x, y,R);
			delay(1000);
			line(x+20,y+10,x+80,y+30);	
			recorrer(hijo.second, x + D, y + D);
				
	}
}
void ArbolRadix::tamPantalla(int& ancho, int& altura){
	ancho = GetSystemMetrics(SM_CXSCREEN);
    altura = GetSystemMetrics(SM_CYSCREEN);
}

void ArbolRadix::portada(){
	
	rectangle(90, 100, 1300, 600);
	setcolor(7);
	settextstyle(3,HORIZ_DIR,6);
	outtextxy(100,250,"Morales Marley");
	outtextxy(100,350,"Orrico Camilo");
	circle( 1000,200,R);
	circle( 950,250,R);
	circle( 900,300,R);
	circle( 850,350,R);
	circle( 1050,250,R);
	circle( 1100,300,R);
	circle( 1150,350,R);
	circle( 1000,300,R);
	circle( 1050,350,R);
	circle( 950,350,R);
}