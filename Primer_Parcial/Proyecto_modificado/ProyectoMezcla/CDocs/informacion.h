/***********************************************************************
 * Module:  informacion.h
 * Author:  Jeimy
 * Modified: sábado, 26 de noviembre de 2022 21:20:09
 * Purpose: Declaration of the class informacion
 ***********************************************************************/
 ///SIRVE

/**
 * @file informacion.h
 * @author Jeimy Marley Morales Sosa & Camilo Andres Orrico Emme
 * @brief 
 * @version 0.1
 * @date 2022-11-30
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#if !defined(__proyecto_informacion_h)
#define __proyecto_informacion_h

#include <string>
using namespace std;


class informacion
{
public:
   /**
    * @brief Obtener el objecto Nombre
    * 
    * @return string 
    */
   string getNombre(void);
   /**
    * @brief Ingresar objecto Nombre 
    * 
    * @param newNombre 
    */
   virtual void setNombre(string newNombre);
   /**
    * @brief Obtener el objecto Id
    * 
    * @return int 
    */
   virtual int getId(void);
   /**
    * @brief Ingresar objecto Id 
    * 
    * @param newId 
    */
   virtual void setId(int newId);
   /**
    * @brief Obtener el objecto Sueldo Base
    * 
    * @return float 
    */
   virtual float getSueldoBase(void);
   /**
    * @brief Ingresar objecto Sueldo Base 
    * 
    * @param newSueldoBase 
    */
   virtual void setSueldoBase(float newSueldoBase);
   /**
    * @brief Obtener el objecto Horas100
    * 
    * @return int 
    */
   virtual int getHoras100(void);
   /**
    * @brief Ingresar objecto Horas100 
    * 
    * @param newHoras100 
    */
   virtual void setHoras100(int newHoras100);
   /**
    * @brief Obtener el objecto Horas50
    * 
    * @return int 
    */
   virtual int getHoras50(void);
   /**
    * @brief Ingresar objecto Horas50 
    * 
    * @param newHoras50 
    */
   virtual void setHoras50(int newHoras50);
   /**
    * @brief Obtener el objecto Prestamo
    * 
    * @return float 
    */
   virtual float getPrestamo(void);
   /**
    * @brief Ingresar objecto Prestamo 
    * 
    * @param newPrestamo 
    */
   virtual void setPrestamo(float newPrestamo);
   /**
    * @brief Obtener el objecto Vhoras100
    * 
    * @return float 
    */
   virtual float getVhoras100(void);
   /**
    * @brief Ingresar objecto Vhoras100 
    * 
    * @param newVhoras100 
    */
   virtual void setVhoras100(float newVhoras100);
   /**
    * @brief Obtener el objecto Vhoras50 
    * 
    * @return float 
    */
   virtual float getVhoras50(void);
   /**
    * @brief Ingresar objecto Vhoras50 
    * 
    * @param newVhoras50 
    */
   virtual void setVhoras50(float newVhoras50);
   /**
    * @brief Obtener el objecto Vprestamo Mensual 
    * 
    * @return float 
    */
   virtual float getVprestamoMensual(void);
   /**
    * @brief Ingresar objecto Vprestamo Mensual 
    * 
    * @param newVprestamoMensual 
    */
   virtual void setVprestamoMensual(float newVprestamoMensual);
   /**
    * @brief Obtener el objecto IESS
    * 
    * @return float 
    */
   virtual float getIESS(void);
   /**
    * @brief Ingresar objecto IESS
    * 
    * @param newIESS 
    */
   virtual void setIESS(float newIESS);
   /**
    * @brief Obtener el objecto Total Ingreso 
    * 
    * @return float 
    */
   virtual float getTotalIngreso(void);
   /**
    * @brief Ingresar objecto Total Ingreso 
    * 
    * @param newTotalIngreso 
    */
   virtual void setTotalIngreso(float newTotalIngreso);
   /**
    * @brief Obtener el objecto Total Egreso 
    * 
    * @return float 
    */
   virtual float getTotalEgreso(void);
   /**
    * @brief Ingresar objecto Total Egreso 
    * 
    * @param newTotaEgreso 
    */
   virtual void setTotalEgreso(float newTotaEgreso);
   /**
    * @brief Obtener el objecto Total Entrega 
    * 
    * @return float 
    */
   virtual float getTotalEntrega(void);
   /**
    * @brief Ingresar objecto Total Entrega 
    * 
    * @param newTotalEntrega 
    */
   virtual void setTotalEntrega(float newTotalEntrega);
   /**
    * @brief Obtener el objecto Dias Trabajados 
    * 
    * @return int 
    */
   virtual int getDiasTrabajados(void);
   /**
    * @brief Ingresar objecto Dias Trabajados 
    * 
    * @param newDiasTrabajados 
    */
   virtual void setDiasTrabajados(int newDiasTrabajados);
   /**
    * @brief Funcion to String
    * 
    * @return string 
    */
   virtual string toString();
   /**
    * @brief Constructor informacion
    * 
    * @param nom 
    * @param cedula 
    * @param salario 
    * @param h100 
    * @param h50 
    * @param pres 
    * @param vh100 
    * @param vh50 
    * @param vPrestamo 
    * @param vIess 
    * @param dTrabajados 
    * @param totalI 
    * @param totalE 
    * @param totalPago 
    */
   informacion(string nom,int cedula, float salario, int h100, int h50, float pres, float vh100, float vh50, float vPrestamo, float vIess, int dTrabajados, float totalI,float totalE, float totalPago);
   /**
    * @brief Constructor informacion vacio
    * 
    */
   informacion();  
   /**
    * @brief Destructor
    * 
    */
   ~informacion();
   /**
    * @brief Funcion ingresar Informacion
    * 
    * @param obj 
    * @return informacion 
    */
   informacion ingresarInformacion(informacion *obj);
   /**
    * @brief Funcion calcular total ingresos
    * 
    * @param t 
    * @return float 
    */
   float totalIngresos(informacion *t);
   /**
    * @brief Funcion calcular horas extras 100
    * 
    * @param t 
    * @return float 
    */
   float calcularHorasExtras100(informacion *t);
   /**
    * @brief Funcion calcular horas extras 50
    * 
    * @param t 
    * @return float 
    */
   float calcularHorasExtras50(informacion *t);
   /**
    * @brief Funcion calcular aporte IESS
    * 
    * @param t 
    * @return float 
    */
   float aporteIess(informacion *t);
   /**
    * @brief Funcion calcular cuota
    * 
    * @param t 
    * @param meses 
    * @return float 
    */
   float calcularCuota(informacion *t, int meses);
   /**
    * @brief Funcion calcular total egresos
    * 
    * @param t 
    * @return float 
    */
   float totalEgreso(informacion *t);
   /**
    * @brief Funcion calcular total Ganancia
    * 
    * @param t 
    * @return float 
    */
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
