#include "ListaCircularDoble.h"
#include <cstring>
using namespace std;

template <typename T> 
ListaCircularDoble<T>::ListaCircularDoble(){
	this->primero=NULL;
	this->ultimo=NULL;
}


template <typename T> 
void ListaCircularDoble<T>::insertarPoCola(T *obj){
	NodoCircularDoble *nuevo = new NodoCircularDoble(obj,NULL, NULL);
	if(listaVacia()){
		this->primero=nuevo;
		this->primero->sigue=primero;
		this->primero->anterior=primero;
		this->ultimo=this->primero;
		
	}else{
		this->ultimo->sigue=nuevo;
		nuevo->sigue=this->primero;
		nuevo->anterior=this->ultimo;
		this->ultimo=nuevo;
		this->primero->anterior=ultimo;
	}
}

template <typename T> 
void ListaCircularDoble<T>::mostrarLista(){
	NodoCircularDoble *aux = this->primero;
	int posicion=1;
	if(this->primero !=NULL){
		do{ 
			cout<<"\n \tNodo ["<<posicion<<" ]: "<<aux->getObjetoP()->getCedula()<<"  "<<aux->getObjetoP()->getApellido()<<endl;
			aux = aux->sigue;
			posicion++;
		}while(aux!=this->primero);
	}else{
		cout<<"La lista esta vacia\n";
	}
}


template <typename T> 
void ListaCircularDoble<T>::buscar(){
	string elementoBuscar;
	cout<<"Ingrese el elemento a abuscar"<<endl;
	cin>>elementoBuscar;
	NodoCircularDoble *buscar = this->primero;
	bool band=false;
	int cont=1;
	if(!listaVacia()){
		do{
			if(buscar->getObjetoP()->getCedula()==elementoBuscar){
				band=true;
				break;
			}
			buscar=buscar->sigue;
			cont++;
		}while(buscar!=this->primero);
	}else{
		cout<<"La lista esta vacia\n";
	}
	if (band==true){
		cout<<"ENCONTRADO\n[ "<<cont<<" ]"<<buscar->getObjetoP()->getCedula()<<"  "<<buscar->getObjetoP()->getApellido()<<endl;
	}else{
		cout<<"No se encontro"<<endl;
	}
}

template <typename T> 
void ListaCircularDoble<T>::eliminar(){
	string elementoBuscar;
	cout<<"Ingrese el elemento a eliminar"<<endl;
	cin>>elementoBuscar;
	NodoCircularDoble *buscar = this->primero;
	NodoCircularDoble *eliminarN;
	eliminarN=NULL;
	bool band=false;
	int cont=1;
	if(!listaVacia()){
		do{
			if(buscar->getObjetoP()->getCedula()==elementoBuscar){
				band=true;
				if(buscar==primero){
					primero=primero->sigue;
					primero->anterior=ultimo;
					ultimo->sigue=primero;
				}else if( buscar==ultimo){
					ultimo = ultimo->anterior;
					primero->anterior=ultimo;
					ultimo->sigue=primero;
				}else{
					eliminarN->sigue=buscar->sigue;
					buscar->sigue->anterior=eliminarN;;
				}
			}
			eliminarN=buscar;
			buscar=buscar->sigue;
			cont++;
		}while(buscar!=this->primero && band==false);
	}else{
		cout<<"La lista esta vacia\n";
	}
	if (band==true){
		cout<<"Elemento eliminado"<<endl;
		free(eliminarN);
	}else{
		cout<<"No se encontro"<<endl;
	}
}

template <typename T> 
void ListaCircularDoble<T>::ordenarCedula(){
		NodoCircularDoble *nNodo = this->primero;
		NodoCircularDoble *aux= this->primero;
		Persona *p;
		do{
			aux=nNodo->sigue;
			do{
				if(strcmp(nNodo->getObjetoP()->getCedula().c_str() ,aux->getObjetoP()->getCedula().c_str()) < 0){
					p=aux->getObjetoP();
					aux->setObjP(nNodo->getObjetoP());
					nNodo->setObjP(p);
				}
				aux=aux->sigue;
			}while (aux !=this->primero);
			nNodo=nNodo->sigue;
		}while(nNodo!=this->primero);
}
template <typename T>
void ListaCircularDoble<T>::ordenarApellido(){
		NodoCircularDoble *nNodo = this->primero;
		NodoCircularDoble *aux= this->primero;
		NodoCircularDoble *tem=NULL;
		Persona *p;
		do{
			aux=nNodo->sigue;
			do{
				if(strcmp(nNodo->getObjetoP()->getApellido().c_str() ,aux->getObjetoP()->getApellido().c_str()) > 0){
					p=aux->getObjetoP();
					aux->setObjP(nNodo->getObjetoP());
					nNodo->setObjP(p);
				}
				aux=aux->sigue;
			}while (aux !=this->primero);
			nNodo=nNodo->sigue;
		}while(nNodo!=this->primero);
}
/*
template <typename T> 
void ListaCircularDoble<T>::ordenarCedula(){
	bool cambio;
	NodoCircularDoble *actual;
	NodoCircularDoble *siguiente = NULL;
	if (actual == NULL) 
        return; 
	do{	
		cambio = false;
		actual = this->primero;
		while(actual->sigue != siguiente){
			string cedulaActual = actual->getObjetoP()->getCedula();
			string cedulaSiguiente = siguiente->getObjetoP()->getCedula();
			if(strcmp(cedulaActual.c_str() , cedulaSiguiente.c_str()) > 0){
				this->cambioCedula(actual, actual->sigue);
				cambio = true;
			}
			actual = actual->sigue;
		}	
		siguiente = actual;
	}while(cambio!=false);
	

}
template <typename T>
void ListaCircularDoble<T>::cambioCedula(NodoCircularDoble *actual, NodoCircularDoble *siguiente){	
	Persona *temp = actual->getObjetoP();
	actual->setObjP(siguiente->getObjetoP());
	siguiente->setObjP(temp);

}
*/

