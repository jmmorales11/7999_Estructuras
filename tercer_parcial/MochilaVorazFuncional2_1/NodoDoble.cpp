/***********************************************************************
 * Module:  Mochila.cpp
 * Author:  camilo Orrico Y Morales Jeimy
 * Modified: sábado, 4 de febrero de 2023 20:50:53
 * Purpose: Implementation of the class Mochila
 ***********************************************************************/
#include"NodoDoble.h"


/**
 * NodoDoble::NodoDoble(Empleado *objE, NodoDoble *sig=NULL,NodoDoble *ant=NULL)
 * 
 * @param objE es un puntero a un objeto de tipo Empleado
 * @param sig es el siguiente nodo
 * @param ant puntero al nodo anterior
 */

NodoDoble::NodoDoble(Mochila *objPP, NodoDoble *sig, NodoDoble *ant)
{
	this->obj=objPP;	
	this->siguiente=sig;
	this->anterior=ant;
}

/**
 * NodoDoble::NodoDoble()
 */

NodoDoble::NodoDoble()
{

}

/**
 * Devuelve el objeto de la clase Empleado.
 * 
 * @return El objeto de la clase Empleado.
 */

Mochila* NodoDoble::getObjeto(){
	return obj;
}

/**
 * Void NodoDoble::setObjEmpleado(Empleado *newObjEmpleado)
 * 
 * @param newObjEmpleado es un puntero a un objeto de tipo Empleado
 */

void NodoDoble::setObjP(Mochila *newObjP)
{
	obj = newObjP;
}

/**
 * NodoDoble *NodoDoble::getSiguiente()
 * 
 * @return El siguiente nodo.
 */

NodoDoble *NodoDoble::getSiguiente()
{
   return siguiente;
}

/**
 * *|CURSOR_MARCADOR|*
 * 
 * @param newSiguiente El nuevo nodo que serÃ¡ el siguiente nodo en la lista.
 */
void NodoDoble::setSiguiente(NodoDoble *newSiguiente)
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

NodoDoble *NodoDoble::getAnterior()
{
   return anterior;
}

/**
 * *|CURSOR_MARCADOR|*
 * 
 * @param newAnterior El nuevo nodo que se establecerÃ¡ como el nodo anterior.
 */
 
void NodoDoble::setAnterior(NodoDoble *newAnterior)
{
   anterior = newAnterior;
}

/**
 * NodoDoble::~NodoDoble(){
 * 
 * }
 */
 
NodoDoble::~NodoDoble(){

}
