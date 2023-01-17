#include "ListaCircularDoble.h"
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
void ListaCircularDoble<T>::insertarPoCabeza(T *obj){
	NodoCircularDoble *nuevo = new NodoCircularDoble(obj,NULL, NULL);
	if(listaVacia()){
		this->primero=nuevo;
		this->primero->sigue=primero;
		this->primero->anterior=primero;
		this->ultimo=this->primero;
		
	}else{
		this->primero->sigue=nuevo;
		nuevo->sigue=this->ultimo;
		nuevo->anterior=this->primero;
		this->primero=nuevo;
		this->ultimo->anterior=primero;
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
		NodoCircularDoble *tem=NULL;
		bool cambio=false;
		Persona *p;
		/*while(cambio = false){
			cambio = false;
			for ( nNodo; nNodo != NULL; nNodo = nNodo->sigue)
			{
				if (strcmp(nNodo->getObjetoP()->getCedula().c_str() ,aux->getObjetoP()->getCedula().c_str()) < 0)
				{
					NodoCircularDoble *temp = nNodo;
					nNodo->setObjP(nNodo->sigue->getObjetoP())  ;
					nNodo->sigue->setObjP(temp->getObjetoP()) ;
					cambio = true;
				}
			}
		}*/
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
	NodoCircularDoble *actual = this->primero;
	NodoCircularDoble *siguiente = this->primero->sigue;

	string cedulaActual = actual->getObjetoP()->getCedula();
	string cedulaSiguiente = siguiente->getObjetoP()->getCedula();
	
	
	if(strcmp(cedulaActual.c_str() , cedulaSiguiente.c_str()) > 0) {
		NodoCircularDoble *temp = actual;
		NodoCircularDoble *tempSig = siguiente;
		cout<<actual->getObjetoP()->getCedula()<<endl;
		cout<<this->primero->getObjetoP()->getCedula()<<endl;
		cout<<siguiente->getObjetoP()->getCedula()<<endl;
		cout<<this->ultimo->getObjetoP()->getCedula()<<endl;actual=siguiente;
		actual->sigue = temp;
		actual->anterior = temp->anterior;
		siguiente = temp;
		siguiente->sigue = tempSig->sigue;
		siguiente->anterior = actual; 
		this->ultimo = siguiente;
		cout<<actual->getObjetoP()->getCedula()<<endl;
		cout<<this->primero->getObjetoP()->getCedula()<<endl;
		cout<<siguiente->getObjetoP()->getCedula()<<endl;
		cout<<this->ultimo->getObjetoP()->getCedula()<<endl;
	}
}*/
