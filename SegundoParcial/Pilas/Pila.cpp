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
<<<<<<< HEAD
	
=======

void Pila::mostrar(){
	Nodo *tmp=this->ultimo;
	while(tmp!=NULL){
		cout<<tmp->valor<<"\t";
		tmp=tmp->siguiente;
	}
}
>>>>>>> 27d8a2f61d214e97374a29b2f00c562f3e7910a4
