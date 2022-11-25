/***********************************************************************
 * Module:  trabajadorInformacion.cpp
 * Author:  Jeimy
 * Modified: martes, 22 de noviembre de 2022 21:55:32
 * Purpose: Implementation of the class trabajadorInformacion
 ***********************************************************************/

#include "trabajadorInformacion.h"
#include "validar.h"
#define iess 9.45
float trabajadorInformacion::getSueldoBase(void)
{
   return sueldoBase;
}


void trabajadorInformacion::setSueldoBase(float newSueldoBase)
{
   sueldoBase = newSueldoBase;
}

int trabajadorInformacion::getDiasTrabajados(void)
{
   return diasTrabajados;
}

void trabajadorInformacion::setDiasTrabajados(int newDiasTrabajados)
{
   diasTrabajados = newDiasTrabajados;
}


int trabajadorInformacion::getHorasExtras100(void)
{
   return horasExtras100;
}



void trabajadorInformacion::setHorasExtras100(int newHorasExtras100)
{
   horasExtras100 = newHorasExtras100;
}



int trabajadorInformacion::getHorasExtras50(void)
{
   return horasExtras50;
}


void trabajadorInformacion::setHorasExtras50(int newHorasExtras50)
{
   horasExtras50 = newHorasExtras50;
}



float trabajadorInformacion::getPrestamo(void)
{
   return prestamo;
}



void trabajadorInformacion::setPrestamo(float newPrestamo)
{
   prestamo = newPrestamo;
}



trabajadorInformacion::trabajadorInformacion(float sueldoBase,int diasTrabajados, int horasExtras100,int horasExtras50, float prestamo)
{
	this->sueldoBase=sueldoBase;
	this->diasTrabajados=diasTrabajados;
	this->horasExtras100=horasExtras100;
	this->horasExtras50=horasExtras50;
	this->prestamo=prestamo;
}


trabajadorInformacion::~trabajadorInformacion()
{
   // TODO : implement
}



trabajadorInformacion trabajadorInformacion::ingresarInformacion(trabajadorInformacion obj)
{
   	char datoEntero[10],datoReal[20];
   	str_cpy(datoReal,ingresoflotantes("\nIngrese el sueldo del trabajador: "));
	this->setSueldoBase(funcion_strtod(datoReal));
	str_cpy(datoEntero,ingresarDatosEnteros("\nIngrese el total de dias trabajados: "));
	this->setDiasTrabajados(funcion_atoi(datoEntero,strlen(datoEntero)));
	str_cpy(datoEntero,ingresarDatosEnteros("\nIngrese las horas al 100%: "));
	this->setHorasExtras100(funcion_atoi(datoEntero,strlen(datoEntero)));
	str_cpy(datoEntero,ingresarDatosEnteros("\nIngrese las horas al 50%: "));
	this->setHorasExtras50(funcion_atoi(datoEntero,strlen(datoEntero)));
	str_cpy(datoReal,ingresoflotantes("\nIngrese la cantidad del prestamo:  \n"));
	this->setPrestamo(funcion_strtod(datoReal));
	return *this;
}


void trabajadorInformacion::mostrarInformacion(trabajadorInformacion obj)
{
   cout<<"\n> Informativo";	
   cout<<"\nNumero de horas Extras 100%\t\t"<<obj.getHorasExtras100()<<endl;
   cout<<"Numero de horas Extras 50%\t\t"<<obj.getHorasExtras50()<<endl;
   cout<<"Dias trabajados\t\t"<<obj.getDiasTrabajados()<<endl;
   cout<<"Prestamo\t\t"<< obj.getPrestamo()<<endl;
   cout<<"Sueldo base\t\t"<<obj.getSueldoBase()<<endl;
   cout<<"\n> Ingreso";
   cout<<"Sueldo Ganado\t\t"<<obj.getSueldoBase()<<endl;
   cout<<"Valor HE 100%\t\t"<<obj.calcularHorasExtras100(obj)<<endl;
   cout<<"Valor HE 50%\t\t"<<obj.calcularHorasExtras50(obj)<<endl;
   
}

float trabajadorInformacion::calcularHorasExtras100(trabajadorInformacion t){
	return (t.getSueldoBase()/240)*2*t.getHorasExtras100();
}

float trabajadorInformacion::calcularHorasExtras50(trabajadorInformacion t){
	return (t.getSueldoBase()/240)*1.5*t.getHorasExtras50();
}

float trabajadorInformacion::aporteIess(trabajadorInformacion t){
	return t.getSueldoBase()*iess;
}
float trabajadorInformacion::totalIngresos(trabajadorInformacion t){
	return t.getSueldoBase()+t.calcularHorasExtras100(t)+t.calcularHorasExtras50(t);
}