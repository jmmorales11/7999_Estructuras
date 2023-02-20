#include <iostream>
#include "ListaDoble.cpp"
#include "Operaciones.cpp"

using namespace std;

int main(){
	//UNION
/*	Operaciones<string> *op;
	ListaDoble<string> *obj= new ListaDoble<string>();
	obj->insertarPorCola("b");
	obj->insertarPorCola("a");
	obj->insertarPorCola("b");
	obj->insertarPorCola("c");
	obj->insertarPorCola("d");
	obj->insertarPorCola("e");
	obj->insertarPorCola("a");
	ListaDoble<string> *obj1= new ListaDoble<string>();
	obj1->insertarPorCola("f");
	obj1->insertarPorCola("j");
	obj1->insertarPorCola("e");
	ListaDoble<string> *obj2= new ListaDoble<string>();
	op->uniones(obj,obj1,obj2);
	obj2->mostrarPorCabeza();
	*/

	//COMPLEMENTO
/*	Operaciones<string> *op;
	ListaDoble<string> *obj= new ListaDoble<string>();
	obj->insertarPorCola("b");
	obj->insertarPorCola("a");
	obj->insertarPorCola("b");
	obj->insertarPorCola("c");
	obj->insertarPorCola("y");
	obj->insertarPorCola("e");
	obj->insertarPorCola("a");
	ListaDoble<string> *obj1= new ListaDoble<string>();
	obj1->insertarPorCola("e");
	obj1->insertarPorCola("a");
//	obj1->insertarPorCola("y");
	ListaDoble<string> *obj2= new ListaDoble<string>();
	obj2->insertarPorCola("i");
	obj2->insertarPorCola("c");
	op->complemento(obj2,obj1,obj);*/

	Operaciones<string> *op;
	ListaDoble<string> *obj= new ListaDoble<string>();
	obj->insertarPorCola("b");
	obj->insertarPorCola("a");
	obj->insertarPorCola("b");
	obj->insertarPorCola("c");
	obj->insertarPorCola("y");
	obj->insertarPorCola("e");
	obj->insertarPorCola("a");
	ListaDoble<string> *obj1= new ListaDoble<string>();
	obj1->insertarPorCola("e");
	obj1->insertarPorCola("a");
	op->diferencia(obj,obj1);
	return 0;
}