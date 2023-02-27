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
   ListaDoble<T> copiar(ListaDoble<T> *l1,ListaDoble<T> *l2);
   long obtenerTiempo();
   void mostrar(ListaDoble<T> *lista, int x, int y );
   void dibujar(ListaDoble<T> *lista,ListaDoble<T> *lista1, int x, int y);
   void borrar(ListaDoble<T> *lista,ListaDoble<T> *lista1);
   void interseccionSin(ListaDoble<T> *lista1, ListaDoble<T> *lista2,ListaDoble<T> *lista3);

protected:
private:
	
	

};
