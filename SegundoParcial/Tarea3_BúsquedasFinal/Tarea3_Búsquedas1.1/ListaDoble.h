/*************************
UFA - ESPE
AUTORES: Matías Padrón,Sebastian Torres, Cristhoper Villamarin, Paola Moncayo, Camilo Orrico, Jeimy Morales, Ariel Guevera
FECHA DE CREACIÓN: 20/12/2022
FECHA DE MODIFICACIÓN: 20/12/2022
Grupo1-Métodos de búsqueda 
GITHUB: Grupo-1-Estructura-de-datos-7999
 *************************/
#pragma once
#include "NodoDoble.cpp"

//
template <typename T> 
class ListaDoble {		
	public:
		//Constructor
		ListaDoble();
		//metodos de orden de la lista
   		void insertarPorCabeza(T objT);
   		void insertarPorCola(T objT);
    	void eliminarPorCabeza();
    	void eliminarPorCola();
		void mostrarPorCabeza();
		bool getListaVacia();
		void insertarEntre(T objT);
		void eliminarEntre(T objT); 
		T getPos(T objT);
		T getPosNodo(T objT);
		void ordenamientoBurbuja();
		bool busquedaBinaria(T objT);
		void busquedaSecuencial(T objT);
		void setPrimero(NodoDoble<T>*);
		void setActual(NodoDoble<T> *);
		NodoDoble<T> *getPrimero();
		NodoDoble<T> *getActual();
		int getNumNodos();

	private:
		NodoDoble<T> *primero;
		NodoDoble<T> *actual;
		int numNodos;
		
};
