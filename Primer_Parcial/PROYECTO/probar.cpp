#include <iostream>
#include "Logo.cpp"
#include <ctime>
#include <stdlib.h>
#include "Informacion.cpp"
using namespace std;
int main(int arg, char** argv){
	int nHorascompletas, nHoras50,dias;
	float sueldo, prestamo; 
	trabajadorInformacion *obj= new trabajadorInformacion(sueldo,dias,nHorascompletas,nHoras50,prestamo);
	obj->ingresarInformacion(*obj);
	obj->mostrarInformacion(*obj);

}
