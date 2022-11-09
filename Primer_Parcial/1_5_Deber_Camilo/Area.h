/***********************************************************************
 * UFA-ESPE
 * Autores:  Jeimy Marley Morales Sosa & Camilo Andres Orrico Emme 
 * Modificacion: martes, 8 de noviembre de 2022 18:55:59
 * Purpose: Implementation of the class DatosPersonales
 *Nivel: Tercero           NRC:7999
 ***********************************************************************/

/**
 * @file Area.h
 * @author Marley Morales y Camilo Orrico (jmmorales11@espe.edu.com,caorrico@espe.edu.com)
 * @brief 
 * @version 0.1
 * @date 2022-11-08
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#if !defined(__Area_Area_h)
#define __Area_Area_h

class Area
{
public:
   /**
    * @brief Constructor
    * 
    * @param lado 
    * @param base 
    * @param altura 
    * @param radio1 
    * @param radio2 
    */
   Area(double lado, double base, float altura, float radio1, float radio2);
   /**
    * @brief Constructor
    * 
    * @param lado 
    */
   Area(double lado);
   /**
    * @brief Constructor
    * 
    * @param altura 
    * @param base 
    */
   Area(float altura, double base);
   /**
    * @brief Destructor
    * 
    */
   ~Area();
   /**
    * @brief Obtener objeto Base
    * 
    * @return double 
    */
   double getBase(void);
   /**
    * @brief Ingresar objeto Base
    * 
    * @param newBase 
    */
   void setBase(double newBase);
   /**
    * @brief Obtener objeto Altura
    * 
    * @return float 
    */
   float getAltura(void);
   /**
    * @brief Ingresar objeto Altura
    * 
    * @param newAltura 
    */
   void setAltura(float newAltura);
   /**
    * @brief Obtener objeto Lado
    * 
    * @return double 
    */
   double getLado(void);
   /**
    * @brief Ingresar objeto Lado
    * 
    * @param newLado 
    */
   void setLado(double newLado);
   /**
    * @brief Obtener objeto Radio1
    * 
    * @return float 
    */
   float getRadio1(void);
   /**
    * @brief Ingresar objeto Radio1
    * 
    * @param newRadio1 
    */
   void setRadio1(float newRadio1);
   /**
    * @brief Obtener objeto Radio2
    * 
    * @return float 
    */
   float getRadio2(void);
   /**
    * @brief Ingresar objeto Radio2 
    * 
    * @param newRadio2 
    */
   void setRadio2(float newRadio2);
   /**
    * @brief Ingreso de datos
    * 
    */
   void ingresar(void);
   /**
    * @brief Calculo del area del Triangulo
    * 
    * @param base 
    * @param altura 
    * @return float 
    */
   float calcularArea(double base,float altura);//Triangulo
   /**
    * @brief Calculo del area del cuadrado
    * 
    * @param lado 
    * @return float 
    */
   float calcularArea(double lado);//Cuadrado
   /**
    * @brief Calculo del area del Circulo
    * 
    * @param radio1 
    * @return float 
    */
   float calcularArea(float radio1);//Circulo
   /**
    * @brief Calculo del area del rectangulo
    * 
    * @param altura 
    * @param base 
    * @return float 
    */
   float calcularArea(float altura,double base);//Rectangulo
   /**
    * @brief Calculo del area del ovalo
    * 
    * @param radio1 
    * @param radio2 
    * @return float 
    */
   float calcularArea(float radio1,float radio2);//Ovalo
protected:
private:
   double base;
   float altura;
   double lado;
   float radio1;
   float radio2;


};

#endif