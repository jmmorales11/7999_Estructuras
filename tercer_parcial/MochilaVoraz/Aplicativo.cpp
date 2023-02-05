#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include "validar.h"
#include "ListaDoble.cpp"
#include "Mochila.cpp"
int main(){
	Mochila *obj = new Mochila(0.0, 0.0);
	Mochila *obj1 = new Mochila(0.0, 0.0);
	Mochila *obj2 = new Mochila(0.0, 0.0);
	ListaDoble<Mochila> *lis=new ListaDoble<Mochila>();
	obj->ingresarDatos();
	obj1->ingresarDatos();
	obj2->ingresarDatos();

	lis->insertarPorCabeza(obj);
	lis->insertarPorCabeza(obj1);
	lis->insertarPorCabeza(obj2);
	lis->mostrarPorCabeza();
	lis->ordenamientoBurbuja();
	lis->mostrarPorCabeza();
	return 0;
}