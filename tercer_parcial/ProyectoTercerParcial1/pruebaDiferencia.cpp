#include <iostream>
#include "validar.h"
#include "Operaciones.cpp"

using namespace std;

int main(){
//	int gd = DETECT;
//	int gm;
//	initgraph(&gd, &gm,"C:\TC\8GI");
	initwindow(1200,700); 

//	char datoEntero[100], datoCaracter[100];
	string dato;
	Operaciones<string> *op;
	ListaDoble<string> *lis=new ListaDoble<string>() ;
	ListaDoble<string> *lis1=new ListaDoble<string>();
	ListaDoble<string> *lis2= new ListaDoble<string>();
	lis->insertarPorCola(dato);
	
	lis->insertarPorCola("b");
	lis->insertarPorCola("c");
	lis->insertarPorCola("d");
	lis1->insertarPorCola("a");
	lis1->insertarPorCola("b");
	lis1->insertarPorCola("h");
	op->interseccion(lis,lis1,lis2);
	lis2->mostrarPorCabeza();
//	op->borrar(lis,lis2);
}