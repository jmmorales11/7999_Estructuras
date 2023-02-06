/*************************
UFA - ESPE
AUTORES: Matías Padrón,Sebastian Torres, Cristhopher Villamarin, Paola Moncayo, Camilo Orrico, Jeimy Morales, Ariel Guevara
FECHA DE CREACIÓN: 20/12/2022
FECHA DE MODIFICACIÓN: 2/01/2023
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
   		void insertarPorCabeza(Mochila *objP);
   		void insertarPorCola(Mochila *objP);
    	void eliminarPorCabeza();
    	void eliminarPorCola();
		void mostrarPorCabeza();
		bool getListaVacia();
		void insertarEntre(Mochila *objP);
		void eliminarEntre(int pos); 
		T getPos(T objT);
		void ordenamientoBurbuja();
		void setPrimero(NodoDoble*);
		void setActual(NodoDoble *);
		NodoDoble *getPrimero();
		NodoDoble *getActual();
		int getNumNodos();

	private:
		NodoDoble *primero;
		NodoDoble *actual;
		int numNodos;
		
};
