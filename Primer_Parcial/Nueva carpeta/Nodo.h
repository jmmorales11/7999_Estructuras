/***********************************************************************
 * UFA-ESPE
 * Autores:  Jeimy Marley Morales Sosa & Camilo Andres Orrico Emme
 * Modificacion: Martes, 18 de noviembre 
 * Purpose: Listas, realizar el buscar, eliminar, inserta cola, mostrar cola
 *Nivel: Tercero           NRC:7999
 ***********************************************************************/
#pragma once
#include <time.h>
#include "informacion.cpp"
class Nodo{
	private:
		informacion *objInfo;
		Nodo *siguiente;
	public:
		Nodo(informacion *obj, Nodo *sig=NULL){
			objInfo=obj;
			this->siguiente=sig;
		}
		void setInformacion(informacion *obj){
			objInfo=obj;			
		}
		informacion *obtenerInformacion(){
			return objInfo;
		}
	friend class Lista;
};
