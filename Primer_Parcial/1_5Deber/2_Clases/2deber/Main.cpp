/***********************************************************************
 * UFA-ESPE
 * Autores:  Jeimy Marley Morales Sosa & Camilo Andres Orrico Emme 
 * Modificacion: Martes, 08 de nombre de 2022 21:17:59
 * Purpose: Areas de las figuras
 *Nivel: Tercero           NRC:7999
 ***********************************************************************/
#include "SobrecargaOperador.cpp"
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <conio.h>
#include <windows.h>
using namespace std;

int main(int argc, char** argv ){
	HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
 	SetConsoleTextAttribute(hConsole, 3);
	float cuadrado, lado, triangulo, altura,base, rectangulo, circulo, radio;
	SobrecargaOperador *obj= new SobrecargaOperador(cuadrado,lado,triangulo,altura, base,rectangulo,circulo,radio);
	obj->ingresar(*obj);
	
}
