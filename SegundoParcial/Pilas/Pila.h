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
class Pila{
	private:
		Nodo *ultimo;
		Nodo *primero;
		bool listaVacia(){
			return (this->primero==NULL);
		}
	public:
		Pila();
		void push(int dato);
		void pop();		
};
