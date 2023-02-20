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
/*	//Operaciones<string> *op;
	ListaDoble<string> *obj= new ListaDoble<string>();
	obj->insertarPorCola("b");
	obj->insertarPorCola("i");
	obj->insertarPorCola("b");
	obj->insertarPorCola("c");
	obj->insertarPorCola("y");
	obj->insertarPorCola("e");
	obj->insertarPorCola("a");
	obj->eliminarPorValor("a");
	obj->mostrarPorCabeza();
//	ListaDoble<string> *obj1= new ListaDoble<string>();
//	obj1->insertarPorCola("e");
//	obj1->insertarPorCola("a");
//	obj1->insertarPorCola("y");
//	ListaDoble<string> *obj2= new ListaDoble<string>();
//	obj2->insertarPorCola("e");
//	obj2->insertarPorCola("a");
//	op->complemento(obj2,obj1,obj);*/
	
//DIFERNCIA
	Operaciones<string> *op;
	ListaDoble<string> *obj= new ListaDoble<string>();
	obj->insertarPorCola("b");
	obj->insertarPorCola("a");
	obj->insertarPorCola("b");
	obj->insertarPorCola("c");
	obj->insertarPorCola("y");
	obj->insertarPorCola("e");
	obj->insertarPorCola("a");
	obj->insertarPorCola("y");
	ListaDoble<string> *obj1= new ListaDoble<string>();
	obj1->insertarPorCola("e");
	obj1->insertarPorCola("a");
	ListaDoble<string> *obj2= new ListaDoble<string>();
	op->interseccion(obj,obj1,obj2);
	return 0;
}