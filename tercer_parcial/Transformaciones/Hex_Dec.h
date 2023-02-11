/***********************************************************************
 * Module:  Hex_Dec.h
 * Author:  Jeimy
 * Modified: sábado, 11 de febrero de 2023 16:38:37
 * Purpose: Declaration of the class Hex_Dec
 ***********************************************************************/

#include <string>
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
   int lisHex(void);

protected:
private:
   std::string hex;
   int Dec;


};

