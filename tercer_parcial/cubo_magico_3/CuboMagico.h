/***********************************************************************
 * Module:  CuboMagico.h
 * Author:  Fernando
 * Modified: miércoles, 1 de febrero de 2023 11:01:39
 * Purpose: Declaration of the class CuboMagico
 ***********************************************************************/

#if !defined(__Class_Diagram_2_CuboMagico_h)
#define __Class_Diagram_2_CuboMagico_h

class CuboMagico
{
public:
   int** getCuadrado(void);
   void setCuadrado(int** newCuadrado);
   CuboMagico(int** Parameter_1);
   ~CuboMagico();

protected:
private:
   int** cuadrado;


};

#endif