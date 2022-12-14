/***********************************************************************
 * Module:  trabajadorInformacion.h
 * Author:  Jeimy
 * Modified: martes, 22 de noviembre de 2022 21:55:32
 * Purpose: Declaration of the class trabajadorInformacion
 ***********************************************************************/

class trabajadorInformacion
{
public:
   int getMeses();
   void setMeses(int newMeses);
   char* getNombre(void);
   void setNombre(char* newNombre);
   int getId(void);
   void setId(int newId);
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
   float calcularHorasExtras100(trabajadorInformacion);
   float calcularHorasExtras50(trabajadorInformacion t);
   float aporteIess(trabajadorInformacion t);
   float totalIngresos(trabajadorInformacion t);
   float totalEgresos(trabajadorInformacion t);
   float totalGanancia(trabajadorInformacion t);
   float calcularCuota(trabajadorInformacion t);
protected:
private:
   char* nombre;
   int id;
   float sueldoBase;
   int diasTrabajados;
   int horasExtras100;
   int horasExtras50;
   float prestamo;
   int meses;

};

#endif
