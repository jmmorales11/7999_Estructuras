/***********************************************************************
 * Module:  SobrecargaOperador.cpp
 * Author:  Jeimy
 * Modified: martes, 8 de noviembre de 2022 16:39:44
 * Purpose: Implementation of the class SobrecargaOperador
 ***********************************************************************/

#include "SobrecargaOperador.h"
#include <windows.h>
#include "validar.cpp"
using namespace std;

float SobrecargaOperador::getCuadrado(void)
{
   return cuadrado;
}


void SobrecargaOperador::setCuadrado(float newCuadrado)
{
   cuadrado = newCuadrado;
}

float SobrecargaOperador::getLado(void)
{
   return lado;
}


void SobrecargaOperador::setLado(float newLado)
{
   lado = newLado;
}


float SobrecargaOperador::getTriangulo(void)
{
   return triangulo;
}


void SobrecargaOperador::setTriangulo(float newTriangulo)
{
   triangulo = newTriangulo;
}


float SobrecargaOperador::getBase(void)
{
   return base;
}


void SobrecargaOperador::setBase(float newBase)
{
   base = newBase;
}


float SobrecargaOperador::getAltura(void)
{
   return altura;
}


void SobrecargaOperador::setAltura(float newAltura)
{
   altura = newAltura;
}


float SobrecargaOperador::getRectangulo(void)
{
   return rectangulo;
}


void SobrecargaOperador::setRectangulo(float newRectangulo)
{
   rectangulo = newRectangulo;
}


float SobrecargaOperador::getCirculo(void)
{
   return circulo;
}


void SobrecargaOperador::setCirculo(float newCirculo)
{
   circulo = newCirculo;
}


float SobrecargaOperador::getRadio(void)
{
   return radio;
}


void SobrecargaOperador::setRadio(float newRadio)
{
   radio = newRadio;
}


SobrecargaOperador::SobrecargaOperador(float cuadrado, float lado, float triangulo,float altura, float base, float rectangulo, float circulo, float radio)
{
   // TODO : implement
}

SobrecargaOperador::~SobrecargaOperador()
{
   // TODO : implement
}

SobrecargaOperador SobrecargaOperador::calcular_cuadrado(SobrecargaOperador obj)
{
   	SobrecargaOperador Obj1=obj*obj;
   	this->setCuadrado(obj.getCuadrado());
   	return *this;
}

SobrecargaOperador SobrecargaOperador::calculartriangulo(SobrecargaOperador obj)
{
   SobrecargaOperador Obj1=obj*obj;
   	this->setTriangulo(obj.getTriangulo());
   	return *this;
}


SobrecargaOperador SobrecargaOperador::calcularCirculo(SobrecargaOperador obj)
{
   SobrecargaOperador Obj1=obj*obj;
   	this->setCirculo(obj.getCirculo());
   	return *this;
}


SobrecargaOperador SobrecargaOperador::calcularRectangulo(SobrecargaOperador obj)
{
   SobrecargaOperador Obj1=obj*obj;
   	this->setRectangulo(obj.getRectangulo());
   	return *this;
}

void SobrecargaOperador::ingresar(SobrecargaOperador obj){
	 int figura,base1,radio;
	float lado, base,altura,radio1;
	char datoEntero[10],datoReal[10];
	do{
		cout<<"\nCALCULA EL AREA DE LAS SIGUIENTES FIGURAS"<<endl;
		cout<<"\n[1]  Cuadrado"<<"\n[2]  Triangulo"<<"\n[3]  Rectangulo"<<"\n[4]  circulo"<<"\n[0] Salir"<<endl;
		str_cpy(datoEntero,ingresarDatosEnteros("\n Ingrese el valor: "));
		figura=funcion_atoi(datoEntero,strlen(datoEntero));
		if(figura<=5 && figura >=1){
			cout<<"\nINGRESO DATO VALIDO"<<endl;
		}
		if(figura==0) {
			break;				
		}
		system("cls");
		
	
		switch(figura){
			
			case 1:
				
				cout<<"\n~~~~~~~~~~Calculár el area de un cuadrado~~~~~~~~~~~~~~~~~~"<<endl;
				str_cpy(datoReal,ingresoflotantes("REAL= Ingrese el valor del lado del cudrado:  "));
				lado=funcion_strtod(datoReal);
				obj.setLado(lado);
				obj.calcular_cuadrado(obj);
				cout<<"\nArea del cuadrado es: "<<obj.getCuadrado()<<" cm ^2"<<endl;
				break;
			case 2:
				cout<<"\n~~~~~~~~~~Calculár el area de un triangulo~~~~~~~~~~~~~~~~~~"<<endl;
				str_cpy(datoReal,ingresoflotantes("\nREAL= Ingrese el valor de la altura del triangulo:  "));
				altura=funcion_strtod(datoReal);
				obj.setAltura(altura);
				str_cpy(datoReal,ingresoflotantes("\nREAL= Ingrese el valor de la base del triangulo:  "));
				base=funcion_strtod(datoReal);
				obj.setBase(base);
				obj.calculartriangulo(obj);
				cout<<"\nArea del triangulo es: "<<obj.getTriangulo()<<" cm "<<endl;
				break;
			case 3:
				cout<<"\n~~~~~~~~~~Calculár el area de un rectangulo~~~~~~~~~~~~~~~~~~"<<endl;
				str_cpy(datoReal,ingresoflotantes("\nREAL= Ingrese el valor de la altura del rectangulo:  "));
				altura=funcion_strtod(datoReal);
				obj.setAltura(altura);
				str_cpy(datoReal,ingresoflotantes("\nREAL= Ingrese el valor de la base del rectangulo:  "));
				base=funcion_strtod(datoReal);
				obj.setBase(base);
				obj.calcularRectangulo(obj);
				cout<<"\nArea del Rectangulo es: "<<obj.getRectangulo()<<" cm "<<endl;
				break;	
			case 4:
				cout<<"\n~~~~~~~~~~Calculár el area de un circulo~~~~~~~~~~~~~~~~~~"<<endl;
				str_cpy(datoReal,ingresoflotantes("REAL= Ingrese el radio del circulo "));
				radio=funcion_strtod(datoReal);
				obj.setRadio(radio);
				obj.calcularCirculo(obj);
				cout<<"\nArea del circulo es: "<<obj.getCirculo()<<endl;
				break;	
		}
		
		return ingresar(obj);
	}while(figura>4 );
}
   
void SobrecargaOperador::imprimir(SobrecargaOperador obj){
   	
}
  
SobrecargaOperador SobrecargaOperador::operator *(SobrecargaOperador obj){
	this->circulo=obj.getRadio()*obj.getRadio()*3.14;
	this->cuadrado=obj.getLado()*obj.getLado();
	this->triangulo=( obj.getBase()*obj.getAltura())*0.5;
	this->rectangulo=obj.getBase()*obj.getAltura();
	return *this;
}
