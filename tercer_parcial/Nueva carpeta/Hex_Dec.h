/***********************************************************************
 * Module:  Hex_Dec.h
 * Author:  Jeimy
 * Modified: viernes, 10 de febrero de 2023 8:43:59
 * Purpose: Declaration of the class Hex_Dec
 ***********************************************************************/

#if !defined(__Hexadecimal&Decimal_Hex_Dec_h)
#define __Hexadecimal&Decimal_Hex_Dec_h

#include <funcion.h>

class Hex_Dec : public funcion
{
public:
   std::string getHex(void);
   void setHex(std::string newHex);
   int getDec(void);
   void setDec(int newDec);
   int Operation_5(void);
   Hex_Dec();
   ~Hex_Dec();
   int lisHex(void);

protected:
private:
   std::string hex;
   int Dec;


};

#endif