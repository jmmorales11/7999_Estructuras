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
		informacion *objeto;
		Nodo *siguiente;
		Nodo *anterior;
	public:
		Nodo();
		Nodo(informacion *obj, Nodo *sig=NULL, Nodo *ant=NULL){
			objeto=obj;
			this->siguiente=sig;
			this->anterior=ant;
		}
		
		void setInformacion(informacion *obj){
			objeto=obj;			
		}
		
		informacion *obtenerInformacion(){
			return objeto;
		}
	friend class ListaDoble;
};
