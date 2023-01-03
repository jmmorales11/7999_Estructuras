/***********************************************************************
 * UFA-ESPE
 * Autores:  Jeimy Marley Morales Sosa & Camilo Andres Orrico Emme
 * Modificacion: Martes, 18 de noviembre 
 * Purpose: Listas, realizar el buscar, eliminar, inserta cola, mostrar cola
 *Nivel: Tercero           NRC:7999
 ***********************************************************************/

#include "Nodo.h"

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
		void insertar(int val);
		void mostrarLista();
		void buscar(int elementoBuscar);//encontrar primera ocurrencia
		void eliminar(int elemento);
		int maximoDivisor(ListaCircularDoble lis);
		int minimoMultiplo(ListaCircularDoble lis);	
		void ordenarMetodoBurbuja();
};
