#include <iostream>
#include "DatosPersonales.cpp"
#include<iostream>//cin y cout endl
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
using namespace std;
int main(int arg, char** argv){
	string cedula="1754146676";
	string nombre="Jeimy";
	string apellido="Morales";
	int anioA=2022;
	int anioN=2002;
	DatosPersonales *objDatos= new DatosPersonales(cedula,nombre,apellido,anioA,anioN);
	objDatos->calcularEdad(*objDatos);
	objDatos->imprimir(*objDatos);
	return 0;
}
