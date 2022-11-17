#include "Lista.h"
using namespace std;
Lista::Lista(){
	this->primero=NULL;
	this->actual=NULL;
}

void Lista::insertar(int val){
	Nodo *nuevo=new Nodo(val);
	if (listaVacia()){
		this->primero=nuevo;
	}
	else{
		this->actual->siguiente=nuevo;
	}
	this->actual=nuevo;
}

void Lista::mostrarLista(){
	Nodo *tmp=this->primero;
	while(tmp){
		cout<<tmp->valor<<"-->";
		tmp=tmp->siguiente;
	}
	cout<<"NULL";
}
void Lista::eliminar(int posicion){
	
}

void Lista::buscar(){
	
}

void Lista::imprimirCola(){//Camilo
	
}

void Lista::insertarCola(){//Camilo
	
}
