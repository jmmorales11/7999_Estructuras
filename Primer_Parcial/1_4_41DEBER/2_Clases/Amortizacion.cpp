/***********************************************************************
 * Module:  Amortizacion.cpp
 * Author:  Jeimy
 * Modified: domingo, 6 de noviembre de 2022 12:56:50
 * Purpose: Implementation of the class Amortizacion
 ***********************************************************************/

#include "Amortizacion.h"
#include "Amortizacion.h"
#include "validar.cpp"
//#include <clocale>


float Amortizacion::getCPrestamo(void)
{
   return cPrestamo;
}


void Amortizacion::setCPrestamo(float newCPrestamo)
{
   cPrestamo = newCPrestamo;
}


int Amortizacion::getMeses(void)
{
   return meses;
}


void Amortizacion::setMeses(int newMeses)
{
   meses = newMeses;
}


int Amortizacion::getInteresMensual(void)
{
   return interesMensual;
}


void Amortizacion::setInteresMensual(int newInteresMensual)
{
   interesMensual = newInteresMensual;
}


int Amortizacion::getDia(void)
{
   return dia;
}


void Amortizacion::setDia(int newDia)
{
   dia = newDia;
}

int Amortizacion::getMes(void)
{
   return mes;
}


void Amortizacion::setMes(int newMes)
{
   mes = newMes;
}


int Amortizacion::getAnio(void)
{
   return anio;
}


void Amortizacion::setAnio(int newAnio)
{
   anio = newAnio;
}


float Amortizacion::getInteresPrestamo(void)
{
   return interesPrestamo;
}


void Amortizacion::setInteresPrestamo(float newInteresPrestamo)
{
   interesPrestamo = newInteresPrestamo;
}


float Amortizacion::getSaldo(void)
{
   return saldo;
}


void Amortizacion::setSaldo(float newSaldo)
{
   saldo = newSaldo;
}


float Amortizacion::getAmortizacion(void)
{
   return amortizacion;
}


void Amortizacion::setAmortizacion(float newAmortizacion)
{
   amortizacion = newAmortizacion;
}


float Amortizacion::getCuota(void)
{
   return cuota;
}


void Amortizacion::setCuota(float newCuota)
{
   cuota = newCuota;
}


Amortizacion::Amortizacion(float cPrestamo, int meses, int interesMensual, int dia, int mes, int anio, float interesPrestamo, float saldo, float amortizacion, float cuota)
{
   this->cPrestamo=cPrestamo;
   this->meses=meses;
   this->interesMensual=interesMensual;
   this->dia=dia;
   this->mes=mes;
   this->anio=anio;
   this->interesPrestamo=interesPrestamo;
   this->saldo=saldo;
   this->amortizacion=amortizacion;
   this->cuota=cuota;
}


Amortizacion::~Amortizacion()
{
   // TODO : implement
}


float Amortizacion::calcularInteres(Amortizacion obj)
{
	///obj.setSaldo(obj.CalcularSaaldo(obj));
	//cout<<"NUEVO SALDO "<<obj.getSaldo()<<endl;
   Amortizacion obj1= obj*obj;
    this->setInteresPrestamo(obj.getInteresPrestamo());
   return obj.getInteresPrestamo();
}


float Amortizacion::calcularAmortizacion(Amortizacion obj)
{
   Amortizacion obj2= obj/obj;
	this->setAmortizacion(obj.getAmortizacion());
	return obj.getAmortizacion();
}


float Amortizacion::calcularCuota(Amortizacion obj)
{
   Amortizacion obj3= obj+obj;
   this->setCuota(obj3.getCuota());
   return obj3.getCuota();
}



float Amortizacion::CalcularSaaldo(Amortizacion obj)
{
   Amortizacion obj2=obj-obj;
   this->setSaldo(obj.getSaldo());
   return obj.getSaldo();
}


