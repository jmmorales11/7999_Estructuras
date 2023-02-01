/***********************************************************************
 * Module:  CuboMagico.h
 * Author:  Jeimy
 * Modified: miércoles, 1 de febrero de 2023 18:19:30
 * Purpose: Declaration of the class CuboMagico
 ***********************************************************************/

#if !defined(__Cubo_Magico_CuboMagico_h)
#define __Cubo_Magico_CuboMagico_h

class CuboMagico
{
public:
   int** getCuadrado(void);
   void setCuadrado(int** newCuadrado);
   CuboMagico();
   ~CuboMagico();

protected:
private:
   int** cuadrado;


};

#endif