/***********************************************************************
 * Module:  trabajadorInformacion.h
 * Author:  Jeimy
 * Modified: martes, 22 de noviembre de 2022 21:55:32
 * Purpose: Declaration of the class trabajadorInformacion
 ***********************************************************************/

#if !defined(__Class_Diagram_1_trabajadorInformacion_h)
#define __Class_Diagram_1_trabajadorInformacion_h

class trabajadorInformacion
{
public:
   float getSueldoBase(void);
   void setSueldoBase(float newSueldoBase);
   int getDiasTrabajados(void);
   void setDiasTrabajados(int newDiasTrabajados);
   int getHorasExtras100(void);
   void setHorasExtras100(int newHorasExtras100);
   int getHorasExtras50(void);
   void setHorasExtras50(int newHorasExtras50);
   float getPrestamo(void);
   void setPrestamo(float newPrestamo);
   trabajadorInformacion(float sueldoBase,int diasTrabajados, int horasExtras100,int horasExtras50, float prestamo);
   ~trabajadorInformacion();
   trabajadorInformacion ingresarInformacion(trabajadorInformacion obj);
   void mostrarInformacion(trabajadorInformacion obj);

protected:
private:
   float sueldoBase;
   int diasTrabajados;
   int horasExtras100;
   int horasExtras50;
   float prestamo;


};

#endif
