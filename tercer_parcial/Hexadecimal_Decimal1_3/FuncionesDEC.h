#include "funcion.h"
#include <string>
using namespace std;
class FuncionesDEC{
	public:
		char* cad;
		FuncionesDEC();
		void ingresar();
		char* Transformar(int val, char* cad);
		string dec_Hexadecimal(int decimal); 
		string dec_Octal(int decimal); 
   		 
};