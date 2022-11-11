/***********************************************************************
 * Module:  ValidarFecha.h
 * Author:  Jeimy
 * Modified: miércoles, 9 de noviembre de 2022 6:10:15
 * Purpose: Declaration of the class ValidarFecha
 ***********************************************************************/

#if !defined(__Class_Diagram_1_ValidarFecha_h)
#define __Class_Diagram_1_ValidarFecha_h

class ValidarFecha
{
public:
   int getDia(void);
   void setDia(int newDia);
   int getMes(void);
   void setMes(int newMes);
   int getAnio(void);
   void setAnio(int newAnio);
   ValidarFecha(int dia, int mes, int anio);
   ~ValidarFecha();
   ValidarFecha ingresarFecha(ValidarFecha obj);
   int calcularFecha( ValidarFecha obj);

protected:
private:
   int dia;
   int mes;
   int anio;


};

#endif
