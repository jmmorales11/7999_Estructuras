/***********************************************************************
 * Module:  ValidarFecha.cpp
 * Author:  Jeimy
 * Modified: miércoles, 9 de noviembre de 2022 6:10:15
 * Purpose: Implementation of the class ValidarFecha
 ***********************************************************************/

#include "ValidarFecha.h"


int ValidarFecha::getDia(void)
{
   return dia;
}


void ValidarFecha::setDia(int newDia)
{
   dia = newDia;
}


int ValidarFecha::getMes(void)
{
   return mes;
}


void ValidarFecha::setMes(int newMes)
{
   mes = newMes;
}


int ValidarFecha::getAnio(void)
{
   return anio;
}


void ValidarFecha::setAnio(int newAnio)
{
   anio = newAnio;
}


ValidarFecha::ValidarFecha(int dia, int mes, int anio)
{
	this->dia=dia;
	this->mes=mes;
	this->anio=anio;
}

ValidarFecha::~ValidarFecha()
{
   // TODO : implement
}


ValidarFecha ValidarFecha::ingresarFecha(ValidarFecha obj)
{
   // TODO : implement
}


int ValidarFecha::calcularFecha( ValidarFecha obj)
{
   int a=(14-obj.getMes())/12;
   int y= obj.getAnio()-a;
   int m = obj.getMes()+(12*a )-2;
   int dia=(obj.dia +y+(y/4)-(y/100)+(y/400)+((31*m)/12))%7;
   return dia;
}
