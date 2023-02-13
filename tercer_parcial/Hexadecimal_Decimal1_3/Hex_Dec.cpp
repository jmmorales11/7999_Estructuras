/***********************************************************************
 * Module:  Hex_Dec.cpp
 * Author:  Jeimy
 * Modified: viernes, 10 de febrero de 2023 8:43:59
 * Purpose: Implementation of the class Hex_Dec
 ***********************************************************************/

#include "Hex_Dec.h"
#include "ListaDoble.cpp"
using namespace std;
char Hex_Dec::getHex(void)
{
   return hex;
}

void Hex_Dec::setHex(char newHex)
{
   hex = newHex;
}

int Hex_Dec::getDec(void)
{
   return dec;
}

void Hex_Dec::setDec(int newDec)
{
   dec = newDec;
}

Hex_Dec::Hex_Dec()
{
	this->hex=' ';
	this->dec=0;
}

Hex_Dec::~Hex_Dec()
{
   // TODO : implement
}

void Hex_Dec::lisHex(void)
{
   ListaDoble<char> *lis = new ListaDoble<char>();
   lis->insertarPorCola('0');
   lis->insertarPorCola('1');
   lis->insertarPorCola('2');
   lis->insertarPorCola('3');
   lis->insertarPorCola('4');
   lis->insertarPorCola('5');
   lis->insertarPorCola('6');
   lis->insertarPorCola('7');
   lis->insertarPorCola('8');
   lis->insertarPorCola('9');
   lis->insertarPorCola('A');
   lis->insertarPorCola('B');
   lis->insertarPorCola('C');
   lis->insertarPorCola('D');
   lis->insertarPorCola('E');
   lis->insertarPorCola('F');
   lis->mostrarPorCabeza();
}