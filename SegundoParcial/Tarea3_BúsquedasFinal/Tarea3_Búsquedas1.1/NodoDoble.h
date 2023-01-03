/*************************
UFA - ESPE
AUTORES: Matías Padrón,Sebastian Torres, Cristhoper Villamarin, Paola Moncayo, Camilo Orrico, Jeimy Morales, Ariel Guevera
FECHA DE CREACIÓN: 20/12/2022
FECHA DE MODIFICACIÓN: 20/12/2022
Grupo1-Métodos de búsqueda 
GITHUB: Grupo-1-Estructura-de-datos-7999
 *************************/
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include "ValidacionDatos.cpp"
#pragma once
using namespace std;
template <typename T>
class NodoDoble{
	private:
		T objT;
		NodoDoble *siguiente;
		NodoDoble *anterior;
	public:
		NodoDoble(T objT , NodoDoble*,NodoDoble*);
		NodoDoble();
		NodoDoble(T objT);
	    T getObjetoT(void);
    	void setObjT(T newObjT);
    	NodoDoble<T> *getSiguiente();
    	void setSiguiente(NodoDoble *);
    	NodoDoble<T> *getAnterior();
    	void setAnterior(NodoDoble *);
		~NodoDoble();
	};