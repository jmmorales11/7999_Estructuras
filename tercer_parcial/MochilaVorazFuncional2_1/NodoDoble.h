/***********************************************************************
 * Module:  Mochila.cpp
 * Author:  camilo Orrico Y Morales Jeimy
 * Modified: sábado, 4 de febrero de 2023 20:50:53
 * Purpose: Implementation of the class Mochila
 ***********************************************************************/
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
