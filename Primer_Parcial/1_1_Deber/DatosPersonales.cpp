/***********************************************************************
 * UFA-ESPE
 * Autores:  Jeimy Marley Morales Sosa & Camilo Andres Orrico Emme 
 * Modificacion: jueves, 27 de octubre de 2022 21:17:59
 * Purpose: Implementation of the class DatosPersonales
 *Nivel: Tercero           NRC:7999
 ***********************************************************************/
#include "DatosPersonales.h"
#include<iostream>
#include <string>
using namespace std;

std::string DatosPersonales::getCedula(void)
{
   return cedula;
}


void DatosPersonales::setCedula(std::string newCedula)
{
   cedula = newCedula;
}


std::string DatosPersonales::getNombre(void)
{
   return nombre;
}


void DatosPersonales::setNombre(std::string newNombre)
{
   nombre = newNombre;
}


std::string DatosPersonales::getApellido(void)
{
   return apellido;
}


void DatosPersonales::setApellido(std::string newApellido)
{
   apellido = newApellido;
}


int DatosPersonales::getAnoActual(void)
{
   return anoActual;
}


void DatosPersonales::setAnoActual(int newAnoActual)
{
   anoActual = newAnoActual;
}


int DatosPersonales::getAnoNacimiento(void)
{
   return anoNacimiento;
}


void DatosPersonales::setAnoNacimiento(int newAnoNacimiento)
{
   anoNacimiento = newAnoNacimiento;
}


int DatosPersonales::getEdad(void)
{
   return edad;
}


void DatosPersonales::setEdad(int newEdad)
{
   edad = newEdad;
}


DatosPersonales::DatosPersonales(std::string cedu, std::string nom, std::string ape, int yearA, int yearN)
{
	this->cedula=cedu;
   	this->nombre=nom;
   	this->apellido=ape;
   	this->anoActual=yearA;
  	this->anoNacimiento=yearN;
}


DatosPersonales::~DatosPersonales()
{
   // TODO : implement
}


DatosPersonales DatosPersonales::calcularEdad(DatosPersonales objEdad)
{
	int a=objEdad.getAnoActual();
	int b=objEdad.getAnoNacimiento();
    this->setEdad(a-b);
    return *this;
}


void DatosPersonales::imprimir(DatosPersonales obj)
{
   cout<<"~~~Datos personales~~~"<<endl;
   cout<<"Cedula: "<<obj.getCedula()<<endl;
   cout<<"Nombre: "<<obj.getNombre()<<endl;
   cout<<"Apellido: "<<obj.getApellido()<<endl;
   cout<<"Edad: "<<obj.getEdad()<<endl;
}


DatosPersonales DatosPersonales::ingresar(DatosPersonales objIngresar)
{
   string cedula;
	string nombre;
	string apellido;
	int aActual;
	int aNacimiento;
   cout<<"Ingrese el año actual"<<endl;
   cin>>aActual;
   this->setAnoActual(aActual);
   cout<<"Ingrese su numero de cedula"<<endl;
   cin>>cedula;
   this->setCedula(cedula);
   cout<<"Ingrese su nombre"<<endl;
   cin>>nombre;
   this->setNombre(nombre);
   cout<<"Ingrese su apellido"<<endl;
   cin>>apellido;
   this->setApellido(apellido);
   cout<<"Ingrese el año de nacimiento"<<endl;
   cin>>aNacimiento;
   this->setAnoNacimiento(aNacimiento);
   return *this;
     
}
