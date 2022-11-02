/***********************************************************************
 * Module:  Sobrecarga.h
 * Author:  Jeimy
 * Modified: martes, 1 de noviembre de 2022 19:08:48
 * Purpose: Declaration of the class Sobrecarga
 ***********************************************************************/

#if !defined(__Class_Diagram_1_Sobrecarga_h)
#define __Class_Diagram_1_Sobrecarga_h

class Sobrecarga
{
public:
   int getA(void);
   void setA(int newA);
   Sobrecarga(int a, int b);
   ~Sobrecarga();
   void imprimir(Sobrecarga obj);
   int getB(void);
   void setB(int newB);
   	Sobrecarga operator % (const Sobrecarga opr);
	Sobrecarga operator != (const Sobrecarga opr);

protected:
private:
   int a;
   int b;


};

#endif
