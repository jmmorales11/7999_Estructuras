/***********************************************************************
 * Module:  Datos.h
 * Author:  Jeimy
 * Modified: mi�rcoles, 30 de noviembre de 2022 1:05:29
 * Purpose: Declaration of the class Datos
 ***********************************************************************/

/**
 * @file Datos1.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-11-30
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#if !defined(__Class_Diagram_1_Datos_h)
#define __Class_Diagram_1_Datos_h
#include <string>
using namespace std;
class Datos1
{
public:
   /**
    * @brief obtner objecto Nombre 
    * 
    * @return string 
    */
   string getNombre(void);
   /**
    * @brief ingresar objeto Nombre 
    * 
    * @param newNombre 
    */
   void setNombre(string newNombre);
   /**
    * @brief obtner objecto Id 
    * 
    * @return int 
    */
   int getId(void);
   /**
    * @brief ingresar objeto Id 
    * 
    * @param newId 
    */
   void setId(int newId);
   /**
    * @brief obtner objecto Sueldo 
    * 
    * @return float 
    */
   float getSueldo(void);
   /**
    * @brief ingresar objeto Sueldo 
    * 
    * @param newSueldo 
    */
   void setSueldo(float newSueldo);
   /**
    * @brief obtner objecto Dias Trabajados 
    * 
    * @return int 
    */
   int getDiasTrabajados(void);
   /**
    * @brief ingresar objeto Dias Trabajados 
    * 
    * @param newDiasTrabajados 
    */
   void setDiasTrabajados(int newDiasTrabajados);
   /**
    * @brief obtner objecto Horas100 
    * 
    * @return int 
    */
   int getHoras100(void);
   /**
    * @brief ingresar objeto Horas100 
    * 
    * @param newHoras100 
    */
   void setHoras100(int newHoras100);
   /**
    * @brief obtner objecto Horas50 
    * 
    * @return int 
    */
   int getHoras50(void);
   /**
    * @brief ingresar objeto Horas50 
    * 
    * @param newHoras50 
    */
   void setHoras50(int newHoras50);
   /**
    * @brief obtner objecto Prestamo 
    * 
    * @return float 
    */
   float getPrestamo(void);
   /**
    * @brief ingresar objeto Prestamo 
    * 
    * @param newPrestamo 
    */
   void setPrestamo(float newPrestamo);
   /**
    * @brief Constructor
    * 
    * @param nom 
    * @param ID 
    * @param suel 
    * @param diasT 
    * @param h100 
    * @param h50 
    * @param pres 
    */
   Datos1(string nom, float ID, int suel, int diasT, int h100, int h50, float pres);
 	/**
 	 * @brief Constructor vacio
 	 * 
 	 */
   Datos1();
   /**
    * @brief Destructor
    * 
    */
   ~Datos1();
   /**
    * @brief Funcion ingresar datos
    * 
    * @param obj 
    * @return Datos1 
    */
   Datos1 ingresarDatos(Datos1 *obj);

protected:
private:
   std::string nombre;
   int id;
   float sueldo;
   int diasTrabajados;
   int horas100;
   int horas50;
   float prestamo;


};

#endif
