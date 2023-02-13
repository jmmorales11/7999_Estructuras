/***********************************************************************
 * Module:  Hex_Bin.h
 * Author:  camilo
 * Modified: domingo, 12 de febrero de 2023 16:09:18
 * Purpose: Declaration of the class Hex_Bin
 ***********************************************************************/

#include <string>
using namespace std;
class Hex_Bin
{
public:
   string getHex(void);
   void setHex(string newHex);
  string getBin(void);
   void setBin(string newBin);
   Hex_Bin();
   ~Hex_Bin();

protected:
private:
   string hex;
   string bin;


};
