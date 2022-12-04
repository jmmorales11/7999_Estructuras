/***********************************************************************
 * Module:  Datos.cpp
 * Author:  Jeimy
 * Modified: miércoles, 30 de noviembre de 2022 1:05:29
 * Purpose: Implementation of the class Datos
 ***********************************************************************/

#include "Datos1.h"
#include "validar.h"

string Datos1::getNombre(void)
{
   return nombre;
}


void Datos1::setNombre(string newNombre)
{
   nombre = newNombre;
}


int Datos1::getId(void)
{
   return id;
}


void Datos1::setId(int newId)
{
   id = newId;
}


float Datos1::getSueldo(void)
{
   return sueldo;
}


void Datos1::setSueldo(float newSueldo)
{
   sueldo = newSueldo;
}


int Datos1::getDiasTrabajados(void)
{
   return diasTrabajados;
}


void Datos1::setDiasTrabajados(int newDiasTrabajados)
{
   diasTrabajados = newDiasTrabajados;
}


int Datos1::getHoras100(void)
{
   return horas100;
}


void Datos1::setHoras100(int newHoras100)
{
   horas100 = newHoras100;
}


int Datos1::getHoras50(void)
{
   return horas50;
}


void Datos1::setHoras50(int newHoras50)
{
   horas50 = newHoras50;
}


float Datos1::getPrestamo(void)
{
   return prestamo;
}


void Datos1::setPrestamo(float newPrestamo)
{
   prestamo = newPrestamo;
}


Datos1::Datos1(string nom, float ID, int suel, int diasT, int h100, int h50, float pres)
{
   this->nombre=nom;
   this->sueldo=suel;
   this->id=ID;
   this->diasTrabajados=diasT;
   this->horas100=h100;
   this->horas50=h50;
   this->prestamo=pres;
}
Datos1::Datos1()
{
   // TODO : implement
}


Datos1::~Datos1()
{
   // TODO : implement
}


Datos1 Datos1::ingresarDatos(Datos1 *obj)
{	int longitud,dias;
   char datoEntero[11],datoReal[20],datoCaracter[30];
   	str_cpy(datoCaracter,ingresocaracteres("\nOIngrese el nombre del trabajador: "));
   	obj->setNombre(datoCaracter);
	do
	{
		str_cpy(datoEntero,ingresarDatosEnteros("\nIngrese la cedula del trabajador: "));
		id = funcion_atoi(datoEntero,strlen(datoEntero));
		longitud = strlen(datoEntero);
	} while(longitud!=10);
	
   	this->setId(id);
	
	str_cpy(datoReal,ingresoflotantes("\nIngrese el sueldo del trabajador: "));
	this->setSueldo(funcion_strtod(datoReal));
	
	do
	{
		str_cpy(datoEntero,ingresarDatosEnteros("\nIngrese el total de dias trabajados: "));
		dias=funcion_atoi(datoEntero,strlen(datoEntero));
	} while(dias>30);
	

	this->setDiasTrabajados(funcion_atoi(datoEntero,strlen(datoEntero)));
	
	str_cpy(datoEntero,ingresarDatosEnteros("\nIngrese las horas al 100%: "));
	this->setHoras100(funcion_atoi(datoEntero,strlen(datoEntero)));

	str_cpy(datoEntero,ingresarDatosEnteros("\nIngrese las horas al 50%: "));
	this->setHoras50(funcion_atoi(datoEntero,strlen(datoEntero)));
return *this;
}
