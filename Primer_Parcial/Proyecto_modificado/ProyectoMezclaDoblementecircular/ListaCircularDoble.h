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
		bool buscarObj(string cedula);//encontrar primera ocurrencia
		void eliminar(int elemento);
		void eliminarApellido(string elementoBuscar);
		string toString();	
		void mostrarLista();
		void buscar(string elementoBuscar);//encontrar primera ocurrencia
		//bool buscarObj(string cedula);
		void eliminarApellidos(char elemento);
		void eliminar(string elemento);
		void imprimirCola(ListaCircularDoble lis,int tam);
		void insertarCola(informacion *obj);
		void buscarElemento(int pos);
		int minimoMultiplo(ListaCircularDoble lis);
		int maximoDivisor(ListaCircularDoble lis);
		ListaCircularDoble copiarListaCircularDoble(ListaCircularDoble  lis);
<<<<<<< HEAD
=======
		//string toString();	
>>>>>>> 01a1815bfcb806ba297f86730bdf92f4f0711ec7
		bool eliminarApell(string elemento);
		void apellidosEliminar(string elemento);
		void buscarApellido(string apellido);
		void Cargar();
		int buscarProvincia(string cedula);
		void contarProvincia();	
};
