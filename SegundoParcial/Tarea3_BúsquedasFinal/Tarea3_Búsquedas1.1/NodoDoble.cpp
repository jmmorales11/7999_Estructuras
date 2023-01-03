/*************************
UFA - ESPE
AUTORES: Matías Padrón,Sebastian Torres, Cristhoper Villamarin, Paola Moncayo, Camilo Orrico, Jeimy Morales, Ariel Guevera
FECHA DE CREACIÓN: 20/12/2022
FECHA DE MODIFICACIÓN: 20/12/2022
Grupo1-Métodos de búsqueda 
GITHUB: Grupo-1-Estructura-de-datos-7999
 *************************/
#include"NodoDoble.h"
#pragma once

/**
 * NodoDoble::NodoDoble(Empleado *objE, NodoDoble *sig=NULL,NodoDoble *ant=NULL)
 * 
 * @param objE es un puntero a un objeto de tipo Empleado
 * @param sig es el siguiente nodo
 * @param ant puntero al nodo anterior
 */
template <typename T>
NodoDoble<T>::NodoDoble(T objT, NodoDoble *sig, NodoDoble *ant)
{
	this->objT=objT;	
	this->siguiente=sig;
	this->anterior=ant;
}

template <typename T>
NodoDoble<T> :: NodoDoble(T objT){
    this->objT = objT;
    siguiente = NULL;
}
/**
 * NodoDoble::NodoDoble()
 */
 template <typename T>
NodoDoble<T>::NodoDoble()
{

}

/**
 * Devuelve el objeto de la clase Empleado.
 * 
 * @return El objeto de la clase Empleado.
 */
template <typename T>
T NodoDoble<T>::getObjetoT(){
	return objT;
}

/**
 * Void NodoDoble::setObjEmpleado(Empleado *newObjEmpleado)
 * 
 * @param newObjEmpleado es un puntero a un objeto de tipo Empleado
 */
template <typename T>
void NodoDoble<T>::setObjT(T newObjT)
{
	objT = newObjT;
}

/**
 * NodoDoble *NodoDoble::getSiguiente()
 * 
 * @return El siguiente nodo.
 */
 template <typename T>
NodoDoble<T> *NodoDoble<T>::getSiguiente()
{
   return siguiente;
}

/**
 * *|CURSOR_MARCADOR|*
 * 
 * @param newSiguiente El nuevo nodo que será el siguiente nodo en la lista.
 */
 template <typename T>
void NodoDoble<T>::setSiguiente(NodoDoble *newSiguiente)
{
   siguiente = newSiguiente;
}

/**
 * NodoDoble *NodoDoble::getAnterior()
 * {
 *    volver anterior;
 * }
 * 
 * @return El valor de la variable anterior.
 */
 template <typename T>
NodoDoble<T> *NodoDoble<T>::getAnterior()
{
   return anterior;
}

/**
 * *|CURSOR_MARCADOR|*
 * 
 * @param newAnterior El nuevo nodo que se establecerá como el nodo anterior.
 */
 template <typename T>
void NodoDoble<T>::setAnterior(NodoDoble *newAnterior)
{
   anterior = newAnterior;
}

/**
 * NodoDoble::~NodoDoble(){
 * 
 * }
 */
 template <typename T>
NodoDoble<T>::~NodoDoble(){

}