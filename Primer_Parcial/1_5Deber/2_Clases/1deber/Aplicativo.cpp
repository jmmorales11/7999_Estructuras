/***********************************************************************
 * UFA-ESPE
 * Autores:  Jeimy Marley Morales Sosa & Camilo Andres Orrico Emme 
 * Modificacion: Martes, 08 de nombre de 2022 21:17:59
 * Purpose: Areas de las figuras
 *Nivel: Tercero           NRC:7999
 ***********************************************************************/
#include "area.cpp"
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
	float altura,radio1,radio2;
	double lado,base,c,r,t,o,ci;
	Area *obj= new Area(lado,base,altura,radio1,radio2,c,r,ci,o,t);
	obj->ingresar(*obj);
	
}
