/***********************************************************************
 * Module:  Mochila.h
 * Author:  camilo Orrico Y morales Marley
 * Modified: sábado, 4 de febrero de 2023 20:50:53
 * Purpose: Declaration of the class Mochila
 ***********************************************************************/
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
		void calcularValorMax(int);

	private:
		NodoDoble *primero;
		NodoDoble *actual;
		int numNodos;
		
};
