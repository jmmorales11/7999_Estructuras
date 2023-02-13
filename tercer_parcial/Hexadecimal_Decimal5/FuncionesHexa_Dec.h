#include "funcion.h"
#include "ListaDoble.cpp"
class FuncionesHexa_Dec{
	
	public:
		ListaDoble<string> *lis;
		FuncionesHexa_Dec();
		void Transformar(string);
   		int tamano(void);
		void lisHex(void); 
};