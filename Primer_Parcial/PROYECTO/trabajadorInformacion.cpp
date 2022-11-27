/***********************************************************************
 * Module:  trabajadorInformacion.cpp
 * Author:  Jeimy
 * Modified: martes, 22 de noviembre de 2022 21:55:32
 * Purpose: Implementation of the class trabajadorInformacion
 ***********************************************************************/

#include "trabajadorInformacion.h"
#include "validar.h"
#define iess 0.0945
#define interes 0.02
int trabajadorInformacion::getMeses(){
	return meses;
}

void trabajadorInformacion::setMeses(int newMeses){
	meses=newMeses;
}

char* trabajadorInformacion::getNombre()
{
	return nombre;
}

void trabajadorInformacion::setNombre(char* newNombre)
{
	nombre = newNombre;
}

int trabajadorInformacion::getId()
{
	return id;
}

void trabajadorInformacion::setId(int newId)
{
	id = newId;
}

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
	char opc;
   	char datoEntero[10],datoReal[20],datoCaracter[20];
   	str_cpy(datoCaracter,ingresocaracteres("\nIngrese el nombre del trabajador: "));
   	this->setNombre(datoCaracter);
	str_cpy(datoEntero,ingresarDatosEnteros("\nIngrese la cedula del trabajador: "));
   	this->setId(funcion_atoi(datoEntero,strlen(datoEntero)));
	str_cpy(datoReal,ingresoflotantes("\nIngrese el sueldo del trabajador: "));
	this->setSueldoBase(funcion_strtod(datoReal));
	str_cpy(datoEntero,ingresarDatosEnteros("\nIngrese el total de dias trabajados: "));
	this->setDiasTrabajados(funcion_atoi(datoEntero,strlen(datoEntero)));
	str_cpy(datoEntero,ingresarDatosEnteros("\nIngrese las horas al 100%: "));
	this->setHorasExtras100(funcion_atoi(datoEntero,strlen(datoEntero)));
	str_cpy(datoEntero,ingresarDatosEnteros("\nIngrese las horas al 50%: "));
	this->setHorasExtras50(funcion_atoi(datoEntero,strlen(datoEntero)));
	cout<<"Quiere un prestamo s/n";
	cin>>opc;
	if(opc=='s'||opc=='S'){
		str_cpy(datoReal,ingresoflotantes("\nIngrese la cantidad del prestamo:  \n"));
		this->setPrestamo(funcion_strtod(datoReal));
		str_cpy(datoEntero,ingresarDatosEnteros("\nIngrese el plazo de meses para pagar: "));
		this->setMeses(funcion_atoi(datoEntero,strlen(datoEntero)));
	}else{
		this->setPrestamo(0.0);
	}	
	
	return *this;
}


void trabajadorInformacion::mostrarInformacion(trabajadorInformacion obj)
{
   cout<<"\n> Informativo";	
   cout<<"\nNumero de horas Extras 100%\t\t"<<obj.getHorasExtras100()<<endl;
   cout<<"Numero de horas Extras 50%   \t\t"<<obj.getHorasExtras50()<<endl;
   cout<<"Dias trabajados              \t\t"<<obj.getDiasTrabajados()<<endl;
   cout<<"Prestamo                     \t\t"<<obj.getPrestamo()<<endl;
   cout<<"Sueldo base                  \t\t"<<obj.getSueldoBase()<<endl;
   cout<<"\n> Ingreso";
   cout<<"\nSueldo Ganado              \t\t"<<obj.getSueldoBase()<<endl;
   cout<<"Valor HE 100%                \t\t"<<obj.calcularHorasExtras100(obj)<<endl;
   cout<<"Valor HE 50%                 \t\t"<<obj.calcularHorasExtras50(obj)<<endl;
   cout<<"               \t\tTotal'Ingreso'  "<<obj.totalIngresos(obj)<<endl;
   cout<<"\n>Egreso";
   cout<<"\nAporte IESS                   \t\t"<<obj.aporteIess(obj)<<endl;
   cout<<"\nPrestamo                      \t\t"<<obj.calcularCuota(obj)<<endl;
   cout<<"               \t\t Total'Egreso'  "<<obj.totalEgresos(obj)<<endl;
   cout<<"      \t\t Total empleado'"<<obj.getNombre()<<"'  "<<obj.totalGanancia(obj)<<endl;
   cout<<"\n------------------------------------------------------"<<endl;
   cout<<"             \t\t Recibi Conforme CI "<<obj.getId()<<endl;
   
}

float trabajadorInformacion::calcularHorasExtras100(trabajadorInformacion t){
	return (t.getSueldoBase()/240)*2*t.getHorasExtras100();
}

float trabajadorInformacion::calcularHorasExtras50(trabajadorInformacion t){
	return (t.getSueldoBase()/240)*1.5*t.getHorasExtras50();
}

float trabajadorInformacion::aporteIess(trabajadorInformacion t){
	return t.totalIngresos(t)*iess;
}

float trabajadorInformacion::totalIngresos(trabajadorInformacion t){
	return t.getSueldoBase()+t.calcularHorasExtras100(t)+t.calcularHorasExtras50(t);
}

float trabajadorInformacion::totalEgresos(trabajadorInformacion t){
	return t.calcularCuota(t)+t.aporteIess(t);
}

float trabajadorInformacion::totalGanancia(trabajadorInformacion t){
	return t.totalIngresos(t)-t.totalEgresos(t);
}

float trabajadorInformacion::calcularCuota(trabajadorInformacion t){
	return (t.getPrestamo()/t.getMeses()*interes)+t.getPrestamo()/t.getMeses();
}