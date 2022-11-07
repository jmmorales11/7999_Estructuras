/***********************************************************************
 * UFA-ESPE
 * Autores:  Jeimy Marley Morales Sosa 
 * Modificacion: viernes, 04 de noviembre de 2022 22:14:37
 * Purpose: Implementation of the class DatosPersonales
 *Nivel: Tercero           NRC:7999
 ***********************************************************************/
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <conio.h>
#include "Amortizacion.cpp"
using namespace std;
int main(int argc, char** argv) {
	float prestamo,inprestamo,saldo, amortizacion, cuota;
	int meses,interes,dia,an;
	char mes;
	Amortizacion *obj= new Amortizacion(prestamo,meses,interes,dia,mes,an,inprestamo,saldo,amortizacion, cuota);
	obj->ingresar();

	obj->imprimir(*obj);
	return 0;
}
