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
