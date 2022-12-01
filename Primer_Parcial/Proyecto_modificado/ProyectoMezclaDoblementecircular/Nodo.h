/***********************************************************************
 * UFA-ESPE
 * Autores:  Jeimy Marley Morales Sosa & Camilo Andres Orrico Emme
 * Modificacion: Martes, 18 de noviembre 
 * Purpose: Listas doble circular
 *Nivel: Tercero           NRC:7999
 ***********************************************************************/
#pragma once
#include <time.h>
#include "informacion.cpp"
class Nodo{
	private:
		informacion *Obj;
		Nodo *siguiente;
		Nodo *anterior;
	public:
		Nodo();
		Nodo(informacion *obj, Nodo *sig=NULL, Nodo *ant=NULL){
			Obj=obj;
			this->siguiente=sig;
			this->anterior=ant;
		}
		void setInformacion(informacion *obj){
			Obj=obj;			
		}
		
		informacion *obtenerInformacion(){
			return Obj;
		}
	friend class ListaCircularDoble;
};
