/***********************************************************************
 * Module:  DatosPersonales.cpp
 * Author:  Jeimy
 * Modified: miércoles, 26 de octubre de 2022 21:23:59
 * Purpose: Implementation of the class DatosPersonales
 ***********************************************************************/

#include "DatosPersonales.h"

////////////////////////////////////////////////////////////////////////
// Name:       DatosPersonales::getCedula()
// Purpose:    Implementation of DatosPersonales::getCedula()
// Return:     char
////////////////////////////////////////////////////////////////////////

char DatosPersonales::getCedula(void)
{
   return cedula;
}

////////////////////////////////////////////////////////////////////////
// Name:       DatosPersonales::setCedula(char newCedula)
// Purpose:    Implementation of DatosPersonales::setCedula()
// Parameters:
// - newCedula
// Return:     void
////////////////////////////////////////////////////////////////////////

void DatosPersonales::setCedula(char newCedula)
{
   cedula = newCedula;
}

////////////////////////////////////////////////////////////////////////
// Name:       DatosPersonales::getNombre()
// Purpose:    Implementation of DatosPersonales::getNombre()
// Return:     char
////////////////////////////////////////////////////////////////////////

char DatosPersonales::getNombre(void)
{
   return nombre;
}

////////////////////////////////////////////////////////////////////////
// Name:       DatosPersonales::setNombre(char newNombre)
// Purpose:    Implementation of DatosPersonales::setNombre()
// Parameters:
// - newNombre
// Return:     void
////////////////////////////////////////////////////////////////////////

void DatosPersonales::setNombre(char newNombre)
{
   nombre = newNombre;
}

////////////////////////////////////////////////////////////////////////
// Name:       DatosPersonales::getApellido()
// Purpose:    Implementation of DatosPersonales::getApellido()
// Return:     char
////////////////////////////////////////////////////////////////////////

char DatosPersonales::getApellido(void)
{
   return apellido;
}

////////////////////////////////////////////////////////////////////////
// Name:       DatosPersonales::setApellido(char newApellido)
// Purpose:    Implementation of DatosPersonales::setApellido()
// Parameters:
// - newApellido
// Return:     void
////////////////////////////////////////////////////////////////////////

void DatosPersonales::setApellido(char newApellido)
{
   apellido = newApellido;
}

////////////////////////////////////////////////////////////////////////
// Name:       DatosPersonales::getAnoActual()
// Purpose:    Implementation of DatosPersonales::getAnoActual()
// Return:     int
////////////////////////////////////////////////////////////////////////

int DatosPersonales::getAnoActual(void)
{
   return anoActual;
}

////////////////////////////////////////////////////////////////////////
// Name:       DatosPersonales::setAnoActual(int newAnoActual)
// Purpose:    Implementation of DatosPersonales::setAnoActual()
// Parameters:
// - newAnoActual
// Return:     void
////////////////////////////////////////////////////////////////////////

void DatosPersonales::setAnoActual(int newAnoActual)
{
   anoActual = newAnoActual;
}

////////////////////////////////////////////////////////////////////////
// Name:       DatosPersonales::getAnoNacimiento()
// Purpose:    Implementation of DatosPersonales::getAnoNacimiento()
// Return:     int
////////////////////////////////////////////////////////////////////////

int DatosPersonales::getAnoNacimiento(void)
{
   return anoNacimiento;
}

////////////////////////////////////////////////////////////////////////
// Name:       DatosPersonales::setAnoNacimiento(int newAnoNacimiento)
// Purpose:    Implementation of DatosPersonales::setAnoNacimiento()
// Parameters:
// - newAnoNacimiento
// Return:     void
////////////////////////////////////////////////////////////////////////

void DatosPersonales::setAnoNacimiento(int newAnoNacimiento)
{
   anoNacimiento = newAnoNacimiento;
}

////////////////////////////////////////////////////////////////////////
// Name:       DatosPersonales::getEdad()
// Purpose:    Implementation of DatosPersonales::getEdad()
// Return:     int
////////////////////////////////////////////////////////////////////////

int DatosPersonales::getEdad(void)
{
   return edad;
}

////////////////////////////////////////////////////////////////////////
// Name:       DatosPersonales::setEdad(int newEdad)
// Purpose:    Implementation of DatosPersonales::setEdad()
// Parameters:
// - newEdad
// Return:     void
////////////////////////////////////////////////////////////////////////

void DatosPersonales::setEdad(int newEdad)
{
   edad = newEdad;
}

////////////////////////////////////////////////////////////////////////
// Name:       DatosPersonales::DatosPersonales(char cedu, char nom, char ape, int yearA, int yearN)
// Purpose:    Implementation of DatosPersonales::DatosPersonales()
// Parameters:
// - cedu
// - nom
// - ape
// - yearA
// - yearN
// Return:     
////////////////////////////////////////////////////////////////////////

DatosPersonales::DatosPersonales(char cedu, char nom, char ape, int yearA, int yearN)
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       DatosPersonales::~DatosPersonales()
// Purpose:    Implementation of DatosPersonales::~DatosPersonales()
// Return:     
////////////////////////////////////////////////////////////////////////

DatosPersonales::~DatosPersonales()
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       DatosPersonales::calcularEdad(int anoP, int anon)
// Purpose:    Implementation of DatosPersonales::calcularEdad()
// Parameters:
// - anoP
// - anon
// Return:     DatosPersonales
////////////////////////////////////////////////////////////////////////

DatosPersonales DatosPersonales::calcularEdad(int anoP, int anon)
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       DatosPersonales::imprimir()
// Purpose:    Implementation of DatosPersonales::imprimir()
// Return:     void
////////////////////////////////////////////////////////////////////////

void DatosPersonales::imprimir(void)
{
   // TODO : implement
}