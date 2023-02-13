/***********************************************************************
 * Module:  Hex_Dec.h
 * Author:  Jeimy
 * Modified: viernes, 10 de febrero de 2023 8:43:59
 * Purpose: Declaration of the class Hex_Dec
 ***********************************************************************/
#include "funcion.h"
#include <string>
#pragma once
using namespace std;
class Hex_Dec
{
public:
   string getHex(void);
   void setHex(string newHex);
   int getDec(void);
   void setDec(int newDec);
   Hex_Dec();
   ~Hex_Dec();

protected:
private:
   string hex;
   int dec;


};

