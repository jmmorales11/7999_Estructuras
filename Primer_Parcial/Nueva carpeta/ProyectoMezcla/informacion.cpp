/***********************************************************************
 * Module:  informacion.cpp
 * Author:  Jeimy
 * Modified: sábado, 26 de noviembre de 2022 21:20:09
 * Purpose: Implementation of the class informacion
 ***********************************************************************/
 ///SIRVE

#include "informacion.h"
#include <sstream>
#include "validar.h"
#define iess 0.0945
#define interes 0.02

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

float informacion::getTotalIngreso(void)
{
   return totalIngreso;
}

void informacion::setTotalIngreso(float newTotalIngreso)
{
   totalIngreso = newTotalIngreso;
}
float informacion::getTotalEgreso(void)
{
   return totalEgresos;
}

void informacion::setTotalEgreso(float newTotalEgreso)
{
   totalEgresos = newTotalEgreso;
}

float informacion::getTotalEntrega(void)
{
   return totalEgresos;
}

void informacion::setTotalEntrega(float newTotalEntrega)
{
   totalEntrega = newTotalEntrega;
}

informacion::informacion(string nom, int cedula, float salario, int h100, int h50, float pres, float vh100, float vh50, float vPrestamo, float vIess, int dTrabajados,float totalI,float totalE, float totalPago):
nombre(nom),id(cedula),sueldoBase(salario),horas100(h100),horas50(h50),prestamo(pres),vhoras100(vh100),vhoras50(vh50),vprestamoMensual(vPrestamo),IESS(vIess),diasTrabajados(dTrabajados),totalIngreso(totalI),totalEgresos(totalE),totalEntrega(totalPago)
{


}


informacion::~informacion()
{
   // TODO : implement
}
informacion informacion::ingresarInformacion(informacion *obj)
{	int meses,id,longitud;
	char opc;
   	char datoEntero[10],datoReal[20],datoCaracter[20];
   	str_cpy(datoCaracter,ingresocaracteres("\nIngrese el nombre del trabajador: "));
   	this->setNombre(datoCaracter);
	do
	{
		str_cpy(datoEntero,ingresarDatosEnteros("\nIngrese la cedula del trabajador: "));
		id = funcion_atoi(datoEntero,strlen(datoEntero));
		longitud = strlen(datoEntero);
	} while(longitud!=10);
	
   	this->setId(id);
	
	str_cpy(datoReal,ingresoflotantes("\nIngrese el sueldo del trabajador: "));
	this->setSueldoBase(funcion_strtod(datoReal));
	
	str_cpy(datoEntero,ingresarDatosEnteros("\nIngrese el total de dias trabajados: "));
	this->setDiasTrabajados(funcion_atoi(datoEntero,strlen(datoEntero)));
	
	str_cpy(datoEntero,ingresarDatosEnteros("\nIngrese las horas al 100%: "));
	obj->setHoras100(funcion_atoi(datoEntero,strlen(datoEntero)));

	str_cpy(datoEntero,ingresarDatosEnteros("\nIngrese las horas al 50%: "));
	obj->setHoras50(funcion_atoi(datoEntero,strlen(datoEntero)));
	
	cout<<"\n Quiere un prestamo:";
	cin>>opc;
	if(opc=='s'||opc=='S'){
		str_cpy(datoReal,ingresoflotantes("\nIngrese la cantidad del prestamo:  \n"));
		this->setPrestamo(funcion_strtod(datoReal));
		str_cpy(datoEntero,ingresarDatosEnteros("\nIngrese el plazo de meses para pagar: "));
		meses=funcion_atoi(datoEntero,strlen(datoEntero));
		this->setVprestamoMensual(this->calcularCuota(obj,meses));
	}else{
		this->setPrestamo(0.0);
		this->setVprestamoMensual(0.0);
	}	
	this->setVhoras100(this->calcularHorasExtras100(obj));

	this->setVhoras50(this->calcularHorasExtras50(obj));
	this->setTotalIngreso(this->totalIngresos(obj));
	this->setIESS(this->aporteIess(obj));
	this->setTotalEgreso(this->totalEgreso(obj));
	this->setTotalEntrega(this->totalGanancia(obj));
	return *this;
}
float informacion::totalIngresos(informacion *t){
	return t->getSueldoBase()+t->calcularHorasExtras100(t)+t->calcularHorasExtras50(t);
}
float informacion::calcularHorasExtras100(informacion *t){

	return ((t->getSueldoBase()/240)*2)*t->getHoras100();
}
float informacion::calcularHorasExtras50(informacion *t){
	return ((t->getSueldoBase()/240)*1.5)*t->getHoras50();
}
float informacion::aporteIess(informacion *t){
	return t->totalIngresos(t)*iess;
}
float informacion::calcularCuota(informacion *t, int meses){
	return (t->getPrestamo()/meses*interes)+t->getPrestamo()/meses;
}
float informacion::totalEgreso(informacion *t){
	return t->getVprestamoMensual()+t->getIESS();
}
float informacion::totalGanancia(informacion *t){
	return t->getTotalIngreso()-t->getTotalEgreso();
}
///////////////////////////////////////////////////////////////////////////////////////////

string informacion::toString(){
	stringstream s;
	
	s<<"\n-----------------------------------------------------"<<endl;
	s<<"\nNombre                     \t\t"<<nombre<<endl;
	s<<"cedula                       \t\t"<<id<<endl;
	s<<"\n	>> Informativo";	
	
    s<<"\nNumero de horas Extras 100%\t\t"<<horas100<<endl;
    s<<"Numero de horas Extras 50%   \t\t"<<horas50<<endl;
    s<<"Dias trabajados              \t\t"<<diasTrabajados<<endl;
    s<<"Prestamo                     \t\t"<<prestamo<<endl;
    s<<"Sueldo base                  \t\t"<<sueldoBase<<endl;
    s<<"\n	>> Ingreso";
    s<<"\nSueldo Ganado              \t\t"<<sueldoBase<<endl;
    s<<"Valor HE 100%                \t\t"<<vhoras100<<endl;
    s<<"Valor HE 50%                 \t\t"<<vhoras50<<endl;
    s<<"\n             		Total Ingreso  "<<totalIngreso<<endl;
    s<<"\n	>> Egreso"<<endl;
    s<<"Aporte IESS                  \t\t"<<IESS<<endl;
    s<<"Prestamo                     \t\t"<<vprestamoMensual <<endl;
    s<<"\n                  Total Egreso   "<<totalEgresos<<endl;
    s<<"\n_________________________________________________"<<endl;
    s<<"\n Total del Empleado  "<<nombre<<"\t"<<totalEntrega<<endl;
	/*
   // s<<"               \t\tTotal'Ingreso'  "<<obj.totalIngresos(obj)<<endl;
    s<<"\n>Egreso";
    s<<"\nAporte IESS                   \t\t"<<obj.aporteIess(obj)<<endl;
    s<<"\nPrestamo                      \t\t"<<obj.calcularCuota(obj)<<endl;
    s<<"               \t\t Total'Egreso'  "<<obj.totalEgresos(obj)<<endl;
    s<<"      \t\t Total empleado'"<<obj.getNombre()<<"'  "<<obj.totalGanancia(obj)<<endl;
   s<<"\n------------------------------------------------------"<<endl;
   s<<"             \t\t Recibi Conforme CI "<<obj.getId()<<endl;*/
   s<<"\n-----------------------------------------------------\n\n"<<endl;
   return s.str();
}
