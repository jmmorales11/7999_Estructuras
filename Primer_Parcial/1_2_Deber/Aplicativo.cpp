/***********************************************************************
 * UFA-ESPE
 * Autores:  Jeimy Marley Morales Sosa & Camilo Andres Orrico Emme 
 * Modificacion: viernes, 28 de octubre de 2022 22:14:37
 * Purpose: Implementation of the class DatosPersonales
 *Nivel: Tercero           NRC:7999
 ***********************************************************************/
#include "Ingreso.h"
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "Ingreso.cpp"
int main(int argc, char** argv) {
	
	int num;
	float valor;
	double d;
	char dato;
	num=*ingresarDatosEnteros("\nIngrese el valor entero");
	valor= *ingresoflotantes("\nIngrese el valor flotante");
	d=*ingresoDoubles("\nIngrese el valor double");
	dato=*ingresocaracteres("\nIngrese el caracter");

	return 0;
}
