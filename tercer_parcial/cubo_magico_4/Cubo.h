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
   virtual void llenar(int a, int c, int d)=0;
   virtual void mostrar(int a, int b)=0;
   virtual void suma(int a, int b, int c)=0;

protected:
private:

};

#endif