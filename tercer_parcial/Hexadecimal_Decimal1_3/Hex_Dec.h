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
   char getHex(void);
   void setHex(char newHex);
   int getDec(void);
   void setDec(int newDec);
   Hex_Dec();
   ~Hex_Dec();
   void lisHex(void);

protected:
private:
   char hex;
   int dec;


};

