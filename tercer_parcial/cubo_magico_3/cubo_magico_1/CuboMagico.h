/***********************************************************************
 * Module:  CuboMagico.h
 * Author:  Jeimy
 * Modified: miércoles, 1 de febrero de 2023 18:19:30
 * Purpose: Declaration of the class CuboMagico
 ***********************************************************************/

#include <iostream>
#pragma once
class CuboMagico
{
public:
   int** getCuadrado(void);
   void setCuadrado(int** newCuadrado);
   CuboMagico(int** a);
   ~CuboMagico();

protected:
private:
   int** cuadrado;
};