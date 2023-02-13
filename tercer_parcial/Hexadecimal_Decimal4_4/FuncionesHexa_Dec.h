#include "funcion.h"
#include "ListaDoble.cpp"
class FuncionesHexa_Dec: public funcion{
	
	public:
		ListaDoble<string> *lis;
		FuncionesHexa_Dec();
		void Transformar(void);
   		int tamano(void);
		void lisHex(void); 
};