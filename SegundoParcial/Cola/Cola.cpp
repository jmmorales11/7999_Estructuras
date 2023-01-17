/***********************************************************************
 * UFA-ESPE
 * Autores:  Jeimy Marley Morales Sosa & Camilo Andres Orrico Emme
 * Modificacion: Martes, 18 de noviembre 
 * Purpose: Listas, realizar el buscar, eliminar, inserta cola, mostrar cola
 *Nivel: Tercero           NRC:7999
 ***********************************************************************/
#include "Cola.h"
using namespace std;

Cola::Cola(){
}

void Cola::push(int dato){
	Nodo *nuevo=new Nodo(dato);
	if (listaVacia()){
		this->primero=nuevo;
	}
	else{
		this->ultimo->siguiente=nuevo;
	}
	this->ultimo=nuevo;
	cout<<"\n"<<this->ultimo->valor<<endl;
	cout <<"Elemnto insertado"<<dato<<endl;
}
void Cola::pop()
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


void Cola::mostrar(){
	Nodo *tmp=this->primero;
	while(tmp!=NULL){
		cout<<tmp->valor<<"\t";
		tmp=tmp->siguiente;
	}
}

