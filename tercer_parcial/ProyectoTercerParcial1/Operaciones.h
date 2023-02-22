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
<<<<<<< HEAD
   ListaDoble<T> copiar(ListaDoble<T> *l1,ListaDoble<T> *l2);
=======
   void mostrar(ListaDoble<T> *lista);
>>>>>>> f64a11d7445d070e95b98fa5911f207d30fc8cf7
protected:
private:
	
	

};
