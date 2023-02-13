/***********************************************************************
 * Module:  Hex_Bin.h
 * Author:  camilo
 * Modified: domingo, 12 de febrero de 2023 16:09:18
 * Purpose: Declaration of the class Hex_Bin
 ***********************************************************************/

#include <string>
#pragma once
using namespace std;
class Hex_Bin
{
public:
   string getHex(void);
   void setHex(string newHex);
   int getDec(void);
   void setDec(int newDec);
  string getOct(void);
   void setOct(string newOct);
  string getBin(void);
   void setBin(string newBin);
   Hex_Bin();
   ~Hex_Bin();

protected:
private:
   string hex;
   string bin;
   string oct;
   int dec;
};
