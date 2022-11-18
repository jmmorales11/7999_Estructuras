
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
		void buscar(int elementoBuscar);//encontrar primera ocurrencia
		void eliminar(int elemento);
		void imprimirCola(Lista lis,int tam);
		void insertarCola(int num);
		void buscarElemento(int pos);		
};
