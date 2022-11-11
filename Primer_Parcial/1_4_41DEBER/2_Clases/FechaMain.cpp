/***********************************************************************
 * UFA-ESPE
 * Autores:  Jeimy Marley Morales Sosa 
 * Modificacion: viernes, 04 de noviembre de 2022 22:14:37
 * Purpose: Implementation of the class DatosPersonales
 *Nivel: Tercero           NRC:7999
 ***********************************************************************/
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <conio.h>
#include "ValidarFecha.cpp"
using namespace std;
int main(int argc, char** argv) {
	int dia, mes, anio,dias;
	ValidarFecha *obj=new ValidarFecha(dia,mes,anio);
	cin>>dia;
	obj->setDia(dia);
	cin>>mes;
	obj->setMes(mes);
	cin>>anio;
	obj->setAnio(anio);
	cout<<obj->getDia()<<"/"<<obj->getMes()<<"/"<<obj->getAnio()<<endl;

	dias=obj->calcularFecha(*obj);
		cout<<dias;
	return 0;
}
