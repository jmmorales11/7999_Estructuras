/***********************************************************************
 * UFA-ESPE
 * Autores:  Jeimy Marley Morales Sosa & Camilo Andres Orrico Emme
 * Modificacion: Martes, 18 de noviembre 
 * Purpose: Listas, realizar el buscar, eliminar, inserta cola, mostrar cola
 *Nivel: Tercero           NRC:7999
 ***********************************************************************/
#include <time.h>
#include "NodoCircularDoble.h"
NodoCircularDoble::NodoCircularDoble(Persona *objPP, NodoCircularDoble *sig, NodoCircularDoble*ant)
{
	this->objP=objPP;	
	this->sigue=sig;
	this->anterior=ant;
}

/**
 * NodoDoble::NodoDoble()
 */

NodoCircularDoble::NodoCircularDoble()
{

}

/**
 * Devuelve el objeto de la clase Empleado.
 * 
 * @return El objeto de la clase Empleado.
 */

Persona* NodoCircularDoble::getObjetoP(){
	return objP;
}

/**
 * Void NodoDoble::setObjEmpleado(Empleado *newObjEmpleado)
 * 
 * @param newObjEmpleado es un puntero a un objeto de tipo Empleado
 */

void NodoCircularDoble::setObjP(Persona *newObjP)
{
	objP = newObjP;
}

/**
 * NodoDoble *NodoDoble::getSiguiente()
 * 
 * @return El siguiente nodo.
 */

NodoCircularDoble *NodoCircularDoble::getSiguiente()
{
   return sigue;
}

/**
 * *|CURSOR_MARCADOR|*
 * 
 * @param newSiguiente El nuevo nodo que será el siguiente nodo en la lista.
 */
void NodoCircularDoble::setSiguiente(NodoCircularDoble *newSiguiente)
{
   sigue = newSiguiente;
}

/**
 * NodoDoble *NodoDoble::getAnterior()
 * {
 *    volver anterior;
 * }
 * 
 * @return El valor de la variable anterior.
 */

NodoCircularDoble *NodoCircularDoble::getAnterior()
{
   return anterior;
}

/**
 * *|CURSOR_MARCADOR|*
 * 
 * @param newAnterior El nuevo nodo que se establecerá como el nodo anterior.
 */
 
void NodoCircularDoble::setAnterior(NodoCircularDoble *newAnterior)
{
   anterior = newAnterior;
}

/**
 * NodoDoble::~NodoDoble(){
 * 
 * }
 */
 
NodoCircularDoble::~NodoCircularDoble(){

}
