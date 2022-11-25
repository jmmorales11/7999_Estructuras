
#include "ListaCircularDoble.h"
using namespace std;
ListaCircularDoble::ListaCircularDoble(){
	this->primero=NULL;
	this->ultimo=NULL;
}
void ListaCircularDoble::insertar(int val){
	Nodo *nuevo = new Nodo(val);
	if(listaVacia()){
		this->primero=nuevo;
		this->primero->siguiente=primero;
		this->primero->anterior=primero;
		this->ultimo=this->primero;
		
	}else{
		this->ultimo->siguiente=nuevo;
		nuevo->siguiente=this->primero;
		nuevo->anterior=this->ultimo;
		this->ultimo=nuevo;
		this->primero->anterior=ultimo;
	}
}
void ListaCircularDoble::mostrarLista(){
	Nodo *aux = this->primero;
	int posicion=1;
	if(this->primero !=NULL){
		do{
			cout<<posicion<<"-> "<<aux->valor<<"\n";
			aux = aux->siguiente;
			posicion++;
		}while(aux!=this->primero);
	}else{
		cout<<"La lista esta vacia\n";
	}
}
void ListaCircularDoble::buscar(int elementoBuscar){
	bool afirmar=false;
	Nodo *actual;
	actual = this->primero;
	int cont=0, veces=0;
	do{
		cont++;
		if(actual->valor==elementoBuscar){
			afirmar=true;
			veces++;
			cout<<"El elemento "<<elementoBuscar<<" Si se encuentra en la lista en la posicion: "<<cont<<endl;
		}
		actual=actual->siguiente;
		
	}while(actual !=this->primero&&afirmar!= true);
	if(afirmar==true){
		if(veces==1){
			cout<<"Se encontro "<<veces<<" vez"<<endl;	
		}else{
			cout<<"Se encontro "<<veces<<" veces"<<endl;	
		}	
	}
	else {
		cout<<"El elemento "<<elementoBuscar<<" No se encuentra en la lista"<<endl;
	}
	
	
}
void ListaCircularDoble::eliminar(int elementoBuscar){
bool afirmar=false;
	Nodo *actual;
	actual = this->primero;
	Nodo *antes;
	antes =  NULL;
	int cont=0;
	do{
		cont++;
		if(actual->valor==elementoBuscar){
			cout<<"El elemento "<<elementoBuscar<<" Si se encuentra en la lista en la posicion: "<<cont<<endl;
			if(actual==this->primero){
				this->primero = this->primero->siguiente;
				this->primero->anterior = this->ultimo;
				this->ultimo->siguiente = this->primero;
			}else if(actual==this->ultimo){
				this->ultimo = antes;
				this->ultimo->siguiente=this->primero;
				this->primero->anterior=this->ultimo;
			}else{
				antes->siguiente = actual->siguiente;
				actual->siguiente->anterior = antes;
			}
			cout<<"\nElemento eliminado\n";
			afirmar = true;
		}
		antes=actual;
		actual=actual->siguiente;
		
	}while(actual !=this->primero&&afirmar!= true);
	if(!afirmar){
		cout<<"Elemento no encontrado\n";
	}
}