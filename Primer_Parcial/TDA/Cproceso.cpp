/***********************************************************************
 * Module:  Cproceso.cpp
 * Author:  Jeimy
 * Modified: miércoles, 26 de octubre de 2022 19:58:05
 * Purpose: Implementation of the class Cproceso
 ***********************************************************************/

#include "Cproceso.h"
#include <iostream>
using namespace std;
int Cproceso::getNum(void)
{
   return num;
}


void Cproceso::setNum(int newNum)
{
   num = newNum;
}


int Cproceso::getDen(void)
{
   return den;
}


void Cproceso::setDen(int newDen)
{
   den = newDen;
}

//Constructor
Cproceso::Cproceso(int nume, int deno)
{
   this->num=nume;
   this->den=deno;
}

//DESTRUCTOR
//libera memoria
Cproceso::~Cproceso()
{
   // TODO : implement
}


Cproceso Cproceso::relacional(Cproceso obj1, Cproceso obj2)
{
   int a,b,c,d;
   
   a=obj1.getNum();
   b=obj1.getDen();
   c=obj2.getNum();
   d=obj2.getDen();
   this->setNum((a*d)+(b*c)); 
   //this->setNum(obj1.getNum....)
   this->setDen(b*d	);
   return *this;
}


int Cproceso::imprimirObj(Cproceso obj)
{
   cout<<obj.getNum()<<"/"<<obj.getDen()<<endl;
}
