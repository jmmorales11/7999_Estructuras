#include "ListaDoble.h"
#include "minimomultiplo.h"
ListaDoble::ListaDoble(){
	this->primero=NULL;
	this->ultimo=NULL;
}
void ListaDoble::insertar(int val){
	Nodo *nuevo = new Nodo(val);
	if(listaVacia()){
		this->primero=nuevo;
		this->primero->siguiente=NULL;
		this->primero->anterior=NULL;
		this->ultimo=this->primero;
		
	}else{
		this->ultimo->siguiente=nuevo;
		nuevo->siguiente=NULL;
		nuevo->anterior=this->ultimo;
		this->ultimo=nuevo;
	}
}
void ListaDoble::mostrarLista(){
	Nodo *aux = this->primero;
	int posicion=1;
	if(aux !=NULL){
		while(aux!=NULL){
			cout<<posicion<<"-> "<<aux->valor<<"\n";
			aux = aux->siguiente;
			posicion++;
		}
	}else{
		cout<<"La lista esta vacia\n";
	}
}
void ListaDoble::buscar(int elementoBuscar){
	bool afirmar=false;
	Nodo *actual;
	actual = this->primero;
	int cont=0, veces=0;
	while(actual !=NULL&&afirmar!= true){
		cont++;
		if(actual->valor==elementoBuscar){
			afirmar=true;
			veces++;
			cout<<"El elemento "<<elementoBuscar<<" Si se encuentra en la lista en la posicion: "<<cont<<endl;
		}
		actual=actual->siguiente;
		
	}
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
void ListaDoble::eliminar(int elementoBuscar){
bool afirmar=false;
	Nodo *actual;
	actual = this->primero;
	Nodo *antes;
	antes =  NULL;
	int cont=0;
	while(actual !=NULL&&afirmar!= true){
		cont++;
		if(actual->valor==elementoBuscar){
			cout<<"\nEl elemento "<<elementoBuscar<<" Si se encuentra en la lista en la posicion: "<<cont<<endl;
			if(actual==this->primero){
				this->primero = this->primero->siguiente;
				this->primero->anterior = NULL;
			}else if(actual==this->ultimo){
				
				this->ultimo->siguiente=NULL;
				this->ultimo = antes;
			}else{
				antes->siguiente = actual->siguiente;
				actual->siguiente->anterior = antes;
			}
			cout<<"\nElemento eliminado\n";
			afirmar = true;
		}
		antes=actual;
		actual=actual->siguiente;
		
	}
	if(!afirmar){
		cout<<"Elemento no encontrado\n";
	}
}

int ListaDoble::minimoMultiplo(ListaDoble lis){
	long int  mcm1=0;
	Nodo *num1;
	Nodo *num2;
	num1=this->primero;
	num2=this->primero->siguiente;
//	num2=num2->siguiente;
	while(num2 != NULL){
		
		
		num2->valor=mcm(num1->valor, num2->valor);
	//	cout<<"VALOR despues "<<num2->valor<<endl;
		mcm1=num2->valor;
		num1=num1->siguiente;
		num2=num2->siguiente;	
		
	}
	return mcm1;
}	

int ListaDoble::maximoDivisor(ListaDoble lis){
	long int  mcd=0;
	Nodo *num1;
	Nodo *num2;
	num1=this->primero;
	num2=this->primero->siguiente;
//	num2=num2->siguiente;
	while(num2 != NULL){
		num2->valor=MaxCDiv(num1->valor, num2->valor);
	//	cout<<"VALOR despues "<<num2->valor<<endl;
		mcd=num2->valor;
		num1=num1->siguiente;
		num2=num2->siguiente;	
		
	}
	return mcd;
}	

