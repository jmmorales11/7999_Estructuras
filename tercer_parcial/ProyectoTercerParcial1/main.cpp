#include <iostream>
#include "ListaDoble.cpp"
#include "Operaciones.cpp"

using namespace std;

int main(){
	Operaciones<int> *op;
	ListaDoble<int> *obj= new ListaDoble<int>();
	obj->insertarPorCabeza(1);
	ListaDoble<int> *obj1= new ListaDoble<int>();
	obj1->insertarPorCabeza(2);
	obj1->insertarPorCabeza(3);
	obj1->insertarPorCabeza(5);
	ListaDoble<int> *obj2= new ListaDoble<int>();
	op->uniones(obj,obj1,obj2);
	obj2->mostrarPorCabeza();
	return 0;
}