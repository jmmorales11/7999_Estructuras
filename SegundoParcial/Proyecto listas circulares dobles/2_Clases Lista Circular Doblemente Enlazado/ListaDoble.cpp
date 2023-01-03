/*************************
UFA - ESPE
AUTORES: Matías Padrón,Sebastian Torres, Cristhoper Villamarin, Paola Moncayo, Camilo Orrico, Jeimy Morales, Ariel Guevera
FECHA DE CREACIÓN: 20/12/2022
FECHA DE MODIFICACIÓN: 20/12/2022
Grupo1-Métodos de búsqueda 
GITHUB: Grupo-1-Estructura-de-datos-7999
 *************************/
#include "ListaDoble.h"
#define Nombre_Archivo "empleados.txt"
#pragma once

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
void ListaDoble<T>::setPrimero(NodoDoble *first)
{
	primero = first;
}
 
/**
 * *|CURSOR_MARCADOR|*
 * 
 * @param now El nodo que se establecerá como el nodo real.
 */
template <typename T>
void ListaDoble<T>::setActual(NodoDoble *now)
{
	actual = now;
}
  
/**
 * *|CURSOR_MARCADOR|*
 * 
 * @return El primer nodo de la lista.
 */
template <typename T>
NodoDoble *ListaDoble<T>::getPrimero()
{
	return primero;
}

/**
 * *|CURSOR_MARCADOR|*
 * 
 * @return El nodo real.
 */
template <typename T>
NodoDoble *ListaDoble<T>::getActual()
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
void ListaDoble<T>::insertarPorCabeza(Persona *objP)
{

  	
	NodoDoble *nuevoNody=new NodoDoble(objP,NULL,NULL);
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
void ListaDoble<T>::insertarPorCola(Persona *objP)
{

  	
	 
	NodoDoble *nuevoNody=new NodoDoble(objP,NULL,NULL);
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
 
template <typename T>
void ListaDoble<T>::insertarEntre(Persona *objP){
		  
	NodoDoble *nuevoNody=new NodoDoble(objP,NULL,NULL);
	ValidacionDatos objValidar;
	char posC[10];
	int pos;
	if(getListaVacia())
	{
		setPrimero(nuevoNody);
		setActual(nuevoNody);
		this->numNodos++;
	}
	else
	{
	    pos=objValidar.casteoEnteros(posC,"\nIngrese N del Nodo debajo del cual desea ingresar el dato: ");
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
		NodoDoble *nodoAuxiliar = this->primero->getSiguiente();
		
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
		NodoDoble *nodoAuxiliar = this->primero;
		NodoDoble *nodoAnterior = NULL; 
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
		NodoDoble *aux=this->primero;
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
  
/**
 * Es una función que imprime la información de los empleados en la lista
 */
template <typename T>
void ListaDoble<T>::mostrarPorCabeza()
{
	int i=1;
 	NodoDoble *aux=this->primero;
  	while(aux){
  	cout<<"\n\tNodo[ "<<i<<" ]: "<<aux->getObjetoP()->getNombre()<<endl;
  	
  	aux=aux->getSiguiente();
  	i++;
  	}
	
}

/**
 * Busca un nodo en la lista.
 * 
 * @param cedula es el id del empleado
 */
 /*
template <typename T>
void ListaDoble<T>::buscarEnLista(int cedula){
	
	if(getListaVacia())
	{
		printf("\nNo se puede buscar debido a que la lista esta vacia");		
	}
	else
	{
	
		int i=1;
		bool encontrado = false;
		NodoDoble *aux=this->primero;		
		while(aux)		
		{
			
			if(aux->getObjetoP()->getCedula()==cedula)
			{
				printf("\nLa posicion en la que se encontro es-> %d",i);	
				encontrado=true;
				break;
			}
			aux=aux->getSiguiente();
		    i++;
			
		}
		if(encontrado==false){
			printf("\nNo se ha encontrado el valor ingresado\n");
		}
	}

}
*/


template <typename T>
T ListaDoble<T>::getPos(T objT){
	
		int i=1;
		NodoDoble *aux=this->primero;		
		while(aux)		
		{
			
			if(objT==i)
			{
			return aux->getObjetoP();
			break;
			}
			aux=aux->getSiguiente();
		    i++;
			
		}
return 0;
}

