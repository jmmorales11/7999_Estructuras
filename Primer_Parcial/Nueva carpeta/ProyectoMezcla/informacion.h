/***********************************************************************
 * Module:  informacion.h
 * Author:  Jeimy
 * Modified: sábado, 26 de noviembre de 2022 21:20:09
 * Purpose: Declaration of the class informacion
 ***********************************************************************/
 ///SIRVE

#if !defined(__proyecto_informacion_h)
#define __proyecto_informacion_h

#include <string>
using namespace std;


class informacion
{
public:
   string getNombre(void);
   virtual void setNombre(string newNombre);
   virtual int getId(void);
   virtual void setId(int newId);
   virtual float getSueldoBase(void);
   virtual void setSueldoBase(float newSueldoBase);
   virtual int getHoras100(void);
   virtual void setHoras100(int newHoras100);
   virtual int getHoras50(void);
   virtual void setHoras50(int newHoras50);
   virtual float getPrestamo(void);
   virtual void setPrestamo(float newPrestamo);
   virtual float getVhoras100(void);
   virtual void setVhoras100(float newVhoras100);
   virtual float getVhoras50(void);
   virtual void setVhoras50(float newVhoras50);
   virtual float getVprestamoMensual(void);
   virtual void setVprestamoMensual(float newVprestamoMensual);
   virtual float getIESS(void);
   virtual void setIESS(float newIESS);
   virtual float getTotalIngreso(void);
   virtual void setTotalIngreso(float newTotalIngreso);
   virtual float getTotalEgreso(void);
   virtual void setTotalEgreso(float newTotaEgreso);
   virtual float getTotalEntrega(void);
   virtual void setTotalEntrega(float newTotalEntrega);
   virtual int getDiasTrabajados(void);
   virtual void setDiasTrabajados(int newDiasTrabajados);
   virtual string toString();
   informacion(string nom,int cedula, float salario, int h100, int h50, float pres, float vh100, float vh50, float vPrestamo, float vIess, int dTrabajados, float totalI,float totalE, float totalPago);
   ~informacion();
 //  informacion();
   informacion ingresarInformacion(informacion *obj);
   float totalIngresos(informacion *t);
   float calcularHorasExtras100(informacion *t);
   float calcularHorasExtras50(informacion *t);
   float aporteIess(informacion *t);
   float calcularCuota(informacion *t, int meses);
   float totalEgreso(informacion *t);
   float totalGanancia(informacion *t);

protected:
private:
   std::string nombre;
   int id;
   float sueldoBase;
   int horas100;
   int horas50;
   float prestamo;
   float vhoras100;
   float vhoras50;
   float vprestamoMensual;
   float IESS;
   int diasTrabajados;
   float totalIngreso;
   float totalEgresos; 
   float totalEntrega;

};

#endif
