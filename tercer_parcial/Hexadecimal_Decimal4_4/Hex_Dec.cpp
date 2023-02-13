/***********************************************************************
 * Module:  Hex_Dec.cpp
 * Author:  Jeimy
 * Modified: viernes, 10 de febrero de 2023 8:43:59
 * Purpose: Implementation of the class Hex_Dec
 ***********************************************************************/

#include "Hex_Dec.h"
using namespace std;
string Hex_Dec::getHex(void)
{
   return hex;
}

void Hex_Dec::setHex(string newHex)
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
}

Hex_Dec::~Hex_Dec()
{
   // TODO : implement
}
