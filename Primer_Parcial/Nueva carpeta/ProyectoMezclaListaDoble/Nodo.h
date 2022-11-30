/***********************************************************************
 * UFA-ESPE
 * Autores:  Jeimy Marley Morales Sosa & Camilo Andres Orrico Emme
 * Modificacion: Martes, 18 de noviembre 
 * Purpose: Listas, realizar el buscar, eliminar, inserta cola, mostrar cola
 *Nivel: Tercero           NRC:7999
 ***********************************************************************/
 ///SIRVE
#pragma once
#include <time.h>
#include "informacion.cpp"
class Nodo{
	private:
		informacion *Obj;
		Nodo *siguiente;
	public:
		Nodo(informacion *obj, Nodo *sig=NULL){
			Obj=obj;
			this->siguiente=sig;
		}
		void setInformacion(informacion *obj){
			Obj=obj;			
		}
		
		informacion *obtenerInformacion(){
			return Obj;
		}
	friend class Lista;
};
