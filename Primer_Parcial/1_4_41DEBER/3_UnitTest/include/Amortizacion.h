/***********************************************************************
 * Module:  Amortizacion.h
 * Author:  Jeimy
 * Modified: domingo, 6 de noviembre de 2022 12:56:50
 * Purpose: Declaration of the class Amortizacion
 ***********************************************************************/

#if !defined(__Class_Diagram_1_Amortizacion_h)
#define __Class_Diagram_1_Amortizacion_h

class Amortizacion
{
public:
   float getCPrestamo(void);
   void setCPrestamo(float newCPrestamo);
   int getMeses(void);
   void setMeses(int newMeses);
   int getInteresMensual(void);
   void setInteresMensual(int newInteresMensual);
   int getDia(void);
   void setDia(int newDia);
   int getMes(void);
   void setMes(int newMes);
   int getAnio(void);
   void setAnio(int newAnio);
   float getInteresPrestamo(void);
   void setInteresPrestamo(float newInteresPrestamo);
   float getSaldo(void);
   void setSaldo(float newSaldo);
   float getAmortizacion(void);
   void setAmortizacion(float newAmortizacion);
   float getCuota(void);
   void setCuota(float newCuota);
   Amortizacion(float cPrestamo, int meses, int interesMensual, int dia, int mes, int anio, float interesPrestamo, float saldo, float amortizacion, float cuota);
   ~Amortizacion();
   float calcularInteres(Amortizacion obj);
   float calcularAmortizacion(Amortizacion obj);
   float calcularCuota(Amortizacion obj);
   float CalcularSaaldo(Amortizacion obj);
   Amortizacion ingresar(void);
   void diaPago(Amortizacion obj);
   void imprimir(Amortizacion obj);
   Amortizacion operator * (Amortizacion opr);
   Amortizacion operator / (Amortizacion opr);
   Amortizacion operator + ( Amortizacion opr);
   Amortizacion operator -( Amortizacion opr);


protected:
private:
   float cPrestamo;
   int meses;
   int interesMensual;
   int dia;
   int mes;
   int anio;
   float interesPrestamo;
   float saldo;
   float amortizacion;
   float cuota;


};

#endif
