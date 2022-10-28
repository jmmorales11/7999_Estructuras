/***********************************************************************
 * UFA-ESPE
 * Autores:  Jeimy Marley Morales Sosa & Camilo Andres Orrico Emme 
 * Modificacion: jueves, 27 de octubre de 2022 21:17:59
 * Purpose: Implementation of the class DatosPersonales
 *Nivel: Tercero           NRC:7999
 ***********************************************************************/
#include <iostream>
#include "DatosPersonales.cpp"
#include<iostream>//cin y cout endl
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
using namespace std;
int main(int arg, char** argv){
	string cedula;
	string nombre;
	string apellido;
	int anioA;
	int anioN;
	DatosPersonales *objDatos= new DatosPersonales(cedula,nombre,apellido,anioA,anioN);
	objDatos->ingresar(*objDatos);
	objDatos->calcularEdad(*objDatos);
	objDatos->imprimir(*objDatos);
	return 0;
}
