/***********************************************************************
 * Module:  Amortizacion.h
 * Author:  Jeimy
 * Modified: domingo, 6 de noviembre de 2022 12:56:50
 * Purpose: Declaration of the class Amortizacion
 ***********************************************************************/
/**
 * @file Amortizacion.h
 * @author mMorales Jeimy (jmmorales11@espe.edu.ec)
 * @brief 
 * @version 0.1
 * @date 2022-11-06
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#if !defined(__Class_Diagram_1_Amortizacion_h)
#define __Class_Diagram_1_Amortizacion_h

class Amortizacion
{
public:
/**
 * @brief 
 * Mostrar la cantidad del prestamo
 * @return float 
 */
   float getCPrestamo(void);
/**
 * @brief 
 * Modifica la cantidad del prestamo
 * @param newCPrestamo 
 */
   void setCPrestamo(float newCPrestamo);
   /**
    * @brief Get the Meses object
    * Mostrar los meses de plazo 
    * @return int 
    */
   int getMeses(void);
   /**
    * @brief Set the Meses object
    * Modificar los meses de plazo
    * @param newMeses 
    */
   void setMeses(int newMeses);
   /**
    * @brief Get the Interes Mensual object
    * Mostrar los intereses del prestamo
    * @return int 
    */
   int getInteresMensual(void);
   /**
    * @brief Set the Interes Mensual object
    * Editar el interes del prestamo
    * @param newInteresMensual 
    */
   void setInteresMensual(int newInteresMensual);
   /**
    * @brief Get the Dia object
    * Mostrar el dia 
    * @return int 
    */
   int getDia(void);
   /**
    * @brief Set the Dia object
    * Modificar el dia 
    * @param newDia 
    */
   void setDia(int newDia);
   /**
    * @brief Get the Mes object
    * Mostrar el mes
    * @return int 
    */
   int getMes(void);
   /**
    * @brief Set the Mes object
    * Modificar el mes
    * @param newMes 
    */
   void setMes(int newMes);
   /**
    * @brief Get the Anio object
    * Mostrar el año
    * @return int 
    */
   int getAnio(void);
   /**
    * @brief Set the Anio object
    * Modificar el año
    * @param newAnio 
    */
   void setAnio(int newAnio);
   /**
    * @brief Get the Interes Prestamo object
    * Mostrar el valor $ del prestamo el cual debe pagar cada mes
    * @return float 
    */
   float getInteresPrestamo(void);
   /**
    * @brief Set the Interes Prestamo object
    * modificar el valor $ del prestamo el cual debe pagar cada mes
    * @param newInteresPrestamo 
    */
   void setInteresPrestamo(float newInteresPrestamo);
   /**
    * @brief Get the Saldo object
    * Mostrar el saldo por cada mes
    * @return float 
    */
   float getSaldo(void);
   /**
    * @brief Set the Saldo object
    * Modificar el saldo a pagar por cada mes 
    * @param newSaldo 
    */
   void setSaldo(float newSaldo);
   /**
    * @brief Get the Amortizacion object
    * Mostrar la amortizacion por cada mes
    * @return float 
    */
   float getAmortizacion(void);
   /**
    * @brief Set the Amortizacion object
    * Modificar la amortizacion por cada mes 
    * @param newAmortizacion 
    */
   void setAmortizacion(float newAmortizacion);
   /**
    * @brief Get the Cuota object
    * Mostrar la cuota que se debe pagar por cada mes
    * es la suma de la amortizacion y el interes
    * @return float 
    */
   float getCuota(void);
   /**
    * @brief Set the Cuota object
    * Modificar la cuota  que se debe pagar por cada mes 
    * @param newCuota 
    */
   void setCuota(float newCuota);
   /**
    * @brief Construct a new Amortizacion object
    * 
    * @param cPrestamo 
    * @param meses 
    * @param interesMensual 
    * @param dia 
    * @param mes 
    * @param anio 
    * @param interesPrestamo 
    * @param saldo 
    * @param amortizacion 
    * @param cuota 
    */
   Amortizacion(float cPrestamo, int meses, int interesMensual, int dia, int mes, int anio, float interesPrestamo, float saldo, float amortizacion, float cuota);
   /**
    * @brief Destroy the Amortizacion object
    * 
    */
   ~Amortizacion();
   /**
    * @brief 
    * Calcular el valor del interes a pagar por cada mes 
    * @param obj 
    * @return float 
    */
   float calcularInteres(Amortizacion obj);
   /**
    * @brief 
    * calcular la amortizacion por cada mes 
    * @param obj 
    * @return float 
    */
   float calcularAmortizacion(Amortizacion obj);
   /**
    * @brief 
    * Calcular la cuota a pagar por cada mes
    * @param obj 
    * @return float 
    */
   float calcularCuota(Amortizacion obj);
   /**
    * @brief 
    * calcula el saldo del prestamo en el trasurso de los meses
    * @param obj 
    * @return float 
    */
   float CalcularSaaldo(Amortizacion obj);
   /**
    * @brief 
    * Ingresa todos los atributos validando cada entrada
    * @return Amortizacion 
    */
   Amortizacion ingresar(void);
   /**
    * @brief 
    * Muestra el dia en el que se va a pagar cada una de las cuotas mensuales 
    * @param obj 
    */
   void diaPago(Amortizacion obj);
   /**
    * @brief 
    * Imprime la informacion de la amortizacion
    * @param obj 
    */
   void imprimir(Amortizacion obj);
   /**
    * @brief 
    * Sobrecarga del operador *
    * @param opr 
    * @return Amortizacion 
    */
   Amortizacion operator * (Amortizacion opr);
   /**
    * @brief 
    * Sobrecarga del operador /
    * @param opr 
    * @return Amortizacion 
    */
   Amortizacion operator / (Amortizacion opr);
   /**
    * @brief 
    * sobrecarga del operador +
    * @param opr 
    * @return Amortizacion 
    */
   Amortizacion operator + ( Amortizacion opr);
   /**
    * @brief 
    * Sobrecarga del operador -
    * @param opr 
    * @return Amortizacion 
    */
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
