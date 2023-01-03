/*************************
UFA - ESPE
AUTORES: Matías Padrón,Sebastian Torres, Cristhoper Villamarin, Paola Moncayo, Camilo Orrico, Jeimy Morales, Ariel Guevera
FECHA DE CREACIÓN: 19/12/2022
FECHA DE MODIFICACIÓN: 19/12/2022
Grupo1-Gestión banco usando Colas
GITHUB: Grupo-1-Estructura-de-datos-7999
 *************************/

#if !defined(__Class_Diagram_1_NominaSimple_h)
#define __Class_Diagram_1_NominaSimple_h

#include "NodoSimple.cpp"
#include "Persona.cpp"
//#include "FuncionesLista.h"
using namespace std;
template <typename T> 
class Cola{
public:
   Cola();
   ~Cola();
    
    void push(Persona *persona);
    void pop();
	void mostrar();
	//void buscar(int);
	bool getListaVacia();
    NodoSimple *getPrimero(void);
    void setPrimero(NodoSimple *newPrimero);
    NodoSimple *getActual(void);
    void setActual(NodoSimple *newActual);
    int getNumNodos();
    void toString();
    void mostrarTabla(Persona *p);

protected:
private:
   NodoSimple *primero;
   NodoSimple *actual;
   int numNodos;

};

#endif
