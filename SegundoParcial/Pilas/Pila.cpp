/***********************************************************************
 * UFA-ESPE
 * Autores:  Jeimy Marley Morales Sosa & Camilo Andres Orrico Emme
 * Modificacion: Martes, 18 de noviembre 
 * Purpose: Listas, realizar el buscar, eliminar, inserta cola, mostrar cola
 *Nivel: Tercero           NRC:7999
 ***********************************************************************/
#include "Pila.h"
using namespace std;

Pila::Pila(){
}

void Pila::push(int dato){
	Nodo *nuevo= new Nodo(dato);
	nuevo->siguiente=this->ultimo;
	this->ultimo=nuevo;
	cout<<"\n"<<this->ultimo->valor<<endl;
	cout <<"Elemnto insertado"<<dato<<endl;
}
void Pila::pop()
{	
	
	if(this->ultimo==NULL){
		cout<<"No hay objetos \n";
	}
	else{
		Nodo *aux = this->ultimo;
		delete aux;
		aux=this->ultimo->siguiente;
	}
}


void Pila::mostrar(){
	Nodo *tmp=this->ultimo;
	while(tmp!=NULL){
		cout<<tmp->valor<<"\t";
		tmp=tmp->siguiente;
	}
}
<<<<<<< HEAD
=======

>>>>>>> 52418595ebd169506f053bf31acac561cd876abf
