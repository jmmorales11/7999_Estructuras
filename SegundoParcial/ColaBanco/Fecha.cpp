/***********************************************************************
 * Module:  Fecha.cpp
 * Author:  sebas
 * Modified: miércoles, 14 de diciembre de 2022 8:56:01
 * Purpose: Implementation of the class Fecha
 ***********************************************************************/

#include "Persona.h"
#include "Fecha.h"
#include <ctime>
#include <sstream>
#include <string>
#include <iostream>
using namespace std;

Fecha::Fecha(int d,int  m, int  a)
{
	this->anio=a;
	this->dia=d;
	this->mes=m;
}

Fecha::~Fecha()
{
   // TODO : implement
}

short Fecha::getDia(void)
{
   return dia;
}

void Fecha::setDia(short newDia)
{
   dia = newDia;
}

short Fecha::getMes(void)
{
   return mes;
}

void Fecha::setMes(short newMes)
{
   mes = newMes;
}

short Fecha::getAnio(void)
{
   return anio;
}

void Fecha::setAnio(short newAnio)
{
   anio = newAnio;
}

short Fecha::cacularEdad(Fecha *f)
{
	time_t t = time(NULL);
 	tm* timePtr = localtime(&t);
  	int year = timePtr->tm_year + 1900;
  	cout<<"Ingrese el anio: ";
	cin>>anio;
	cout<<"\n";
	f.setAnio(anio);
  	int edad = year - f.getAnio();
    return edad; 
}
void Fecha::ingresarFecha(Fecha *f) 
{
	int dia, mes, anio;
	cout<<"Ingrese su fecha de nacimiento: \n";
	cout<<"Ingrese el dia 1-31: ";
	cin>>dia;
	f.setDia(dia);
	cout<<"Ingrese el mes 01-12: ";
	cin>>mes;
	f.setMes(mes);
	
}
