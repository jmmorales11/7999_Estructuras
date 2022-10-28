
/***********************************************************************
 * UFA-ESPE
 * Autores:  Jeimy Marley Morales Sosa & Camilo Andres Orrico Emme 
 * Modificacion: jueves, 27 de octubre de 2022 21:17:59
 * Purpose: Implementation of the class DatosPersonales
 *Nivel: Tercero           NRC:7999
 ***********************************************************************/

/**
 * @file DatosPersonales.h
 * @author Marley Morales y Camilo Orrico (jmmorales11@espe.edu.com,caorrico@espe.edu.com)
 * @brief 
 * @version 0.1
 * @date 2022-10-27
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#if !defined(__Class_Diagram_2_DatosPersonales_h)
#define __Class_Diagram_2_DatosPersonales_h
#include <string>
class DatosPersonales
{
public:
   /**
    * @brief Obtener el objeto Cedula
    * 
    * @return std::string 
    */
   std::string getCedula(void);
   /**
    * @brief Editar el objeto Cedula
    * 
    * @param newCedula 
    */
   void setCedula(std::string newCedula);
   /**
    * @brief Obtener el objeto Nombre
    * 
    * @return std::string 
    */
   std::string getNombre(void);
   /**
    * @brief Editar el objeto Nombre
    * 
    * @param newNombre 
    */
   void setNombre(std::string newNombre);
   /**
    * @brief Obtener el objeto Apellido
    * 
    * @return std::string 
    */
   std::string getApellido(void);
   /**
    * @brief Editar el objeto Apellido
    * 
    * @param newApellido 
    */
   void setApellido(std::string newApellido);
   /**
    * @brief Obtener el objeto Año Actual
    * 
    * @return int 
    */
   int getAnoActual(void);
   /**
    * @brief Editar el objeto Año Actual
    * 
    * @param newAnoActual 
    */
   void setAnoActual(int newAnoActual);
   /**
    * @brief Obtener el objeto Año de Nacimiento
    * 
    * @return int 
    */
   int getAnoNacimiento(void);
   /**
    * @brief Editar el objeto Año de Nacimiento
    * 
    * @param newAnoNacimiento 
    */
   void setAnoNacimiento(int newAnoNacimiento);
   /**
    * @brief Obtener el objeto Edad
    * 
    * @return int 
    */
   int getEdad(void);
   /**
    * @brief Editar el objeto Edad
    * 
    * @param newEdad 
    */
   void setEdad(int newEdad);
   /**
    * @brief Constructor
    * 
    * @param cedu 
    * @param nom 
    * @param ape 
    * @param yearA 
    * @param yearN 
    */
   DatosPersonales(std::string cedu, std::string nom, std::string ape, int yearA, int yearN);
   /**
    * @brief Destructor
    * 
    */
   ~DatosPersonales();
   /**
    * @brief Funcion para calcular la edad
    * 
    * @param objEdad 
    * @return DatosPersonales 
    */
   DatosPersonales calcularEdad(DatosPersonales objEdad);
   /**
    * @brief Funcion para imprimir los datos
    * 
    * @param obj 
    */
   void imprimir(DatosPersonales obj);
   /**
    * @brief Funcion para ingresar los datos
    * 
    * @param objIngresar 
    * @return DatosPersonales 
    */
   DatosPersonales ingresar(DatosPersonales objIngresar);

protected:
private:
   std::string cedula;
   std::string nombre;
   std::string apellido;
   int anoActual;
   int anoNacimiento;
   int edad;


};

#endif
