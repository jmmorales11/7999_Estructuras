/***********************************************************************
 * UFA-ESPE
 * Autores:  Jeimy Marley Morales Sosa & Camilo Andres Orrico Emme
 * Modificacion: Martes, 18 de noviembre 
 * Purpose: Listas, realizar el buscar, eliminar, inserta cola, mostrar cola
 *Nivel: Tercero           NRC:7999
 ***********************************************************************/
 ///SIRVE

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
		void insertar(informacion *obj);
		void mostrarLista();
		void buscar(int elementoBuscar);//encontrar primera ocurrencia

		bool buscarObj(int cedula);

		void eliminar(int elemento);
		void imprimirCola(Lista lis,int tam);
		void insertarCola(int num);
		void buscarElemento(int pos);
		int minimoMultiplo(Lista lis);
		int maximoDivisor(Lista lis);
		Lista copiarLista(Lista  lis);
		string toString();	
};
