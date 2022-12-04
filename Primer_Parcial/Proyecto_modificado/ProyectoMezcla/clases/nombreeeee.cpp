
#include <ctime>
#include <stdlib.h>
#include "Lista.cpp"
#include "Letra.cpp"
///SIRVE
using namespace std;

int main(int arg, char** argv){
	char name[10];
	Datos1 *obj1 = new Datos1("Yo",1754146676,450.0,12,12,12,120.0);
	obj1->ingresarDatos(obj1);
	printf("%c",letraPrimera(obj1->getNombre()) );
	
}
