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

using namespace std;
class NodoDoble{
	private:
		char obj;
		NodoDoble *siguiente;
		NodoDoble *anterior;
	public:
		NodoDoble(char , NodoDoble*,NodoDoble*);
		NodoDoble();	
	    char getObjeto(void);
    	void setObjP(char newObj);
    	NodoDoble *getSiguiente();
    	void setSiguiente(NodoDoble *);
    	NodoDoble *getAnterior();
    	void setAnterior(NodoDoble *);
		~NodoDoble();
	};
