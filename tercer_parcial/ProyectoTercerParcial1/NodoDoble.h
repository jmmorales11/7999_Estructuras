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
template <typename T> 
class NodoDoble{
	private:
		T obj;
		NodoDoble<T> *siguiente;
		NodoDoble<T> *anterior;
	public:
		NodoDoble(T , NodoDoble*,NodoDoble*);
		NodoDoble();	
	    T getObjeto(void);
    	void setObjP(T newObj);
    	NodoDoble *getSiguiente();
    	void setSiguiente(NodoDoble *);
    	NodoDoble *getAnterior();
    	void setAnterior(NodoDoble *);
		~NodoDoble();
	};
