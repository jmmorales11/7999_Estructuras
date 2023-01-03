/*********
UFA - ESPE
AUTORES: MatÌas PadrÛn,Sebastian Torres, Cristhoper Villamarin, Paola Moncayo, Camilo Orrico, Jeimy Morales, Ariel Guevera
FECHA DE CREACI”N: 19/12/2022
FECHA DE MODIFICACI”N: 21/12/2022
Grupo1-GestiÛn banco usando Colas
GITHUB: Grupo-1-Estructura-de-datos-7999
†*********/

#include "NodoSimple.h"

/**
 * NodoSimple::NodoSimple(Empleado *objE, NodoSimple *sig=NULL)
 * 
 * @param objE es un objeto de la clase Empleado
 * @param sig es el puntero al siguiente nodo
 */

NodoSimple::NodoSimple(Persona *objP, NodoSimple *sig)
{
	this->objP=objP;
	this->siguiente=sig;
	
}


/**
 * NodoSimple::~NodoSimple()
 */

NodoSimple::~NodoSimple()
{
   // TODO : implement
}


/**
 * *|CURSOR_MARCADOR|*
 * 
 * @return El puntero al siguiente nodo.
 */

NodoSimple *NodoSimple::getSiguiente(void)
{
   return siguiente;
}


/**
 * *|CURSOR_MARCADOR|*
 * 
 * @param newSiguiente El nuevo nodo que ser√° el siguiente nodo en la lista.
 */

void NodoSimple::setSiguiente(NodoSimple *newSiguiente)
{
   siguiente = newSiguiente;
}


/**
 * *|CURSOR_MARCADOR|*
 * 
 * @return Se est√° devolviendo el objeto empleado.
 */

Persona *NodoSimple::getObjP(void)
{
	
   return objP;
}


/**
 * Establece el valor de la variable empleado al valor de la variable newObjEmpleado.
 * 
 * @param newObjEmpleado es un puntero a un objeto de tipo Empleado
 */

void NodoSimple::setObjP(Persona  *newObjP)
{
   objP = newObjP;
}
