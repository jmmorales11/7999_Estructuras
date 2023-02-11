/***********************************************************************
 * Module:  funcion.h
 * Author:  Jeimy
 * Modified: viernes, 10 de febrero de 2023 8:46:18
 * Purpose: Declaration of the class funcion
 ***********************************************************************/

#include "Hex_Dec.h"

class funcion
{
public:
   virtual int Transformar(Hex_Dec obj)=0;
   virtual int tamano(void)=0;

protected:
private:

};

