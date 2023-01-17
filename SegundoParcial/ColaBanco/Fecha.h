/***********************************************************************
 * Module:  Fecha.h
 * Author:  sebas
 * Modified: miércoles, 14 de diciembre de 2022 8:56:01
 * Purpose: Declaration of the class Fecha
 ***********************************************************************/

#if !defined(__Class_Diagram_1_Fecha_h)
#define __Class_Diagram_1_Fecha_h

class Fecha
{
public:
   Fecha(short d,short m, short a);
   ~Fecha();
   short getDia(void);
   void setDia(short newDia);
   short getMes(void);
   void setMes(short newMes);
   short getAnio(void);
   void setAnio(short newAnio);
   short cacularEdad(Fecha *f);
   void ingresarFecha(Fecha *f);
   friend class Persona;
protected:
private:
   int dia;
   int mes;
   int anio;
   

};

#endif
