/***********************************************************************
 * UFA-ESPE
 * Autores:  Jeimy Marley Morales Sosa & Camilo Andres Orrico Emme 
 * Modificacion: Miercoles, 30 de nombiebre de 2022 21:17:59
 * Purpose: ROL DE PAGO
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
		void provincias();
		string cifras(informacion *obj);
<<<<<<< HEAD
		bool buscar(string elementoBuscar);//encontrar primera ocurrencia
=======
>>>>>>> 5072f18ae6dd6455b3cac66dc7f585e33340495c
		bool buscarObj(int cedula);
		void eliminarApellidos(char elemento);
		void eliminar(int elemento);
		void imprimirCola(Lista lis,int tam);
		void insertarCola(informacion *obj);
		void buscarElemento(int pos);
		int minimoMultiplo(Lista lis);
		int maximoDivisor(Lista lis);
		Lista copiarLista(Lista  lis);
		string toString();	
		bool eliminarApell(string elemento);
		void apellidosEliminar(string elemento);
		void buscarApellido(string apellido);
		void Cargar();
<<<<<<< HEAD
		int buscarProvincia(string cedula);
		bool contarProvincia();
=======
		int buscarProvincia(char* cedula);
		void contarProvincia();
		bool buscar(string elementoBuscar);
>>>>>>> 5072f18ae6dd6455b3cac66dc7f585e33340495c
};
