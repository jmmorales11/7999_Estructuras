/***********************************************************************
 * Module:  DatosPersonales.cpp
 * Author:  Jeimy
 * Modified: jueves, 27 de octubre de 2022 18:47:31
 * Purpose: Implementation of the class DatosPersonales
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
   this->setEdad(objEdad.getAnoActual()-objEdad.getAnoNacimiento());
   return *this;
}


void DatosPersonales::imprimir(DatosPersonales obj)
{
   cout<<"~~~Datos personales~~~"<<endl;
   cout<<obj.getCedula()<<endl;
   cout<<obj.getNombre()<<endl;
   cout<<obj.getApellido()<<endl;
   cout<<obj.getAnoNacimiento()<<endl;
   cout<<obj.getEdad()<<endl;
   
}
