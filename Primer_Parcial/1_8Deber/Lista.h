
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
		void insertar(int val);
		void mostrarLista();
		void buscar();//encontrar primera ocurrencia
		void eliminar();
		void imprimirCola();//Camilo
		void insertarCola();//Camilo
		
};
