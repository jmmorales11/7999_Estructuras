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
		Nodo *aux = this->ultimo->siguiente;
		delete this->ultimo;
		//aux=this->ultimo ;
	}
}
	
