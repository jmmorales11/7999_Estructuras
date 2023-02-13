#include "funcion.h"
#include "Hex_Bin.cpp"
#include "ListaDoble.cpp"
class FuncionesBin{
	
	public:
		ListaDoble<string> *lis;
		ListaDoble<string> *lis1;
		FuncionesBin();
		string bin_hex(string);
		string bin_octal(string);
   		int bin_dec(string);
		void lisHex(void); 
};