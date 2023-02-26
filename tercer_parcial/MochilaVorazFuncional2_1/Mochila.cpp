/***********************************************************************
 * Module:  Mochila.cpp
 * Author:  camilo Orrico Y Morales Jeimy
 * Modified: sábado, 4 de febrero de 2023 20:50:53
 * Purpose: Implementation of the class Mochila
 ***********************************************************************/

#include "Mochila.h"
#include "validar.h"
#pragma once
double Mochila::getPeso(void)
{
   return peso;
}


void Mochila::setPeso(double newPeso)
{
   peso = newPeso;
}

double Mochila::getValor(void)
{
   return valor;
}

void Mochila::setValor(double newValor)
{
   valor = newValor;
}

double Mochila::getIndice(void)
{
   return this->getValor()/this->getPeso();
}

Mochila::Mochila(double pes, double val)
{
	this->peso=pes;
	this->valor=val;
}

Mochila::~Mochila()
{
   // TODO : implement
}

void Mochila::ingresarDatos(void)
{
	double pes, val;
	char datoEntero[10];
   str_cpy(datoEntero,ingresarDatosEnteros("\nIngrese el peso del objeto: "));
   pes = funcion_atoi(datoEntero,strlen(datoEntero));
   this->setPeso(pes);
   str_cpy(datoEntero,ingresarDatosEnteros("\nIngrese el valor del objeto: "));
   val = funcion_atoi(datoEntero,strlen(datoEntero));
   this->setValor(val);
}