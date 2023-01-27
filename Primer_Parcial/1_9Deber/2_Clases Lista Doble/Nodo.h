/***********************************************************************
 * UFA-ESPE
 * Autores:  Jeimy Marley Morales Sosa & Camilo Andres Orrico Emme
 * Modificacion: Martes, 18 de noviembre 
 * Purpose: Listas, realizar el buscar, eliminar, inserta cola, mostrar cola
 *Nivel: Tercero           NRC:7999
 ***********************************************************************/

#include <time.h>
class Nodo{
	public:
		int valor;
		Nodo *siguiente;
		Nodo *anterior;
	public:
		Nodo();
		Nodo(int val, Nodo *sig=NULL, Nodo *ant=NULL){
			this->valor=val;
			this->siguiente=sig;
			this->anterior=ant;
		}
	friend class ListaDoble;
};
