/***********************************************************************
 * Module:  Cubo.h
 * Author:  camilo
 * Modified: miércoles, 1 de febrero de 2023 18:10:39
 * Purpose: Declaration of the class Cubo
 ***********************************************************************/

#if !defined(__Cubo_Magico_Cubo_h)
#define __Cubo_Magico_Cubo_h

class Cubo
{
public:
   virtual int llenar(int a, int b)=0;
   virtual int mostrar(int a, int b)=0;

protected:
private:

};

#endif