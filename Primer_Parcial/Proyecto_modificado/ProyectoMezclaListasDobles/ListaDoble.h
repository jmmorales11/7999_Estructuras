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
class ListaDoble{
	private:
		Nodo *primero;
		Nodo *ultimo;
		bool listaVacia(){
			return (this->primero==NULL);
		}
	public:
		ListaDoble();
		void insertar(informacion *obj);
		void mostrarLista();
		void buscar(int elementoBuscar);//encontrar primera ocurrencia
		bool buscarObj(int cedula);
		void eliminar(int elemento);
		void imprimirCola(ListaDoble lis,int tam);
		void insertarCola(informacion *obj);
		int minimoMultiplo(ListaDoble lis);
		int maximoDivisor(ListaDoble lis);
		ListaDoble copiarLista(ListaDoble  lis);
		string toString();			
};
