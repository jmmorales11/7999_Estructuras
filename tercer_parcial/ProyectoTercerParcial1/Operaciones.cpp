#include "Operaciones.h"

template <typename T> 
Operaciones<T>::Operaciones(){
	
}

template <typename T> 
void Operaciones<T>::uniones(ListaDoble<T> *lista1, ListaDoble<T> *lista2,ListaDoble<T> *lista3){
	NodoDoble<T> *aux=lista1->getPrimero();
	while(aux!=NULL){
		lista3->insertarPorCola(aux->getObjeto());
		aux=aux->getSiguiente();
	}
	aux=lista2->getPrimero();
	while(aux!=NULL){
		lista3->insertarPorCola(aux->getObjeto());
		aux=aux->getSiguiente();
	}

}

template <typename T> 
void Operaciones<T>::interseccion(ListaDoble<T> *lista1, ListaDoble<T> *lista2,ListaDoble<T> *lista3){
	
}

template <typename T> 
void Operaciones<T>::complemento(ListaDoble<T> *lista1, ListaDoble<T> *lista2,ListaDoble<T> *lista3){
	
}

template <typename T> 
void Operaciones<T>::diferencia(ListaDoble<T> *lista1, ListaDoble<T> *lista2,ListaDoble<T> *lista3){
	
}

template <typename T> 
void Operaciones<T>::diferenciaSimetrica(ListaDoble<T> *lista1, ListaDoble<T> *lista2,ListaDoble<T> *lista3){
	
}