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
		aux=this->ultimo ;
	}
}
/*template <typename T>
void Pila<T>::pop()
{
	Nodo *aux = this->ultimo;
	this->ultimo = aux->siguiente;
	delete aux;
}*/
/*
void Lista::insertarCola(int num){//Camilo
	Nodo *nuevo=new Nodo(num);
	
	nuevo->siguiente=NULL;
	if(listaVacia()){
		this->primero=nuevo;
	}
	else{
		Nodo *aux= this->primero;
		while(aux->siguiente !=NULL){
			aux=aux->siguiente;
		}
		aux->siguiente=nuevo;
	}	
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

void Lista::insertarCabeza(int val){
	Nodo *nuevo=new Nodo(val);
	if (listaVacia()){
		nuevo=this->siguiente
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
void Lista::eliminar(int elemento){
	//if (!=NULL){
		Nodo *aux_borrar;
		Nodo *anterior =NULL;
		aux_borrar=this->primero;
		//recorrer la lista
		while (aux_borrar !=NULL && aux_borrar->valor !=elemento){
			anterior=aux_borrar;
			aux_borrar=aux_borrar->siguiente;
		}
		//No existe el elemento
		if(aux_borrar==NULL){
			cout<<"\nEl elemento no ha sido encontrado"<<endl;
		}else if (anterior==NULL){
			primero=primero->siguiente;
			delete aux_borrar;
		}else{
			anterior->siguiente=aux_borrar->siguiente;
			delete aux_borrar;
		}
	//}
}

void Lista::buscar(int elementoBuscar){
	bool afirmar=false;
	Nodo *actual;
	actual = this->primero;
	int cont=0, veces=0;
	while(actual !=NULL){
		cont++;
		if(actual->valor==elementoBuscar){
			afirmar=true;
			veces++;
			cout<<"El elemento "<<elementoBuscar<<" SI se encuentra en la lista en la posicion: "<<cont<<endl;
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

void Lista::imprimirCola(Lista lis,int tam){//Camilo
	Nodo *actual;
	actual = this->primero;
	cout<<"\nNULL-->";
	int cont=0;
	Lista list;
	while(cont<tam){
		lis.buscarElemento(tam);
		tam= tam-1;;
		//cout<<"TAM "<<tam<<" AQUI"<<endl;
	}
	cout<<actual->valor<<" ";
}



void Lista::buscarElemento(int pos){
	Nodo *actual;
	bool afirmar=false;
	actual = this->primero;
	int cont=0;
	while(actual !=NULL  ){
		
		if(cont==pos){
			afirmar=true;
			cout<<actual->valor<<" --> ";
		}
		cont++;
		actual=actual->siguiente;	
	}
	
}*/
