/***********************************************************************
 * Module:  Fecha.cpp
 * Author:  sebas
 * Modified: miércoles, 14 de diciembre de 2022 8:56:01
 * Purpose: Implementation of the class Fecha
 ***********************************************************************/

#include "Fecha.h"
#include <ctime>
#include <sstream>
#include <string>
#include <iostream>
#include "ValidacionDatos.cpp"

using namespace std;

Fecha::Fecha(short d,short m, short  a)
{
	this->m_anio=a;
	this->m_dia = d;
	this->m_mes=m;
}
Fecha::Fecha()
{
}

Fecha::~Fecha()
{
   // TODO : implement
}

short Fecha::getDia(void)
{
   return m_dia;
}

void Fecha::setDia(short newDia)
{
   m_dia = newDia;
}

short Fecha::getMes(void)
{
   return m_mes;
}

void Fecha::setMes(short newMes)
{
   m_mes = newMes;
}

short Fecha::getAnio(void)
{
   return m_anio;
}

void Fecha::setAnio(short newAnio)
{
   m_anio = newAnio;
}
bool Fecha::validarAnio(int anio){
	bool validacion{};
	if(anio % 4 != 0 || (anio % 100 == 0 && anio % 400 != 0)){
		validacion = false;
	}else{
		validacion = true;
	}
	return validacion;
}
int Fecha::validarFecha(int dia,int mes,int anio){
	ValidacionDatos validar;
	
	char diaC[10];
	switch (mes)
	{
	case 1:
		while(dia>31 || dia<1){
		
		setDia(validar.casteoEnteros(diaC,"\nIngrese una fecha que no sobrepase a 31 de Enero: "));
		}
		break;
	case 2:
		if(this->validarAnio(anio)){
		while(dia>29 || dia<1){
		dia=validar.casteoEnteros(diaC,"\nIngrese una fecha que no sobrepase a 29 de Febrero: ");
		setDia(dia);
		}
		}else{
		while(dia>28 || dia<1){
		dia=validar.casteoEnteros(diaC,"\nIngrese una fecha que no sobrepase a 28 de Febrero: ");
		setDia(dia);
		}}
		break;
	case 3:
		while(dia>31 || dia<1){
			dia=validar.casteoEnteros(diaC,"\nIngrese una fecha que no sobrepase a 31 de Marzo: "),
		setDia(dia);
		}
		break;
	case 4:
		while(dia>30 || dia<1){
			dia=validar.casteoEnteros(diaC,"\nIngrese una fecha que no sobrepase a 30 de Abril: ");
		setDia(dia);
		}
		break;
	case 5:
		while(dia>31 || dia<1){
			dia=validar.casteoEnteros(diaC,"\nIngrese una fecha que no sobrepase a 31 de Mayo: ");
		setDia(dia);
		}
		break;
	case 6:
		while(dia>30 || dia<1){
			dia=validar.casteoEnteros(diaC,"\nIngrese una fecha que no sobrepase a 30 de Junio: ");
		setDia(dia);
		}
		break;
	case 7:
		while(dia>31 || dia<1){
			dia=validar.casteoEnteros(diaC,"\nIngrese una fecha que no sobrepase a 31 de Julio: ");
		setDia(dia);
		}
		break;
	case 8:
		while(dia>31 || dia<1){
			dia=validar.casteoEnteros(diaC,"\nIngrese una fecha que no sobrepase a 31 de Agosto: ");
		setDia(dia);
		}
		break;
	case 9:
		while(dia>30 || dia<1){
			dia=validar.casteoEnteros(diaC,"\nIngrese una fecha que no sobrepase a 30 de Septiembre: ");
		setDia(dia);
		}
		break;
	case 10:
		while(dia>31 || dia<1){
			dia=validar.casteoEnteros(diaC,"\nIngrese una fecha que no sobrepase a 31 de Octubre: ");
		setDia(dia);
		}
		break;
	case 11:
		while(dia>30 || dia<1){
			dia=validar.casteoEnteros(diaC,"\nIngrese una fecha que no sobrepase a 30 de Noviembre: ");
		setDia(dia);
		}
		break;
	case 12:
		while(dia>31 || dia<1){
			dia=validar.casteoEnteros(diaC,"\nIngrese una fecha que no sobrepase a 31 de Diciembre: ");
		setDia(dia);
		}
		break;                              
	default:
	std::cout<<"\nEl mes ingresado es erroneo";
		break;
	}
    return getDia();
}

void Fecha::ingresarFecha() 
{
	ValidacionDatos validar;
	int dia,anio,mes;
	bool vAnio=true,vMes=true;
	char diaC[10],mesC[10],anioC[10];
	time_t t = time(NULL);
    tm* timePtr = localtime(&t);
	int edad{};
  	int year = timePtr->tm_year + 1900;
	do{
		anio=validar.casteoEnteros(anioC,"\nIngrese el anio: ");
		if(anio>year){
			cout<<"\nError el anio ingresado sobrepasa el limite del anio actual."<<endl;
			
		}else{
			vAnio=false;
		}
	}while(vAnio);
	setAnio(anio);
	vAnio=true;
	cout<<"\n";
	do{
		mes=validar.casteoEnteros(mesC,"\nIngrese el mes: ");
		if(mes<1 || mes>12){
		cout<<"\nError ingrese correctamente el mes."<<endl;	
		}else{
			vMes=false;
		}
	}while(vMes);
	setMes(mes);
	vMes=true;
	cout<<"\n";
	setDia(dia=validar.casteoEnteros(diaC,"\nIngrese el dia: "));
	validarFecha(getDia(),getMes() ,getAnio());
}


