/***********************************************************************
 * UFA-ESPE
 * Autores:  Jeimy Marley Morales Sosa & Camilo Andres Orrico Emme
 * Modificacion: Martes, 18 de noviembre 
 * Purpose: Listas, realizar el buscar, eliminar, inserta cola, mostrar cola
 *Nivel: Tercero           NRC:7999
 ***********************************************************************/

#include "Nodo.h"

using namespace std;

template <typename T>
class ListaCircularDoble {
	public:
		ListaCircularDoble();
		void insertar(T *val);
		void mostrarLista();
		void buscar(T *elementoBuscar);//encontrar primera ocurrencia
		void eliminar(T *elemento);
	private:
		Nodo *primero;
		Nodo *ultimo;
		bool listaVacia(){
			return (this->primero==NULL);
		}	
};
