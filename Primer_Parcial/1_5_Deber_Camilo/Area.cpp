/***********************************************************************
 * UFA-ESPE
 * Autores:  Jeimy Marley Morales Sosa & Camilo Andres Orrico Emme 
 * Modificacion: martes, 8 de noviembre de 2022 18:55:59
 * Purpose: Implementation of the class DatosPersonales
 *Nivel: Tercero           NRC:7999
 ***********************************************************************/

#include "Area.h"
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
using namespace std;
void ingresar(void);

Area::Area(double lado, double base, float altura, float radio1, float radio2)
{
   this->altura = altura;
   this->base = base;
   this->lado = lado;
   this->radio1 = radio1;
   this->radio2 = radio2;
}
Area::Area(double lado){
	this->lado;
}
Area::Area(float altura, double base){
	
}
Area::~Area()
{

}

double Area::getBase(void)
{
   return base;
}
void Area::setBase(double newBase)
{
   base = newBase;
}

float Area::getAltura(void)
{
   return altura;
}

void Area::setAltura(float newAltura)
{
   altura = newAltura;
}

double Area::getLado(void)
{
   return lado;
}

void Area::setLado(double newLado)
{
   lado = newLado;
}

float Area::getRadio1(void)
{
   return radio1;
}

void Area::setRadio1(float newRadio1)
{
   radio1 = newRadio1;
}

float Area::getRadio2(void)
{
   return radio2;
}

void Area::setRadio2(float newRadio2)
{
   radio2 = newRadio2;
}

void Area::ingresar(void)
{
	double base, lado;
	float altura, radio1, radio2;
	int opcion;
   do{
   	cout<<"Elija la operacion a realizar: \n";
   cout<<"[1]Area de un triangulo \n";
   cout<<"[2]Area de un cuadrado \n";
   cout<<"[3]Area de un circulo \n";
   cout<<"[4]Area de un rectangulo \n";
   cout<<"[5]Area de un ovalo \n";
   cout<<"[6]Salir \n";
   	cin>>opcion;
   	system("cls");
   	if (opcion==6){
   		break;
	   }
   	switch(opcion)
   {
   		case 1:
	   		cout<<"Ingrese la base del triangulo: \n";
	   		cin>>base;
	   		this->setBase(base);
	   		cout<<"Ingrese la altura: \n";
	   		cin>>altura;
	   		this->setAltura(altura);
	   		cout<<"El area del triangulo es: "<<calcularArea(base, altura)<<"\n";
	   		break;
		case 2:
			cout<<"Ingrese uno de los lados del cuadrado: \n";
			cin>>lado;
			this->setLado(lado);
			cout<<"El area del cuadrado es: "<<calcularArea(lado)<<"\n";
			break;
		case 3:
			cout<<"Ingrese el radio del circulo: \n";
			cin>>radio1;
			this->setRadio1(radio1);
			cout<<"El area del circulo: "<<calcularArea(radio1)<<"\n";
			break;
		case 4:
			cout<<"Ingrese la altura del rectangulo \n";
			cin>>altura;
			this->setAltura(altura);
			cout<<"Ingrese la base: \n";
			cin>>base;
			this->setBase(base);
			cout<<"El area del rectangulo: "<<calcularArea(altura,base)<<"\n";
			break;
		case 5:
			cout<<"Ingrese el radio 1 del ovalo: \n";
			cin>>radio1;
			this->setRadio1(radio1);
			cout<<"Ingrese el radio 2 del ovalo: \n";
			cin>>radio2;
			this->setRadio1(radio2);
			cout<<"El area del ovalo: "<<calcularArea(radio1,radio2)<<"\n";
			break;

   }   
   return ingresar();
} while(opcion > 6);
}
float Area::calcularArea(double base,float altura)//triangulo
{
   return (base*altura)/2;
}

float Area::calcularArea(double lado)//cuadrado
{
   return lado*lado;
}

float Area::calcularArea(float radio1)//circulo
{
   return radio1*radio1*3.14;
}

float Area::calcularArea(float altura,double base)//rectangulo
{
   return altura*base;
}

float Area::calcularArea(float radio1,float radio2)//ovalo
{
   return radio1*radio2*3.14;
}
