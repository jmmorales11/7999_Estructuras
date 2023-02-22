/*************************
UFA - ESPE
AUTORES: Camilo Orrico, Jeimy Morales
FECHA DE CREACIÓN: 20/12/2022
FECHA DE MODIFICACIÓN: 2/01/2023
Grupo1-Métodos de búsqueda 
GITHUB: Grupo-1-Estructura-de-datos-7999
 *************************/
#include "ListaDoble.h"
#include "validar.h"
#pragma once
using namespace std;

template <typename T>
ListaDoble<T>::ListaDoble()
{
	this->primero=NULL;
	this->actual=NULL;
	this->numNodos=0;
}
 
/**
 * Devuelve verdadero si la lista está vacía, falso en caso contrario.
 * 
 * @return un valor booleano.
 */
template <typename T>
bool ListaDoble<T>::getListaVacia()
{
	return (this->primero==NULL);
}
 
/**
 * *|CURSOR_MARCADOR|*
 * 
 * @param first El primer nodo de la lista.
 */
template <typename T>
void ListaDoble<T>::setPrimero(NodoDoble<T> *first)
{
	primero = first;
}
 
/**
 * *|CURSOR_MARCADOR|*
 * 
 * @param now El nodo que se establecerá como el nodo real.
 */
template <typename T>
void ListaDoble<T>::setActual(NodoDoble<T> *now)
{
	actual = now;
}
  
/**
 * *|CURSOR_MARCADOR|*
 * 
 * @return El primer nodo de la lista.
 */
template <typename T>
NodoDoble<T> *ListaDoble<T>::getPrimero()
{
	return primero;
}

/**
 * *|CURSOR_MARCADOR|*
 * 
 * @return El nodo real.
 */
template <typename T>
NodoDoble<T> *ListaDoble<T>::getActual()
{
	return actual;
}

/**
 * Devuelve el número de nodos de la lista.
 * 
 * @return El número de nodos en la lista.
 */
template <typename T>
int ListaDoble<T>::getNumNodos() {
	return this->numNodos;
}
//metodos de orden de la ListaDoble
  
/**
 * Inserta un nuevo nodo al principio de la lista.
 * 
 * @param empleado es un objeto de la clase Empleado
 */
template <typename T>
void ListaDoble<T>::insertarPorCabeza(T objP)
{

  	
	NodoDoble<T> *nuevoNody=new NodoDoble<T>(objP,NULL,NULL);

	if(getListaVacia()){	
	nuevoNody->setSiguiente(this->primero);
	setPrimero(nuevoNody);
	setActual(nuevoNody);
	this->numNodos++;
	}else{
	
	nuevoNody->setSiguiente(this->primero);
	this->primero->setAnterior(nuevoNody);
	setPrimero(nuevoNody);
	this->numNodos++;
	}

}
  
/**
 * Inserta un empleado al final de la lista.
 * 
 * @param empleado es un objeto de la clase Empleado
 */
template <typename T>
void ListaDoble<T>::insertarPorCola(T objP)
{	
	NodoDoble<T> *nuevoNody=new NodoDoble<T>(objP,NULL,NULL);
	if(getListaVacia())
	{
		setPrimero(nuevoNody);
		setActual(nuevoNody);
		this->numNodos++;
	}
	else
	{	
		this->actual->setSiguiente(nuevoNody);	
		nuevoNody->setAnterior(getActual());
		setActual(nuevoNody);
		this->numNodos++;
	}

}

 
/**
 * Inserta un nodo entre dos nodos.
 * 
 * @param empleado es un objeto de la clase Empleado
 */
 /*
template <typename T>
void ListaDoble<T>::insertarEntre(string objP){
		  
	NodoDoble *nuevoNody=new NodoDoble(objP,NULL,NULL);
	char posC[10], datoEntero[10];
	int pos;
	if(getListaVacia())
	{
		setPrimero(nuevoNody);
		setActual(nuevoNody);
		this->numNodos++;
	}
	else
	{
		str_cpy(datoEntero,ingresarDatosEnteros("\nIngrese N del Nodo debajo del cual desea ingresar el dato: "));
  		pos = funcion_atoi(datoEntero,strlen(datoEntero));
		int i=1;
		NodoDoble *aux=this->primero;
		while(aux!=NULL)
		{
			if(pos==0){
			cout<<"\nLa posicion no corresponde al numero nodos "<<endl;
			
			break;
			
			}else if(pos==numNodos){
				insertarPorCola(objP);
				
				break;
			}
			else if (pos>numNodos)
			{
			cout<<"\nLa posicion excede el numero de nodos "<<endl;
			break;
			}			
			else if(pos==i)
			{
				this->numNodos++;
				nuevoNody->setSiguiente(aux->getSiguiente()); 
				aux->getSiguiente()->setAnterior(nuevoNody);
				nuevoNody->setAnterior(aux); 
				aux->setSiguiente(nuevoNody);
				break;
			}
			aux=aux->getSiguiente();
			
			i++;	
		}
	}

}
  */
/**
 * Elimina el primer nodo de la lista.
 */
template <typename T>
void ListaDoble<T>::eliminarPorCabeza(){
		if(getListaVacia())
	{
		cout<<"\nNo se puede eliminar elementos de una lista sin objetos."<<endl;
	}
	else
	{
		NodoDoble<T> *nodoAuxiliar = this->primero->getSiguiente();
		
		primero=NULL;
		this->numNodos--;
		setPrimero(nodoAuxiliar);
	}
	
}

/**
 * Elimina el último nodo de la lista.
 */
