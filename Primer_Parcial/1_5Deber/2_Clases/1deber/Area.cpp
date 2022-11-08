/***********************************************************************
 * Module:  Area.cpp
 * Author:  Jeimy
 * Modified: lunes, 7 de noviembre de 2022 21:02:57
 * Purpose: Implementation of the class Area
 ***********************************************************************/

#include "Area.h"
#include "Area.h"
#include "validar.cpp"
#include <clocale>
#include <conio.h>
#include <windows.h>
using namespace std;

float Area::getLado(void)
{
   return lado;
}


void Area::setLado(float newLado)
{
   lado = newLado;
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


float Area::getPI(void)
{
   return PI;
}


void Area::setPI(float newPI)
{
   PI = newPI;
}


int Area::getRadio1(void)
{
   return radio1;
}


void Area::setRadio1(int newRadio1)
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


double Area::getCuadrado(void)
{
   return cuadrado;
}


void Area::setCuadrado(double newCuadrado)
{
   cuadrado = newCuadrado;
}


double Area::getRectangulo(void)
{
   return rectangulo;
}


void Area::setRectangulo(double newRectangulo)
{
   rectangulo = newRectangulo;
}


double Area::getCirculo(void)
{
   return circulo;
}


void Area::setCirculo(double newCirculo)
{
   circulo = newCirculo;
}


double Area::getOvalo(void)
{
   return ovalo;
}


void Area::setOvalo(double newOvalo)
{
   ovalo = newOvalo;
}


double Area::getTriangulo(void)
{
   return triangulo;
}


void Area::setTriangulo(double newTriangulo)
{
   triangulo = newTriangulo;
}


Area::Area(float lado, double base, float altura, int radio1, float radio2, double cuadrado, double rectangulo, double circulo, double ovalo, double triangulo)
{
   this->base=base;
   this->lado=lado;
   this->altura=altura;
   this->radio1=radio1;
   this->radio2=radio2;
   this->cuadrado=cuadrado;
   this->rectangulo=rectangulo;
   this->circulo=circulo;
   this->ovalo=ovalo;
   this->triangulo=triangulo;
}


Area::~Area()
{
   // TODO : implement
}


void Area::ingresar(Area obj)
{
	setlocale(LC_CTYPE,"Spanish");
   int figura,base1,radio;
	float area, base,altura,radio1;
	char datoEntero[10],datoReal[10];
	do{
		cout<<"\nCALCULA EL AREA DE LAS SIGUIENTES FIGURAS"<<endl;
		cout<<"\n[1]  Cuadrado"<<"\n[2]  Triangulo"<<"\n[3]  Rectangulo"<<"\n[4]  circulo"<<"\n[5]  Ovalo"<<"\n[0] Salir"<<endl;
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
				area=funcion_strtod(datoReal);
				obj.setLado(area);
				obj.calcularArea(area);
				cout<<"\nArea del cuadrado es: "<<obj.getCuadrado()<<" cm ^2"<<endl;
				break;
			case 2:
				
				cout<<"\n~~~~~~~~~~Calculár el area de un triangulo~~~~~~~~~~~~~~~~~~"<<endl;
				str_cpy(datoReal,ingresoflotantes("\nREAL= Ingrese la altura del triangulo:  "));
				altura=funcion_strtod(datoReal);
				obj.setAltura(altura);
				str_cpy(datoReal,ingresoflotantes("\nREAL=  Ingrese la base del triangulo:  "));
				base=funcion_strtod(datoReal);
				obj.setBase(base);
				obj.calcularArea(base,altura);
				cout<<"\nArea del triangulo es:"<<obj.getTriangulo()<<" cm"<<endl;
				break;
			case 3:
				cout<<"\n~~~~~~~~~~Calculár el area de un rectangulo~~~~~~~~~~~~~~~~~~"<<endl;
				cout<<"\nAltura valor real base valor entero"<<endl;
				str_cpy(datoReal,ingresoflotantes("REAL=  Ingrese la altura del rectangulo:  "));
				altura=funcion_strtod(datoReal);
				obj.setAltura(altura);
				str_cpy(datoEntero,ingresarDatosEnteros("\nENTERO=   Ingrese la base del rectangulo:   "));
				base1=funcion_atoi(datoEntero,strlen(datoEntero));
				obj.setBase(base1);
				obj.calcularArea(altura,base1);
				cout<<"\nArea del rectangulo es:  "<<obj.getRectangulo()<<endl;
				break;	
			case 4:
				cout<<"\n~~~~~~~~~~Calculár el area de un circulo~~~~~~~~~~~~~~~~~~"<<endl;
				str_cpy(datoEntero,ingresarDatosEnteros("\nENTERO=   Ingrese el radio del circulo:   "));
				radio=funcion_atoi(datoEntero,strlen(datoEntero));
				obj.setRadio1(radio);
				obj.calcularArea(radio);
				cout<<"\nArea del circulo es:  "<<obj.getCirculo()<<endl;
				break;	
			case 5:
				cout<<"\n~~~~~~~~~~Calculár el area de un ovalo~~~~~~~~~~~~~~~~~~"<<endl;
				str_cpy(datoEntero,ingresarDatosEnteros("\nENTERO=   Ingrese el primer radio del ovalo:   "));
				radio=funcion_atoi(datoEntero,strlen(datoEntero));
				obj.setRadio1(radio);
				str_cpy(datoReal,ingresoflotantes("\nREAL=  Ingrese el segundo radio del ovalo:  "));
				radio1=funcion_strtod(datoReal);
				obj.setRadio2(radio1);
				obj.calcularArea(radio,radio1,3.1316);
				cout<<"\nArea del ovalo es:  "<<obj.getOvalo()<<endl;
				break;	
				
		}
		
		return ingresar(obj);
	}while(figura>5 );
}


double Area::calcularArea(int radio)
{
   double area;
   area=(radio*radio)*3.1416;
   this->setCirculo(area);
   return area;
}
double Area::calcularArea (double lado){//cuadrado
	double area;
	area=lado*lado;

	this->setCuadrado(lado*lado);
	return lado*lado;
}
double Area::calcularArea(float base, float altura){//triangulo
	float area;
	area=(base*altura)/2;
	this->setTriangulo(area);	
	return area;
}
double Area::calcularArea(float altura, int base){//rectangulo
	float area;
	area=altura*base;
	this->setRectangulo(area);
	return area;
   	
}
double Area::calcularArea(int radio1, float radio2,float pi){//ovalo
	float area;
	area=radio1*radio2*pi;
	this->setOvalo(area);
	return area;
}

