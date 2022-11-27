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
class Lista{
	private:
		Nodo *primero;
		Nodo *actual;
		bool listaVacia(){
			return (this->primero==NULL);
		}
	public:
		Lista();
		void insertar(trabajadorInformacion *obj);
		void mostrarLista();
		void buscar(trabajadorInformacion *obj);//encontrar primera ocurrencia
		void eliminar(trabajadorInformacion *obj);
		void imprimirCola(Lista lis,int tam);
		void insertarCola(trabajadorInformacion *obj);
		void buscarElemento(trabajadorInformacion *obj);
		
};
