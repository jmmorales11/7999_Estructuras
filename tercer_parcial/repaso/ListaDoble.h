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
using namespace std;
template <typename T> 
class ListaDoble {		
	public:
		//Constructor
		ListaDoble();
		//metodos de orden de la lista
   		void insertarPorCabeza(T objP);
   		void repetidos();
   		void insertarPorCola(T objP);
    	void eliminarPorCabeza();
    	void eliminarPorCola();
		void mostrarPorCabeza();
		bool getListaVacia();
		void insertarEntre(T objP);
		void eliminarEntre(int pos); 
		void eliminarPorValor(T obj);
		T getPos(T objT);
	//	void ordenamientoBurbuja();
		void setPrimero(NodoDoble<T>*);
		void setActual(NodoDoble<T> *);
		NodoDoble<T> *getPrimero();
		NodoDoble<T> *getActual();
		int getNumNodos();
		int buscar(T);
		T buscarPosicion(int);
	private:
		NodoDoble<T> *primero;
		NodoDoble<T> *actual;
		int numNodos;
		
};
