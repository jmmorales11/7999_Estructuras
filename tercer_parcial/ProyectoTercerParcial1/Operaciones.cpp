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
	lista3->repetidos();
}

template <typename T> 
void Operaciones<T>::interseccion(ListaDoble<T> *lista1, ListaDoble<T> *lista2,ListaDoble<T> *lista3){
	
}

template <typename T> 
void Operaciones<T>::complemento(ListaDoble<T> *lista1, ListaDoble<T> *lista2,ListaDoble<T> *lista3){
	NodoDoble<T> *aux=lista1->getPrimero();
	NodoDoble<T> *aux1=lista3->getPrimero();
	if (comparar(lista3,lista1)==true || comparar(lista3,lista2)==true){
		cout<<"El conjunto A o B no estan dentro del conjutno universal"<<endl;
	}else{
		cout<<"Conjunto "<<endl;
		while(aux1!=NULL){
			aux=lista1->getPrimero();
			while (aux!=NULL){
				if(aux->getObjeto()==aux1->getObjeto()){	
					lista3->eliminarPorValor(aux1->getObjeto());
				}
				aux=aux->getSiguiente();
			}
			aux1=aux1->getSiguiente();
		}	
	}
	lista3->mostrarPorCabeza();
	
}

template <typename T> 
bool Operaciones<T>::comparar(ListaDoble<T> *lista1, ListaDoble<T> *lista2){
	NodoDoble<T> *aux;
	NodoDoble<T> *aux1=lista2->getPrimero();
	bool val=false;
	int cont;
	while(aux1!=NULL){
		cont=0;
		aux=lista1->getPrimero();
		while (aux!=NULL){
			if(aux->getObjeto()==aux1->getObjeto()){
				cont+=1;	
				break;
			}
			aux=aux->getSiguiente();
		}
		if(cont==0){
			val=true;
			break;
		}
		aux1=aux1->getSiguiente();
	}	
	return val;
}
template <typename T> 
void Operaciones<T>::diferencia(ListaDoble<T> *lista1, ListaDoble<T> *lista2){
	lista1->repetidos();
	lista2->repetidos();
	NodoDoble<T> *aux=lista2->getPrimero();
	NodoDoble<T> *aux1;
	lista1->mostrarPorCabeza();
	while(aux!=NULL){

		aux1=lista1->getPrimero();
		while(aux1!=NULL){
			cout<<aux->getObjeto()<<aux1->getObjeto()<<endl;
			if(aux->getObjeto()==aux1->getObjeto()){
				cout<<"ELIMINAR"<<aux->getObjeto()<<aux1->getObjeto()<<endl;
				lista1->eliminarPorValor(aux->getObjeto());
			}
			aux1 = aux1->getSiguiente();
		}
		aux = aux->getSiguiente();
	}
	lista1->mostrarPorCabeza();
}

template <typename T> 
void Operaciones<T>::diferenciaSimetrica(ListaDoble<T> *lista1, ListaDoble<T> *lista2,ListaDoble<T> *lista3){
	
}