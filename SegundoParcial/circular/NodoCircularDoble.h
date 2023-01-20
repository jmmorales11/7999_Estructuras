/***********************************************************************
 * UFA-ESPE
 * Autores:  Jeimy Marley Morales Sosa & Camilo Andres Orrico Emme
 * Modificacion: Martes, 18 de noviembre 
 * Purpose: Listas, realizar el buscar, eliminar, inserta cola, mostrar cola
 *Nivel: Tercero           NRC:7999
 ***********************************************************************/

#include <time.h>
#include "Persona.cpp"
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>


class NodoCircularDoble{
	
		
	public:
		NodoCircularDoble(Persona * , NodoCircularDoble*,NodoCircularDoble*);
		NodoCircularDoble();	
	    Persona* getObjetoP(void);
    	void setObjP(Persona *newObjP);
    	NodoCircularDoble *getSiguiente();
    	void setSiguiente(NodoCircularDoble *);
    	NodoCircularDoble *getAnterior();
    	void setAnterior(NodoCircularDoble *);
		~NodoCircularDoble();
		friend class ListaCicularDoble;
	public:
		Persona *objP;
		NodoCircularDoble *anterior;
		NodoCircularDoble *sigue;
	};
	
