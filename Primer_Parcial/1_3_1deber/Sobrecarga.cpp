/***********************************************************************
 * Module:  Sobrecarga.cpp
 * Author:  Jeimy
 * Modified: martes, 1 de noviembre de 2022 19:08:48
 * Purpose: Implementation of the class Sobrecarga
 ***********************************************************************/

#include "Sobrecarga.h"
#include <stdlib.h>
#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

//Get and set
int Sobrecarga::getA(void)
{
   return a;
}

void Sobrecarga::setA(int newA)
{
   a = newA;
}

int Sobrecarga::getB(void)
{
   return b;
}


void Sobrecarga::setB(int newB)
{
   b = newB;
}
//Constructor
Sobrecarga::Sobrecarga(int a, int b)
{
	this->a=a;
	this->b=b;
}

//Destructor
Sobrecarga::~Sobrecarga()
{
   // TODO : implement
}

//metodos
void Sobrecarga::imprimir(Sobrecarga obj)
{
   cout<<obj.a<<" "<<obj.b<<endl;
   //cout<<obj.b<<" "<<obj.a<endl;
}

//Sobrecarga de operadores
Sobrecarga Sobrecarga::operator % (const Sobrecarga opr)
{
	this->a = a%opr.a;
	this->b =b%opr.b;
	//this->getA()%getB();
	//this->a %= opr.a;
	//this->b %= opr.b;
	return *this;
}


