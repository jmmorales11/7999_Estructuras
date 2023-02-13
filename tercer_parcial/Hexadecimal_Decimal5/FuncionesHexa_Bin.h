#include "funcion.h"
#include "Hex_Bin.cpp"
#include "ListaDoble.cpp"
class FuncionesHexa_Bin{
	
	public:
		ListaDoble<string> *lis;
		ListaDoble<string> *lis1;
		FuncionesHexa_Bin();
		string Transformar(string);
		string bin_octal(string);
   		int tamano(void);
		void lisHex(void); 
};