/***********************************************************************
UFA - ESPE
AUTORES: Matías Padrón,Sebastian Torres
FECHA DE CREACIÓN: 19/11/2022
FECHA DE MODIFICACIÓN: 29/11/2022
Proyecto Unidad 1-Rol de pagos
GITHUB: Padron-Torres-Primer-Parcial-Estructuras
 ***********************************************************************/

#if !defined(__Class_Diagram_1_NominaSimple_h)
#define __Class_Diagram_1_NominaSimple_h

#include "NodoSimple.cpp"
//#include "FuncionesLista.h"
using namespace std;
template <typename T> 
class Cola{
public:
   Cola();
   ~Cola();
    
    void push(T objT);
    void pop();
	void mostrarPorCabeza();
	//void buscar(int);
	bool getListaVacia();
    NodoSimple<T> *getPrimero(void);
    void setPrimero(NodoSimple<T> *newPrimero);
    NodoSimple<T> *getActual(void);
    void setActual(NodoSimple<T> *newActual);
    int getNumNodos();


protected:
private:
   NodoSimple<T> *primero;
   NodoSimple<T> *actual;
   int numNodos;

};

#endif