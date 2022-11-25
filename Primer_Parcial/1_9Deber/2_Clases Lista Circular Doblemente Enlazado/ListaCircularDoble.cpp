
#include "ListaCircularDoble.h"
#include "minimomultiplo.h"
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
			cout<</*posicion<<"-> "<<*/aux->valor<<" -->";
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

int ListaCircularDoble::maximoDivisor(ListaCircularDoble lis){
	long int  mcd=0;
	Nodo *num1;
	Nodo *num2;
	num1=this->primero;
	num2=this->primero->siguiente;
//	num2=num2->siguiente;
	do{
		num2->valor=MaxCDiv(num1->valor, num2->valor);
	//	cout<<"VALOR despues "<<num2->valor<<endl;
		mcd=num2->valor;
		num1=num1->siguiente;
		num2=num2->siguiente;	
		
	}while (num2 !=this->primero);
	return mcd;
}
int ListaCircularDoble::minimoMultiplo(ListaCircularDoble lis){
	long int  mcm1=0;
	Nodo *num1;
	Nodo *num2;
	num1=this->primero;
	num2=this->primero->siguiente;
//	num2=num2->siguiente;
	do{
		
		
		num2->valor=mcm(num1->valor, num2->valor);
	//	cout<<"VALOR despues "<<num2->valor<<endl;
		mcm1=num2->valor;
		num1=num1->siguiente;
		num2=num2->siguiente;	
		
	}while (num2 !=this->primero);
	return mcm1;
}
