/***********************************************************************
 * UFA-ESPE
 * Autores:  Jeimy Marley Morales Sosa & Camilo Andres Orrico Emme
 * Modificacion: Martes, 18 de noviembre 
 * Purpose: Listas, realizar el buscar, eliminar, inserta cola, mostrar cola
 *Nivel: Tercero           NRC:7999
 ***********************************************************************/
#pragma once
#include <time.h>
#include "trabajadorInformacion.cpp"
class Nodo{
	private:
		float a,f;
		int b ,c,d;
		trabajadorInformacion *obj = new trabajadorInformacion(a,b,c,d,f);
		Nodo *siguiente;
	public:
		Nodo(trabajadorInformacion obj1, Nodo *sig=NULL){
			
			this->siguiente=sig;
		}
	friend class Lista;
};
