/***********************************************************************
 * Module:  Mochila.cpp
 * Author:  camilo Orrico Y morales Jeimy
 * Modified: sábado, 4 de febrero de 2023 20:50:53
 * Purpose: Implementation of the class Mochila
 ***********************************************************************/

#include "Mochila.h"
#include "validar.h"
#include <iomanip>
#pragma once
int Mochila::getPeso(void)
{
   return peso;
}


void Mochila::setPeso(int newPeso)
{
   peso = newPeso;
}

int Mochila::getValor(void)
{
   return valor;
}

void Mochila::setValor(int newValor)
{
   valor = newValor;
}

float Mochila::getIndice(void)
{	
   return indice;
}

void Mochila::setIndice(float newIndice)
{
   indice = newIndice;
}

Mochila::Mochila(int pes, int val)
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
	int pes, val;
	char datoEntero[10];
   str_cpy(datoEntero,ingresarDatosEnteros("\nIngrese el peso del objeto: "));
   pes = funcion_atoi(datoEntero,strlen(datoEntero));
   this->setPeso(pes);
   str_cpy(datoEntero,ingresarDatosEnteros("\nIngrese el valor del objeto: "));
   val = funcion_atoi(datoEntero,strlen(datoEntero));
   this->setIndice(val/peso);
   cout<<fixed<<setprecision(2)<<val/pes;
   cout<<this->getIndice();
   this->setValor(val);
}