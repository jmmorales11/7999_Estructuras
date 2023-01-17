/***********************************************************************
 * UFA-ESPE
 * Autores:  Jeimy Marley Morales Sosa & Camilo Andres Orrico Emme
 * Modificacion: Martes, 18 de noviembre 
 * Purpose: Listas, realizar el buscar, eliminar, inserta cola, mostrar cola
 *Nivel: Tercero           NRC:7999
 ***********************************************************************/

#include "NodoCircularDoble.cpp"

using namespace std;
template <typename T> 
class ListaCircularDoble{
	private:
		NodoCircularDoble *primero;
		NodoCircularDoble *ultimo;
		bool listaVacia(){
			return (this->primero==NULL);
		}
	public:
		ListaCircularDoble();
		void insertarPoCola(T *obj);
		void insertarPoCabeza(T *obj);
		void mostrarLista();
		void buscar();//encontrar primera ocurrencia
		void eliminar();
		void ordenarCedula();
		void ordenarApellido();
		

};
