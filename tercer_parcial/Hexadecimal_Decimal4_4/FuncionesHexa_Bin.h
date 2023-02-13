#include "funcion.h"
#include "ListaDoble.cpp"
class FuncionesHexa_Bin{
	
	public:
		ListaDoble<string> *lis;
		ListaDoble<string> *lis1;
		FuncionesHexa_Bin();
		void Transformar(void);
   		int tamano(void);
		void lisHex(void); 
};