#include "Conjuntos.h"
#include "ListaDoble.cpp"
template <typename T> 
class Operaciones: public Conjuntos
{
public:
	Operaciones();
   void uniones(ListaDoble<T> *lista1, ListaDoble<T> *lista2,ListaDoble<T> *lista3);
   void interseccion(ListaDoble<T> *lista1, ListaDoble<T> *lista2,ListaDoble<T> *lista3);
   void complemento(ListaDoble<T> *lista1, ListaDoble<T> *lista2,ListaDoble<T> *lista3);
   void diferencia(ListaDoble<T> *lista1, ListaDoble<T> *lista2, ListaDoble<T> *lista3);
   void diferenciaSimetrica(ListaDoble<T> *lista1, ListaDoble<T> *lista2,ListaDoble<T> *lista3);
   bool comparar(ListaDoble<T> *lista1, ListaDoble<T> *lista2);
   void mostrar(ListaDoble<T> *lista);
protected:
private:
	
	

};
