#include <iostream>
#include "ListaDoble.cpp"

using namespace std;

int main(){
	ListaDoble<int> *obj= new ListaDoble<int>();
	obj->insertarPorCabeza(1);
	obj->mostrarPorCabeza();
	
	ListaDoble<string> *obj1= new ListaDoble<string>();
	obj1->insertarPorCabeza("HOLA");
	obj1->mostrarPorCabeza();
	return 0;
}