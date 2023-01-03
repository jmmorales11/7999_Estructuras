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
   		void insertarPorCabeza(Persona *objP);
   		void insertarPorCola(Persona *objP);
    	void eliminarPorCabeza();
    	void eliminarPorCola();
		void mostrarPorCabeza();
		//void buscar(int cedula);
		//void buscarEnLista(int cedula);
		bool getListaVacia();
		void insertarEntre(Persona *objP);
		void eliminarEntre(int pos); 
		T getPos(T objT);
		
		void setPrimero(NodoDoble*);
		void setActual(NodoDoble *);
		NodoDoble *getPrimero();
		NodoDoble *getActual();
		int getNumNodos();
		void ordenamientoBurbujaCedulas();
	private:
		NodoDoble *primero;
		NodoDoble *actual;
		int numNodos;
		
};