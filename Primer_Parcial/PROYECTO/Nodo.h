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
		trabajadorInformacion *Obj;
		Nodo *siguiente;
	public:
		Nodo(trabajadorInformacion *obj, Nodo *sig=NULL){
			Obj=obj;
			this->siguiente=sig;
		}
		void setInformacion(trabajadorInformacion *obj){
			Obj=obj;
		}
		trabajadorInformacion *obtenerInformacion(){
			return Obj;
		}
		
	friend class Lista;
};