template <typename T>
void ListaDoble<T>::eliminarPorCola(){
	
		if(getListaVacia())
	{
		cout<<"\nNo se puede eliminar elementos de una lista sin objetos."<<endl;
	}
	else if(numNodos==1){
		eliminarPorCabeza();
		}else{
		NodoDoble<T> *nodoAuxiliar = this->primero;
		NodoDoble<T> *nodoAnterior = NULL; 
		while(nodoAuxiliar->getSiguiente()!=NULL)
        {
				nodoAnterior=nodoAuxiliar;
                nodoAuxiliar = nodoAuxiliar->getSiguiente();
        }
		actual=NULL;
		this->numNodos--;
		nodoAnterior->setSiguiente(NULL);
		setActual(nodoAnterior);
	}
	
}
 
/**
 * Elimina un nodo de la lista, pero no funciona
 * 
 * @param pos posición del nodo a eliminar
 */
template <typename T>
void ListaDoble<T>::eliminarEntre(int pos){

	if(getListaVacia())
	{
		printf("\nNo se puede eliminar debido a que la lista esta vacia");		
	}
	else
	{
		int i=1;
		NodoDoble<T> *aux=this->primero;
		while(aux)
		{	
			if(pos==1){
		     eliminarPorCabeza();
			break;
			}else if(pos==numNodos){
				this->eliminarPorCola();
				break;
			}else if(pos==0){
			cout<<"\nLa posicion no corresponde al numero de nodos "<<endl;
			break;
			}
			else if (pos>numNodos)
			{
			cout<<"\nLa posicion excede el numero de nodos "<<endl;
			break;
			}
			else if(pos==i)
			{
				aux->getAnterior()->setSiguiente(aux->getSiguiente());
				aux->getSiguiente()->setAnterior(aux->getAnterior());
				aux=NULL;
				numNodos--;
				break;
			}
			aux=aux->getSiguiente();
			i++;	
		}
	}
}

template <typename T>
void ListaDoble<T>::repetidos(){
	NodoDoble<T> *aux=this->primero;
	NodoDoble<T> *aux1;
	int cont=0;
	int con1=1;
	while(aux!=NULL){
		cont=con1;
		aux1=aux->getSiguiente();
		
		while(aux1!=NULL){
			cont+=1;
			if(aux->getObjeto()==aux1->getObjeto()){
				this->eliminarEntre(cont);
				cont-=1;
			}
			aux1=aux1->getSiguiente();
		}
		con1+=1;
		aux=aux->getSiguiente();
	}
}
 
/**
 * Es una función que imprime la información de los empleados en la lista
 */
template <typename T>
void ListaDoble<T>::mostrarPorCabeza()
{
	int i=0;
 	NodoDoble<T> *aux=this->primero;
  	while(aux){
  		cout<<" ["<<aux->getObjeto()<<"] " ;
  		aux=aux->getSiguiente();
  		i++;
  	}
	cout<<endl;
}

template <typename T>
T ListaDoble<T>::getPos(T objT){
	
		int i=1;
		NodoDoble<T> *aux=this->primero;		
		while(aux)		
		{
			
			if(objT==i)
			{
			return aux->getObjeto();
			break;
			}
			aux=aux->getSiguiente();
		    i++;
			
		}
return 0;
}
template <typename T>
int ListaDoble<T>::buscar(T hexa){
	NodoDoble<T> *aux;
	aux = this->primero;
	int i=0;
	while(aux != NULL && aux->getObjeto() !=hexa){
		i++;
		aux=aux->getSiguiente();
	}
	return i;
}
template <typename T>
T ListaDoble<T>::buscarPosicion(int posicion){
	int contador=1;
	NodoDoble<T> *actual;
	actual = this->primero;
	while(actual != NULL && contador<posicion){
		actual = actual->getSiguiente();
		contador++;
	}
	return actual->getObjeto();
}

template <typename T>
void ListaDoble<T>::eliminarPorValor(T obj){
	bool afirmar=false;
	NodoDoble<T> *aux;
	aux = this->primero;
	NodoDoble<T> *antes;
	antes =  NULL;
	int cont=0;
	if(getListaVacia())
	{
		cout<<"\nNo se puede eliminar elementos de una lista sin objetos."<<endl;
	}
	else
	{
		while(aux !=NULL&&afirmar!= true){
			cont++;
			if(aux->getObjeto()==obj){
				//cout<<"\nEl elemento "<<obj<<" Si se encuentra en la lista en la posicion: "<<cont<<endl;
				if(aux==this->primero){
					this->primero = this->primero->getSiguiente();
					this->primero->setAnterior(NULL) ;
				}else if(aux==this->actual){
					this->actual->setSiguiente(NULL);
					this->actual = antes;
				}else{
					antes->setSiguiente(aux->getSiguiente());
					aux->getSiguiente()->setAnterior(antes);
				}if(aux->getSiguiente()==NULL){
					this->actual->setSiguiente(NULL);
				}
				afirmar = true;
			}
			antes=aux;
			aux=aux->getSiguiente();
		}
	
}
}

/*
template <typename T>
void ListaDoble<T>::ordenamientoBurbuja(){
	NodoDoble *aux=this->primero;
	NodoDoble *nNodo=this->primero;
	string *p;
	while(nNodo!=NULL){
		aux=nNodo->getSiguiente();
		while(aux != NULL){
			if(nNodo->getObjeto()->getIndice()<aux->getObjeto()->getIndice()){
				p=aux->getObjeto();
				aux->setObjP(nNodo->getObjeto());
				nNodo->setObjP(p);
			}
			aux=aux->getSiguiente();
		}
		nNodo=nNodo->getSiguiente();
	}
}*/
