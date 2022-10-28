/***********************************************************************
 * Module:  Cproceso.h
 * Author:  Jeimy
 * Modified: miércoles, 26 de octubre de 2022 19:58:05
 * Purpose: Declaration of the class Cproceso
 ***********************************************************************/

#if !defined(__Proceso2_Cproceso_h)
#define __Proceso2_Cproceso_h

class Cproceso
{
public:
   int getNum(void);
   void setNum(int newNum);
   int getDen(void);
   void setDen(int newDen);
   Cproceso(int nume, int deno);
   ~Cproceso();
   Cproceso relacional(Cproceso numer, Cproceso denom);
   int imprimirObj(Cproceso obj);

protected:
private:
   int num;
   int den;


};

#endif