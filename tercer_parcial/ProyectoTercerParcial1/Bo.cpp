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
	lis->insertarPorCola("b");
	lis->insertarPorCola("g");
	lis->insertarPorCola("v");
	lis->insertarPorCola("a");
		lis->insertarPorCola("i");
	lis->insertarPorCola("c");
	lis->insertarPorCola("d");
	lis1->insertarPorCola("a");
	lis1->insertarPorCola("b");
	lis1->insertarPorCola("z");
	lis1->insertarPorCola("x");
	lis1->insertarPorCola("h");
		lis1->insertarPorCola("i");
	op->uniones(lis,lis1,lis2);
	op->dibujar(lis,lis1,290,100);
	system("pause");
	
}