Amortizacion Amortizacion::ingresar(void)
{
 
	int anio,mes,dia, interes,meses;
	float prestamo;
	char datoEntero[10],datoReal[10];
	/////INGRESAR FECHA////
	printf("~~~~~~~~Ingrese la fecha actual~~~~~~~");
	do{
		str_cpy(datoEntero,ingresarDatosEnteros("\nIngrese el año actual: "));
		anio=funcion_atoi(datoEntero,strlen(datoEntero));
	}while(anio!=2022);
	this->setAnio(anio);
	do{
		str_cpy(datoEntero,ingresarDatosEnteros("\nIngrese el mes                                    ~~ \n [1] Enero [2] Febrero [3] Marzo...\n"));
		mes=funcion_atoi(datoEntero,strlen(datoEntero));
	}while (mes>12 );
	this->setMes(mes);
	if (mes==1 || mes==3||mes==5 || mes==7||mes==8||mes==10||mes==12){
		do{
			printf("\nAdmite hasta el 31 dias");
		str_cpy(datoEntero,ingresarDatosEnteros("\nIngrese el dia:  "));
		dia=funcion_atoi(datoEntero,strlen(datoEntero));
	}while (dia>31 );
	this->setDia(dia);
	}else if(mes==4||mes==6||mes==9||mes==11){
		do{
			printf("\nAdmite hasta 30 dias");
		str_cpy(datoEntero,ingresarDatosEnteros("\nIngrese el dia:  "));
		dia=funcion_atoi(datoEntero,strlen(datoEntero));
	}while (dia>30 );
	this->setDia(dia);
	}else if (mes==2){
		if(anio % 400==0){
			do{
				printf("\nAdmite hasta 29 dias");
			str_cpy(datoEntero,ingresarDatosEnteros("\nIngrese el dia:  "));
			dia=funcion_atoi(datoEntero,strlen(datoEntero));
			}while (dia>29 );
			this->setDia(dia);
		}else{
			printf("\nAdmite hasta  28 dias");
			str_cpy(datoEntero,ingresarDatosEnteros("\nIngrese el dia:  "));
			dia=funcion_atoi(datoEntero,strlen(datoEntero));
		}while (dia>28 );
			this->setDia(dia);
		}
	//INGRESAR DATOS//
	printf("\n\n~~~~~~Ingrese la informacion solicitada~~~~~~");
	//ingresoflotantes("\n Ingrese el valor del prestamo");
		str_cpy(datoReal,ingresoflotantes("\nIngrese el valor del prestamo:  "));
		prestamo=funcion_strtod(datoReal);
		this->setCPrestamo(prestamo);
		str_cpy(datoEntero,ingresarDatosEnteros("\nIngrese el interes:  "));
		interes=funcion_atoi(datoEntero,strlen(datoEntero));
		this->setInteresMensual(interes);
		str_cpy(datoEntero,ingresarDatosEnteros("\nIngrese los meses plazo:  "));
		meses=funcion_atoi(datoEntero,strlen(datoEntero));
		this->setMeses(meses);
		return *this;
}


void Amortizacion::diaPago(Amortizacion obj)
{
	int dia, mes, anio;
	dia=obj.getDia();
	mes=obj.getMes();
	anio=obj.getAnio();
	if (mes==12){
		anio=obj.getAnio()+1;
		mes-= obj.getMes();
		mes++;
	}else if(mes<=12){
		mes++;
		 
	}
	this->setDia(dia);
		this->setMes(mes);
		this->setAnio(anio);
	
}


void Amortizacion::imprimir(Amortizacion obj)
{
	//   float interes=0;
  // float amortizacion=0;
//   float saldo=0;
   //float cuota=0;
   int acum=0;
	float prestamo,inprestamo,saldo, amortizacion, cuota;
	int meses,interes,dia,an;
	char mes;
	Amortizacion *obj1= new Amortizacion(prestamo,meses,interes,dia,mes,an,inprestamo,saldo,amortizacion, cuota);

	system("cls");
   cout<<"\n\n~~~~~~~~~~~~~~Informacion de la Amortizacion~~~~~~~~~"<<endl;
   
   cout<<"Fecha realizada:  "<<obj.getDia()<<" / "<<obj.getMes()<<" / "<<obj.getAnio()<<endl;
   cout<<"Cantidad del prestamo: "<<obj.getCPrestamo()<<endl;
   cout<<"Meses plazo:  "<< obj.getMeses()<<" meses"<<endl;
   cout<<"Interes: "<< obj.getInteresMensual()<<" %"<<endl;
   obj.setSaldo(obj.getCPrestamo());
   cout<<"________________________________________Cuotas a pagar_____________________________________ "<<endl;
   cout<<"  Periodo  "<< "    Fecha     "<< "  interes  "<< "      Amortizacion del capital "<<"   Cuota   "<< "     Capital pendiente"<<endl;
   cout<<"    "<<acum<<"        "<<obj.getDia()<<" / "<<obj.getMes()<<" / "<<obj.getAnio()<<"   "<<"                                                            "<<obj.getCPrestamo()<<endl;
   do{
   	obj.diaPago(obj);
   	obj.calcularInteres(obj);
   	obj.calcularAmortizacion(obj);
   	obj.calcularCuota(obj);
   	obj.CalcularSaaldo(obj);
   	
   	acum++;
  	cout<<"    "<<acum<<"        "<<obj.getDia()<<" / "<<obj.getMes()<<" / "<<obj.getAnio()<<"    "<<obj.getInteresPrestamo()<<"                 ";
	cout<<obj.getAmortizacion()<<"                  ";
	cout<<obj.getCuota()<<"         "<<"        "<<obj.getSaldo()<<endl;
	
   }while(acum<obj.getMeses());
}
//Sobrecarga de operadores
Amortizacion Amortizacion::operator * ( Amortizacion opr)
{
	//opr.setInteresMensual(opr.getInteresMensual()*0.01);
	this->interesPrestamo = (0.01*opr.getInteresMensual())*opr.getSaldo();
	return *this;
}

Amortizacion Amortizacion::operator / ( Amortizacion opr)
{
	this->amortizacion= opr.getCPrestamo()/opr.getMeses();
	return *this;
}
Amortizacion Amortizacion::operator + ( Amortizacion opr)
{
	this->cuota=opr.getAmortizacion()+opr.getInteresPrestamo();
	return *this;
}
Amortizacion Amortizacion::operator - ( Amortizacion opr)
{
	float a;
	this->saldo=opr.getSaldo()-opr.getAmortizacion();
	//this->calcularCuota(opr) =opr.calcularCuota(opr)-a;
//	this->interesPrestamo=opr.getInteresPrestamo()-a;
	return *this;
}

