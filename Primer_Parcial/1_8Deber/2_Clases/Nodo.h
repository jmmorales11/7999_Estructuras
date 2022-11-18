/***********************************************************************
 * UFA-ESPE
 * Autores:  Jeimy Marley Morales Sosa & Camilo Andres Orrico Emme
 * Modificacion: Martes, 18 de noviembre 
 * Purpose: Listas, realizar el buscar, eliminar, inserta cola, mostrar cola
 *Nivel: Tercero           NRC:7999
 ***********************************************************************/
#pragma once
#include <time.h>
class Nodo{
	private:
		int valor;
		Nodo *siguiente;
	public:
		Nodo(int val, Nodo *sig=NULL){
			this->valor=val;
			this->siguiente=sig;
		}
	friend class Lista;
};
