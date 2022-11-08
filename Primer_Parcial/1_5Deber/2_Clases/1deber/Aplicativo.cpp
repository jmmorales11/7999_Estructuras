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
