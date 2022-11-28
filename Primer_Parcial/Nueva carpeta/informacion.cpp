/***********************************************************************
 * Module:  informacion.cpp
 * Author:  Jeimy
 * Modified: sábado, 26 de noviembre de 2022 21:20:09
 * Purpose: Implementation of the class informacion
 ***********************************************************************/

#include "informacion.h"
#include <sstream>

string informacion::getNombre(void)
{
   return nombre;
}


void informacion::setNombre(string newNombre)
{
   nombre = newNombre;
}



int informacion::getId(void)
{
   return id;
}


void informacion::setId(int newId)
{
   id = newId;
}


float informacion::getSueldoBase(void)
{
   return sueldoBase;
}


void informacion::setSueldoBase(float newSueldoBase)
{
   sueldoBase = newSueldoBase;
}



int informacion::getHoras100(void)
{
   return horas100;
}



void informacion::setHoras100(int newHoras100)
{
   horas100 = newHoras100;
}


int informacion::getHoras50(void)
{
   return horas50;
}



void informacion::setHoras50(int newHoras50)
{
   horas50 = newHoras50;
}



float informacion::getPrestamo(void)
{
   return prestamo;
}


void informacion::setPrestamo(float newPrestamo)
{
   prestamo = newPrestamo;
}


float informacion::getVhoras100(void)
{
   return vhoras100;
}


void informacion::setVhoras100(float newVhoras100)
{
   vhoras100 = newVhoras100;
}


float informacion::getVhoras50(void)
{
   return vhoras50;
}


void informacion::setVhoras50(float newVhoras50)
{
   vhoras50 = newVhoras50;
}
//////

float informacion::getVprestamoMensual(void)
{
   return vprestamoMensual;
}


void informacion::setVprestamoMensual(float newVprestamoMensual)
{
   vprestamoMensual = newVprestamoMensual;
}


float informacion::getIESS(void)
{
   return IESS;
}


void informacion::setIESS(float newIESS)
{
   IESS = newIESS;
}



int informacion::getDiasTrabajados(void)
{
   return diasTrabajados;
}



void informacion::setDiasTrabajados(int newDiasTrabajados)
{
   diasTrabajados = newDiasTrabajados;
}



informacion::informacion(string nom, int cedula, float salario, int h100, int h50, float pres, float vh100, float vh50, float vPrestamo, float vIess, int dTrabajados):
nombre(nom),id(cedula),sueldoBase(salario),horas100(h100),horas50(h50),prestamo(pres),vhoras100(vh100),vhoras50(vh50),vprestamoMensual(vPrestamo),IESS(vIess),diasTrabajados(dTrabajados)
{
   

}


informacion::~informacion()
{
   // TODO : implement
}
string informacion::toString(){
	stringstream s;
	s<<"\nNombre                     \t\t"<<nombre<<endl;
	s<<"\ncedula                     \t\t"<<id<<endl;
	s<<"\n> Informativo";	
	
    s<<"\nNumero de horas Extras 100%\t\t"<<horas100<<endl;
    s<<"Numero de horas Extras 50%   \t\t"<<horas50<<endl;
    s<<"Dias trabajados              \t\t"<<diasTrabajados<<endl;
    s<<"Prestamo                     \t\t"<<prestamo<<endl;
    s<<"Sueldo base                  \t\t"<<sueldoBase<<endl;
    s<<"\n> Ingreso";
    s<<"\nSueldo Ganado              \t\t"<<sueldoBase<<endl;
    s<<"Valor HE 100%                \t\t"<<vhoras100<<endl;
    s<<"Valor HE 50%                 \t\t"<<vhoras50<<endl;
	/*
   // s<<"               \t\tTotal'Ingreso'  "<<obj.totalIngresos(obj)<<endl;
    s<<"\n>Egreso";
    s<<"\nAporte IESS                   \t\t"<<obj.aporteIess(obj)<<endl;
    s<<"\nPrestamo                      \t\t"<<obj.calcularCuota(obj)<<endl;
    s<<"               \t\t Total'Egreso'  "<<obj.totalEgresos(obj)<<endl;
    s<<"      \t\t Total empleado'"<<obj.getNombre()<<"'  "<<obj.totalGanancia(obj)<<endl;
   s<<"\n------------------------------------------------------"<<endl;
   s<<"             \t\t Recibi Conforme CI "<<obj.getId()<<endl;*/
   return s.str();
}
