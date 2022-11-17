#include <iostream>
#include "Lista.cpp"
#include "validar.h"
int main(int argc, char** argv) {
	Lista lst;
	int opc,contador, num;
	char datoEntero[10];
	str_cpy(datoEntero,ingresarDatosEnteros("\nIngrese la cantidad de datos que desea introducir:"));
	opc=funcion_atoi(datoEntero,strlen(datoEntero));
	do{
		str_cpy(datoEntero,ingresarDatosEnteros("\nIngrese el numero que esea introducir a la lista: "));
		num=funcion_atoi(datoEntero,strlen(datoEntero));
		lst.insertar(num);
		contador++;
	}while (contador<opc);
	cout<<endl;
	lst.mostrarLista();
	
	return 0;
}
