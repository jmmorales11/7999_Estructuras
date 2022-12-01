/***********************************************************************
 * UFA-ESPE
 * Autores:  Jeimy Marley Morales Sosa & Camilo Andres Orrico Emme
 * Modificacion: Martes, 18 de noviembre 
 * Purpose: Listas, realizar el buscar, eliminar, inserta cola, mostrar cola
 *Nivel: Tercero           NRC:7999
 ***********************************************************************/

#include "Nodo.h"
#include <iostream>
using namespace std;
class ListaCircularDoble{
	private:
		Nodo *primero;
		Nodo *ultimo;
		bool listaVacia(){
			return (this->primero==NULL);
		}
	public:
		ListaCircularDoble();
		void insertar(informacion *obj);
		bool buscarObj(int cedula);//encontrar primera ocurrencia
		void eliminar(int elemento);
		string toString();		
};
