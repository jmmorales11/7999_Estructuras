/*************************
UFA - ESPE
AUTORES: Matías Padrón,Sebastian Torres, Cristhopher Villamarin, Paola Moncayo, Camilo Orrico, Jeimy Morales, Ariel Guevara
FECHA DE CREACIÓN: 20/12/2022
FECHA DE MODIFICACIÓN: 2/01/2023
Grupo1-Métodos de búsqueda 
GITHUB: Grupo-1-Estructura-de-datos-7999
 *************************/
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include "Mochila.cpp"
#pragma once
using namespace std;
class NodoDoble{
	private:
		Mochila *obj;
		NodoDoble *siguiente;
		NodoDoble *anterior;
	public:
		NodoDoble(Mochila * , NodoDoble*,NodoDoble*);
		NodoDoble();	
	    Mochila* getObjeto(void);
    	void setObjP(Mochila *newObj);
    	NodoDoble *getSiguiente();
    	void setSiguiente(NodoDoble *);
    	NodoDoble *getAnterior();
    	void setAnterior(NodoDoble *);
		~NodoDoble();
	};
