/***********************************************************************
 * Module:  Persona.cpp
 * Author:  MORALES
 * Modified: miércoles, 14 de diciembre de 2022 8:55:32
 * Purpose: Implementation of the class Persona
 ***********************************************************************/

#include "Persona.h"
#include <iostream>
using namespace std;
Persona::Persona(std::string ced,std::string nom,std::string apell)
{
	this->cedula=ced;
	this->nombre=nom;
	this->apellido=apell;
}
Persona::~Persona()
{
   // TODO : implement
}


std::string Persona::getCedula(void)
{
   return cedula;
}


void Persona::setCedula(std::string newCedula)
{
   cedula = newCedula;
}


std::string Persona::getNombre(void)
{
   return nombre;
}


void Persona::setNombre(std::string newNombre)
{
   nombre = newNombre;
}


std::string Persona::getApellido(void)
{
   return apellido;
}



void Persona::setApellido(std::string newApellido)
{
   apellido = newApellido;
}

