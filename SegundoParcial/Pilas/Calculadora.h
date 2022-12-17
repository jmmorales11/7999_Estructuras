/***********************************************************************
 * Module:  Calculadora.h
 * Author:  Jeimy
 * Modified: miércoles, 14 de diciembre de 2022 23:23:36
 * Purpose: Declaration of the class Calculadora
 ***********************************************************************/

#if !defined(__Class_Diagram_1_Calculadora_h)
#define __Class_Diagram_1_Calculadora_h

class Calculadora
{
public:
   class operaciones
   {
   public:
      virtual int suma(void)=0;
      virtual int resta(void)=0;
      virtual int multiplicacion(void)=0;
      virtual int divicion(void)=0;
   
   protected:
   private:
   
   };

   int getNum1(void);
   void setNum1(int newNum1);
   int getNum2(void);
   void setNum2(int newNum2);
   Calculadora();
   ~Calculadora();

protected:
private:
   int num1;
   int num2;


};

#endif