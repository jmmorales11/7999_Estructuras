/***********************************************************************
 * Module:  Datos.cpp
 * Author:  Jeimy
 * Modified: miércoles, 30 de noviembre de 2022 1:05:29
 * Purpose: Implementation of the class Datos
 ***********************************************************************/

#include "Datos.h"
#include "validar.h"

std::string Datos::getNombre(void)
{
   return nombre;
}


void Datos::setNombre(std::string newNombre)
{
   nombre = newNombre;
}


int Datos::getId(void)
{
   return id;
}


void Datos::setId(int newId)
{
   id = newId;
}


float Datos::getSueldo(void)
{
   return sueldo;
}


void Datos::setSueldo(float newSueldo)
{
   sueldo = newSueldo;
}


int Datos::getDiasTrabajados(void)
{
   return diasTrabajados;
}


void Datos::setDiasTrabajados(int newDiasTrabajados)
{
   diasTrabajados = newDiasTrabajados;
}


int Datos::getHoras100(void)
{
   return horas100;
}


void Datos::setHoras100(int newHoras100)
{
   horas100 = newHoras100;
}


int Datos::getHoras50(void)
{
   return horas50;
}


void Datos::setHoras50(int newHoras50)
{
   horas50 = newHoras50;
}


float Datos::getPrestamo(void)
{
   return prestamo;
}


void Datos::setPrestamo(float newPrestamo)
{
   prestamo = newPrestamo;
}


Datos::Datos(std::string nom, float ID, int suel, int diasT, int h100, int h50, float pres)
{
   this->nombre=nom;
   this->sueldo=suel;
   this->id=ID;
   this->diasTrabajados=diasT;
   this->horas100=h100;
   this->horas50=h50;
   this->prestamo=pres;
}

Datos::~Datos()
{
   // TODO : implement
}


Datos Datos::ingresarDatos(Datos *obj)
{	int longitud;
   char datoEntero[10],datoReal[20],datoCaracter[30];
   	str_cpy(datoCaracter,ingresocaracteres("\nOIngrese el nombre del trabajador: "));
   	this->setNombre(datoCaracter);
	do
	{
		str_cpy(datoEntero,ingresarDatosEnteros("\nIngrese la cedula del trabajador: "));
		id = funcion_atoi(datoEntero,strlen(datoEntero));
		longitud = strlen(datoEntero);
	} while(longitud!=10);
	
   	this->setId(id);
	
	str_cpy(datoReal,ingresoflotantes("\nIngrese el sueldo del trabajador: "));
	this->setSueldo(funcion_strtod(datoReal));
	
	str_cpy(datoEntero,ingresarDatosEnteros("\nIngrese el total de dias trabajados: "));
	this->setDiasTrabajados(funcion_atoi(datoEntero,strlen(datoEntero)));
	
	str_cpy(datoEntero,ingresarDatosEnteros("\nIngrese las horas al 100%: "));
	this->setHoras100(funcion_atoi(datoEntero,strlen(datoEntero)));

	str_cpy(datoEntero,ingresarDatosEnteros("\nIngrese las horas al 50%: "));
	this->setHoras50(funcion_atoi(datoEntero,strlen(datoEntero)));

}
